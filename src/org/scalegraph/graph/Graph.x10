package org.scalegraph.graph;

import x10.util.ArrayList;
import x10.util.HashMap;
import x10.compiler.Pinned;
import x10.util.Team;

import org.scalegraph.concurrent.Parallel;
import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.GrowableMemory;
import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.util.DistGrowableMemory;
import org.scalegraph.util.tuple.*;
import org.scalegraph.concurrent.DistScatterGather;
import org.scalegraph.concurrent.Team2;
import org.scalegraph.util.MathAppend;
import org.scalegraph.graph.id.IdStruct;
import org.scalegraph.concurrent.Remote;
import org.scalegraph.concurrent.Dist2D;

/** Raw graph object. The instances of this class are pinned to a particular place because moving the instance to another place is not worth.
 */
@Pinned public class Graph(vertexType :Int) {
	static type EDGE = Tuple2[Long,Long];
	
    private team :Team;
    private graphAttributes = new HashMap[String, Any]();
	private vertexAttributes = new HashMap[String, Any]();
	private edgeAttributes = new HashMap[String, Any]();
	
	//private vertexTranslator :PlaceLocalHandle[vertexTranslator[T]];
	private vertexTranslator :Any;
	private edgeList :DistGrowableMemory[Long];
	
	private var numberOfVertices :Long = 0L;
	private var numberOfEdges :Long = 0L;
	
	/** Vertex ID type. Currently, String ID type is not supported.
	 */
	public static class VertexType {
		public static val Long = Attribute.ID.Long;
		public static val Double = Attribute.ID.Double;
	//	public static val String = Attribute.ID.String;
	}

	/** Returns the number of vertices or the maximum ID number if translation is not used.
	 */
	public def numberOfVertices() = numberOfVertices;
	
	/** Returns the number of edges.
	 */
	public def numberOfEdges() = numberOfEdges;
	
	public def team() = team;

	private static def createVertexTranslator[T](team :Team) {T haszero}
	{
		// currently support only this situation
		if(team != Team.WORLD)
			throw new IllegalArgumentException("Please, input Team.WORLD as the team parameter.");

		val vertexNames = DistGrowableMemory[T](team.placeGroup());
		val vertexNameAtt = new Attribute(vertexNames);
		val vertexTranslator = PlaceLocalHandle.makeFlat[VertexTranslator[T]](
				team.placeGroup(), ()=>new VertexTranslator[T](team, vertexNames()));
		return Tuple2[Any, Any](vertexNameAtt, vertexTranslator as Any);
	}
	
	/** Creates empty raw graph object.
	 * @param team_ The team that the data is spread into
	 * @param vertexType_ The type of vertex ID
	 * @param useTranslator Whether you want to use translator. When you use translator, it will assign each vertex with a small integer value.
	 * If the vertex ID type is String, you must use translator.
	 */
	public def this(team_ :Team, vertexType_ :Int, useTranslator :Boolean) {
		property(vertexType_);
		team = team_;
		edgeList = new DistGrowableMemory[Long](team_.placeGroup());
		
		var translator :Tuple2[Any, Any] =
			Tuple2[Any, Any](null, null);
		switch(vertexType) {
		case VertexType.Long:
			if(useTranslator)
				translator = createVertexTranslator[Long](team);
			break;
		case VertexType.Double:
			if(useTranslator)
				translator = createVertexTranslator[Double](team);
			break;
	//	case VertexType.String:
	//		if(useTranslator)
	//			translator = createVertexTranslator[String](team);
	//		break;
		default:
			throw new IllegalArgumentException("Edge type not supported");
		}
		
		vertexTranslator = translator.get2();
		if(vertexTranslator != null) {
			val vertexNameAtt = translator.get1();
			vertexAttributes.put("name", vertexNameAtt);
		}
	}
	
	private def getOrCreateAttribute[T](vertexOrEdge :boolean, name :String,
			throwAlreadyExist :boolean) {T haszero} :Attribute[T]
	{
		val attributes = vertexOrEdge ? vertexAttributes : edgeAttributes;
		val att = attributes.getOrElse(name, null);
		if(att != null) {
			if(throwAlreadyExist) throw new IllegalOperationException("key already exists");
			return att as Attribute[T];
		}
		val newAtt = new Attribute(new DistGrowableMemory[T](team.placeGroup()));
		attributes.put(name, newAtt);
		return newAtt;
	}
	
	/** Returns the vertex attribute.
	 * @param name The name of the attribute.
	 */
	public def getVertexAttribute[T](name :String) {T haszero} =
		vertexAttributes.getOrThrow(name) as Attribute[T];
		
	/** Returns the edge attribute.
	 * @param name The name of the attribute.
	 */
	public def getEdgeAttribute[T](name :String) {T haszero} =
		edgeAttributes.getOrThrow(name) as Attribute[T];
	
	private static def innerAddEdges(team_ :Team, maxVertexID :Long,
			ref :GlobalRef[Graph], edgeList_ :GrowableMemory[Long], translated :MemoryChunk[Long])
	{
		val globalMaxVertexID = team_.allreduce(team_.getRole(here), maxVertexID, Team.MAX);
		val globalNumOfEdges = team_.allreduce(team_.getRole(here), translated.size() / 2, Team.ADD);
		if(here == ref.home) {
			val g = ref.getLocalOrCopy();
			g.numberOfVertices = Math.max(globalMaxVertexID + 1, g.numberOfVertices);
			g.numberOfEdges += globalNumOfEdges;
		}
		
		if(edgeList_.size() == 0L)
			edgeList_.setMemory(translated);
		else
			edgeList_.add(translated);
	}
	
	/** Set/Add edges to this instance.
	 * @param edges The distributed memory that contains edges.
	 */
	public def addEdges(edges :DistMemoryChunk[Long]) {
		val vt_ = vertexTranslator;
		val team_ = team;
		val ref = GlobalRef[Graph](this);
		val edgeList_ = edgeList;
		
		team.placeGroup().broadcastFlat(()=> {
			try {
				var translated :MemoryChunk[Long];
				var maxVertexID :Long = 0;
				if(vt_ != null) {
					val vtt_ = (vt_ as PlaceLocalHandle[VertexTranslator[Long]])();
					translated = new MemoryChunk[Long](edges().size());
					vtt_.translateWithAll(edges(), translated, true);
					maxVertexID = (vtt_.size() - 1) * team_.size() + team_.getRole(here);
				}
				else {
					val edges_ = edges();
					maxVertexID = Parallel.reduce[Long](edges_.range(),
							(i:Long,t:Long)=>Math.max(edges_(i),t), (u:Long,v:Long)=>Math.max(u,v));
					translated = edges_;
				}
				innerAddEdges(team_, maxVertexID, ref, edgeList_(), translated);
			}
			catch(e : CheckedThrowable) {
				e.printStackTrace();
			}
		});
	}
	
	/** Set/Add edges to this instance.
	 * @param edges The distributed memory that contains edges.
	 */
	public def addEdges(edges :DistMemoryChunk[Double]) {
		val vt_ = vertexTranslator;
		val team_ = team;
		val ref = GlobalRef[Graph](this);
		val edgeList_ = edgeList;
		
		team.placeGroup().broadcastFlat(()=> {
			try {
				val edges_ = edges();
				val translated = new MemoryChunk[Long](edges_.size());
				var maxVertexID :Long = 0;
				if(vt_ != null) {
					val vtt_ = (vt_ as PlaceLocalHandle[VertexTranslator[Double]])();
					vtt_.translateWithAll(edges_, translated, true);
					maxVertexID = (vtt_.size() - 1) * team_.size() + team_.getRole(here);
				}
				else {
					maxVertexID = Parallel.reduce[Long](translated.range(),
							(i:Long,t:Long)=> {
								translated(i) = edges_(i) as Long;
								return Math.max(translated(i),t);
							}, (u:Long,v:Long)=>Math.max(u,v));
				}
				innerAddEdges(team_, maxVertexID, ref, edgeList_(), translated);
			}
			catch(e : CheckedThrowable) {
				e.printStackTrace();
			}
		});
	}
	/* currently not supported
	public def addEdges(edges :DistMemoryChunk[String]) {
		internalAddEdges(VertexTranslator.putAndTranslate(
				vertexTranslator as PlaceLocalHandle[VertexTranslator[String]], edges));
	}
	*/

	/* Translates vertex IDs. When you are using translator and you want to add vertex attributes with [ID, value] pair,
	 * you have to use this method before adding attributes.
	 * @param key Input data for translation
	 * @param ids 
	 */
	public def translateVertexIds[T](key :DistMemoryChunk[T], ids :DistMemoryChunk[Long]) {
		VertexTranslator.translate(vertexTranslator as PlaceLocalHandle[VertexTranslator[T]],
				key, ids, false);
	}
	
	private def internalSetAttributeValues[T](vertexOrEdge :Boolean, name :String, indexes : () => MemoryChunk[Long], values :DistMemoryChunk[T]) {T haszero} {
		val att = getOrCreateAttribute[T](vertexOrEdge, name, false);
		val team_ = team;
		
		val edgeList_ = edgeList;
		val vi = VertexInfo(vertexTranslator, vertexType, numberOfVertices, team.size());
		
		team_.placeGroup().broadcastFlat(() => {
			try {
				val att_ = att.values()();
				if(vertexOrEdge) {
					val actualLocalVertices = getLocalNumberOfVertices(vi, team_.getRole(here));
					att_.setSize(actualLocalVertices);
				}
				else {
					att_.setSize(edgeList_().size());
				}
				
				val mask = team_.size() - 1;
				val shift = MathAppend.log2(team_.size()) as Int;
				val indexes_ = indexes();
				val values_ = values();
				Remote.put(team_, att_.data(), indexes_.range(),
						(index:Long, put:(Int, Long,  T)=>void)=> {
					val dstRole = indexes_(index) & mask;
					val dstIdx = indexes_(index) >> shift;
					put(dstRole as Int, dstIdx, values_(index));
				});
			}
			catch(e : CheckedThrowable) {
				e.printStackTrace();
			}
		});
	}
	
	/** Set edge attribute values. The length of values for each place must be match the length of edge list.
	 * If the same attribute is exist, replaces the all values.
	 * @param name The name of attribute.
	 * @param values The attribute values.
	 */
	public def setEdgeAttribute[T](name :String, values :DistMemoryChunk[T]) {T haszero} {
		val attValues = getOrCreateAttribute[T](false, name, false).values();
		val edgeList_ = edgeList;
		team.placeGroup().broadcastFlat(() => {
			val numEdges = edgeList_().size() / 2;
			if(numEdges != values().size())
				throw new IllegalArgumentException("The number of attribute values is not match the number of edges");
			attValues().setMemory(values());
		});
	}
	
	/** Set edge attribute values with edge indexes.
	 * The attributes that the values are not provided will be filled with default values.
	 * If the same attribute values are exist, overwrite the values.
	 * @param name The name of attribute.
	 * @param indexes The edge indexes for each attribute values.
	 * @param values The attribute values.
	 */
	public def setEdgeAttribute[T](name :String, indexes :DistMemoryChunk[Long], values :DistMemoryChunk[T]) {T haszero} {
		internalSetAttributeValues(false, name, ()=>indexes(), values);
	}
	
	/** Write back attribute values.
	 * @param name The name of attribute.
	 * @param sparseMatrix The distributed sparse matrix that contains edge indexes 
	 * for each attribute values.
	 * @param values The attribute values.
	 */
	public def setEdgeAttribute[T](name :String, sparseMatrix : DistSparseMatrix, values :DistMemoryChunk[T]) {T haszero} {
		internalSetAttributeValues(false, name, ()=>sparseMatrix().edgeIndexes, values);
	}
	
	private static struct VertexInfo {
		val vertexTranslator : Any;
		val vertexType : Int;
		val numberOfPlaces : Int;
		val numberOfVertices : Long;
		
		public def this(vertexTranslator :Any, vertexType :Int, numberOfVertices :Long, numberOfPlaces :Int) {
			this.vertexTranslator = vertexTranslator;
			this.vertexType = vertexType;
			this.numberOfVertices = numberOfVertices;
			this.numberOfPlaces = numberOfPlaces;
		}
	}
	
	private static def getLocalNumberOfVertices(vi :VertexInfo, role :Int) :Long {
		val vt_ = vi.vertexTranslator;
		if(vt_ != null) {
			switch(vi.vertexType) {
			case VertexType.Long:
				return (vt_ as PlaceLocalHandle[VertexTranslator[Long]])().size();
			case VertexType.Double:
				return (vt_ as PlaceLocalHandle[VertexTranslator[Double]])().size();
		//	case VertexType.String:
		//		return (vt_ as PlaceLocalHandle[VertexTranslator[String]])().size();
			default:
				throw new IllegalArgumentException();
			}
		}
		else {
			val g = vi.numberOfVertices;
			val d = vi.numberOfPlaces;
			return (g / d + ((g % d) > role ? 1L : 0L));
		}
	}


	/** Set vertex attribute values. The length of values for each place must be match the length of vertex list.
	 * If the same attribute is exist, replaces the all values.
	 * @param name The name of attribute.
	 * @param values The attribute values.
	 */
	public def setVertexAttribute[T](name :String, values :DistMemoryChunk[T]) {T haszero}
	{
		val team_ = team;
		val attValues = getOrCreateAttribute[T](true, name, false).values();
		val vi = VertexInfo(vertexTranslator, vertexType, numberOfVertices, team.size());
		
		team_.placeGroup().broadcastFlat(() => {
			try {
				val values_ = values();
				val actualLocalVertices = getLocalNumberOfVertices(vi, team_.getRole(here));
				if(actualLocalVertices != values_.size())
					throw new IllegalArgumentException("The number of attribute values is not match the number of vertices");
				
				attValues().setMemory(values_);
			}
			catch(e : CheckedThrowable) {
				e.printStackTrace();
			}
		});
	}
	
	/** Set vertex attribute values with vertex IDs.
	 * The attributes that the values are not provided will be filled with default values.
	 * If the same attribute values are exist, overwrite the values.
	 * @param name The name of attribute.
	 * @param ids The edge indexes for each attribute values.
	 * @param values The attribute values.
	 */
	public def setVertexAttribute[T](name :String, ids :DistMemoryChunk[Long],
			values :DistMemoryChunk[T]) {T haszero}
	{
		internalSetAttributeValues(true, name, ()=>ids(), values);
	}
	
	/** Set vertex attribute values with vertex IDs.
	 * The attributes that the values are not provided will be filled with default values.
	 * If the same attribute values are exist, overwrite the values.
	 * @param name The name of attribute.
	 * @param ids The edge indexes for each attribute values.
	 * @param values The attribute values.
	 */
	public def setVertexAttribute[T](name :String, sparseMatrix :DistSparseMatrix,
			values :DistMemoryChunk[T]) {T haszero}
	{
		setVertexAttribute[T](name, sparseMatrix, values, 0);
	}
	
	/** Set vertex attribute values with vertex IDs.
	 * The attributes that the values are not provided will be filled with default values.
	 * If the same attribute values are exist, overwrite the values.
	 * @param name The name of attribute.
	 * @param ids The edge indexes for each attribute values.
	 * @param values The attribute values.
	 */
	public def setVertexAttribute[T](name :String, sparseMatrix :DistSparseMatrix,
			values :DistMemoryChunk[T], z :Int) {T haszero}
	{
		val attValues = getOrCreateAttribute[T](true, name, false).values();
		val team_ = team;
		val vi = VertexInfo(vertexTranslator, vertexType, numberOfVertices, team.size());
		
		team_.placeGroup().broadcastFlat(() => {
			try {
				val roleInGraph = team_.getRole(here);
				val sizeOfGraph = team_.size();
				val logSizeOfGraph = MathAppend.log2(sizeOfGraph) as Int;
				val att_ = attValues();
				val actualLocalVertices = getLocalNumberOfVertices(vi, team_.getRole(here));
				att_.setSize(actualLocalVertices);
				
				val setter = (i :Long, v :T) => {
					if(i < actualLocalVertices) att_(i) = v;
				};

				if(sparseMatrix.dist().z() == z) {
					val allTeam = sparseMatrix.dist().allTeam();
					val roleInDist = allTeam.getRole(here);
					val sizeOfDist = allTeam.size();
					val localsize = 1L << sparseMatrix.ids().lgl;
					val values_ = values();
					
					Remote.put(team_, setter, 0L..(localsize-1),
							(index:Long, put:(Int, Long,  T)=>void)=> {
						val rr = index * sizeOfDist + roleInDist;
						val dstRole = rr & (sizeOfGraph - 1);
						val dstIdx = rr >> logSizeOfGraph;
						put(dstRole as Int, dstIdx, values_(index));
					});
				}
				else {
					Remote.put(team_, setter, 0L..0L,
							(index:Long, put:(Int, Long,  T)=>void)=> { });
				}
			}
			catch(e : CheckedThrowable) {
				e.printStackTrace();
			}
		});
	}

	/** Constructs distributed 2D partitioned sparse matrix (CSR).
	 * @param dist2d
	 * @param directed Directed graph or undirected graph. If false (undirected graph), all edges are duplicated to connect with each direction.
	 * @param outerOrInner Constructs outer edges (true) or inner edges (false). This flag is valuable only for directed graph.
	 */
	public def constructDistSparseMatrix(dist2d :Dist2D, directed :Boolean, outerOrInner :Boolean) {
		val team_ = team;
		val edgelist_ = edgeList;
		
		val roleMap = new MemoryChunk[Int](dist2d.allTeam().size());
		val places = dist2d.allTeam().places();
		for([i] in places) {
			roleMap(i) = team_.getRole(places(i));
		}
		val ids = dist2d.getIds(numberOfVertices, outerOrInner);
		val rmask = (1L << ids.lgr) - 1;
		val cmask = (1L << (ids.lgc + ids.lgr)) - 1 - rmask;
		return new DistSparseMatrix(dist2d, () => {
			val scatterGather = new DistScatterGather(team_);
			val edgelist__ = edgelist_();
			Parallel.iter(0..(edgelist__.size()/2 - 1), (tid:Long, r:LongRange) => {
				val counts = scatterGather.getCounts(tid as Int);
				if(directed) {
					for(i in r) {
						val v0 = edgelist__(i*2 + 0);
						val v1 = edgelist__(i*2 + 1);
						counts(roleMap((v0 & cmask) | (v1 & rmask)))++;
					}
				}
				else {
					for(i in r) {
						val v0 = edgelist__(i*2 + 0);
						val v1 = edgelist__(i*2 + 1);
						counts(roleMap((v0 & cmask) | (v1 & rmask)))++;
						counts(roleMap((v1 & cmask) | (v0 & rmask)))++;
					}
				}
			});
			scatterGather.sum();
			val teamRank = team_.getRole(here);
			val teamSize = team_.size();
			val sendCount = scatterGather.sendCount();
			val sendEdges = new MemoryChunk[EDGE](sendCount);
			val sendIndexes = new MemoryChunk[Long](sendCount);
			Parallel.iter(0..(edgelist__.size()/2 - 1), (tid:Long, r:LongRange) => {
				val offsets = scatterGather.getOffsets(tid as Int);
				/*
				for(i in r) {
					val v0 = edgelist__(i*2 + 0);
					val v1 = edgelist__(i*2 + 1);
					val off0 = offsets(roleMap((v0 & cmask) | (v1 & rmask)))++;
					sendEdges(off0) = outerOrInner ? EDGE(v0, v1) : EDGE(v1, v0);
					sendIndexes(off0) = i * teamSize + teamRank;
					if(!directed) {
						val off1 = offsets(roleMap((v1 & cmask) | (v0 & rmask)))++;
						sendEdges(off1) = outerOrInner ? EDGE(v1, v0) : EDGE(v0, v1);
						sendIndexes(off1) = i * teamSize + teamRank;
					}
				}
				// The following code is equivalent to the above code.
				*/
				if(directed) {
					if(outerOrInner) {
						for(i in r) {
							val v0 = edgelist__(i*2 + 0);
							val v1 = edgelist__(i*2 + 1);
							val off0 = offsets(roleMap((v0 & cmask) | (v1 & rmask)))++;
							sendEdges(off0) = EDGE(v0, v1);
							sendIndexes(off0) = i * teamSize + teamRank;
						}
					}
					else {
						for(i in r) {
							val v0 = edgelist__(i*2 + 0);
							val v1 = edgelist__(i*2 + 1);
							val off0 = offsets(roleMap((v0 & cmask) | (v1 & rmask)))++;
							sendEdges(off0) = EDGE(v1, v0);
							sendIndexes(off0) = i * teamSize + teamRank;
						}
					}
				}
				else {
					if(outerOrInner) {
						for(i in r) {
							val v0 = edgelist__(i*2 + 0);
							val v1 = edgelist__(i*2 + 1);
							val off0 = offsets(roleMap((v0 & cmask) | (v1 & rmask)))++;
							sendEdges(off0) = EDGE(v0, v1);
							sendIndexes(off0) = i * teamSize + teamRank;
							val off1 = offsets(roleMap((v1 & cmask) | (v0 & rmask)))++;
							sendEdges(off1) = EDGE(v1, v0);
							sendIndexes(off1) = i * teamSize + teamRank;
						}
					}
					else {
						for(i in r) {
							val v0 = edgelist__(i*2 + 0);
							val v1 = edgelist__(i*2 + 1);
							val off0 = offsets(roleMap((v0 & cmask) | (v1 & rmask)))++;
							sendEdges(off0) = EDGE(v1, v0);
							sendIndexes(off0) = i * teamSize + teamRank;
							val off1 = offsets(roleMap((v1 & cmask) | (v0 & rmask)))++;
							sendEdges(off1) = EDGE(v0, v1);
							sendIndexes(off1) = i * teamSize + teamRank;
						}
					}
				}
			});
			val recvEdges = scatterGather.scatter(sendEdges);
			val recvIndexes = scatterGather.scatter(sendIndexes);
			return new Tuple2[IdStruct, SparseMatrix](ids, new SparseMatrix(recvEdges, recvIndexes, ids));
		});
	}
	
	/** Constructs non-distributed sparse matrix.
	 * @param place The place where the sparse matrix is created
	 * @param directed Directed graph or undirected graph. If false (undirected graph), all edges are duplicated to connect with each direction.
	 * @outerOrInner Constructs outer edges (true) or inner edges (false). This flag is worth only for directed graph.
	 */
	public def constructSimpleSparseMatrix(place :Place, directed :Boolean, outerOrInner :Boolean) {
		// return GlobalRef[SparseMatrix]...
		val team_ = team;
		val edgelist_ = edgeList;
		val root = team_.getRole(place);
		// too complex ...
		val ret = GlobalRef[Cell[GlobalRef[Cell[SparseMatrix]]]](
				new Cell[GlobalRef[Cell[SparseMatrix]]](Zero.get[GlobalRef[Cell[SparseMatrix]]]()));
		team_.placeGroup().broadcastFlat(() => {
			try {
				val edgelist__ = edgelist_();
				val numEdges = edgelist__.size() / 2;
				val sendCount = directed ? numEdges : numEdges * 2;
				val sendEdges = new MemoryChunk[EDGE](sendCount);
				val sendIndexes = new MemoryChunk[Long](sendCount);
				val teamSize = team_.size();
				val teamRank = team_.getRole(here);
				Parallel.iter(0..(numEdges - 1), (tid:Long, r:LongRange) => {
					if(directed) {
						if(outerOrInner) {
							for(i in r) {
								val v0 = edgelist__(i*2 + 0);
								val v1 = edgelist__(i*2 + 1);
								sendEdges(i) = EDGE(v0, v1);
								sendIndexes(i) = i * teamSize + teamRank;
							}
						}
						else {
							for(i in r) {
								val v0 = edgelist__(i*2 + 0);
								val v1 = edgelist__(i*2 + 1);
								sendEdges(i) = EDGE(v1, v0);
								sendIndexes(i) = i * teamSize + teamRank;
							}
						}
					}
					else {
						if(outerOrInner) {
							for(i in r) {
								val v0 = edgelist__(i*2 + 0);
								val v1 = edgelist__(i*2 + 1);
								sendEdges(i*2 + 0) = EDGE(v0, v1);
								sendIndexes(i*2 + 0) = i * teamSize + teamRank;
								sendEdges(i*2 + 1) = EDGE(v1, v0);
								sendIndexes(i*2 + 1) = i * teamSize + teamRank;
							}
						}
						else {
							for(i in r) {
								val v0 = edgelist__(i*2 + 0);
								val v1 = edgelist__(i*2 + 1);
								sendEdges(i*2 + 0) = EDGE(v1, v0);
								sendIndexes(i*2 + 0) = i * teamSize + teamRank;
								sendEdges(i*2 + 1) = EDGE(v0, v1);
								sendIndexes(i*2 + 1) = i * teamSize + teamRank;
							}
						}
					}
				});
				
				val team2 = new Team2(team_);
				
				val sendNumEdges = new MemoryChunk[Int](1);
				sendNumEdges(0) = sendEdges.size() as Int;
				if(place == here) { // root
					val counts = new MemoryChunk[Int](team_.size(), 0, true);
					val offsets  = new MemoryChunk[Int](team_.size() + 1);
					team2.gather(root, sendNumEdges, counts);
					
					offsets(0) = 0;
					for(i in counts.range()) offsets(i + 1) = offsets(i) + counts(i);
					val recvEdges = new MemoryChunk[EDGE](offsets(team_.size()));
					val recvIndexes = new MemoryChunk[Long](offsets(team_.size()));
					team2.gatherv(root, sendEdges, recvEdges, counts, offsets);
					team2.gatherv(root, sendIndexes, recvIndexes, counts, offsets);
					
					val lgl = MathAppend.ceilLog2(numberOfVertices);
					val sparseMatrix = new SparseMatrix(recvEdges, recvIndexes, lgl);
					
					// write result
					val ref = new GlobalRef[Cell[SparseMatrix]](new Cell[SparseMatrix](sparseMatrix));
					at(ret.home) {
						ret()() = ref;
					}
				}
				else { // non-root
					val nullInt = MemoryChunk.getNull[Int]();
					val nullEdge = MemoryChunk.getNull[EDGE]();
					val nullLong = MemoryChunk.getNull[Long]();
					team2.gather(root, sendNumEdges, nullInt);
					team2.gatherv(root, sendEdges, nullEdge, nullInt, nullInt);
					team2.gatherv(root, sendIndexes, nullLong, nullInt, nullInt);
				}
			}
			catch(e : CheckedThrowable) {
				e.printStackTrace();
			}
		});
		
		return ret()();
	}
	
	/** Redistributes attribute along with distributed sparse matrix.
	 * @param sparseMatrix The sparse matrix that provides the disrtibution method
	 * @param vertexOrEdge The kind of attribute to distribute
	 * @param name The name of attribute
	 */
	public def constructDistAttribute[T](sparseMatrix :DistSparseMatrix, vertexOrEdge :boolean, name :String) {T haszero} {
		val team_ = team;
		val att = vertexOrEdge ? getVertexAttribute[T](name) : getEdgeAttribute[T](name);
		
		val edgeList_ = edgeList;
		val verticesPerPlace = numberOfVertices / team.size();
		val vt_ = vertexTranslator;
		val vertexType_ = vertexType;
		
		return new DistMemoryChunk[T](team_.placeGroup(), () => {
			try {
				if(vertexOrEdge) {
					val roleInGraph = team_.getRole(here);
					val sizeOfGraph = team_.size();
					val logSizeOfGraph = MathAppend.log2(sizeOfGraph) as Int;

					val allTeam = sparseMatrix.dist().allTeam();
					val roleInDist = allTeam.getRole(here);
					val sizeOfDist = allTeam.size();
					val localsize = 1L << sparseMatrix.ids().lgl;
					
					val distAtt = new MemoryChunk[T](localsize);
					Remote.get(team_, att.values()().data(), distAtt, distAtt.range(),
							(i :Long, get:(Long, Int, Long)=>void) => {
						val rr = i * sizeOfDist + roleInDist;
						val dstRole = rr & (sizeOfGraph - 1);
						val dstIdx = rr >> logSizeOfGraph;
						get(i, dstRole as Int, dstIdx);
					});
					return distAtt;
				}
				else {
					val shift = MathAppend.log2(team_.size()) as Int;
					val rankMask = (1L << shift) - 1;
					val edgeIndexes = sparseMatrix().edgeIndexes;
					val distAtt = new MemoryChunk[T](edgeIndexes.size());
					Remote.get(team_, att.values()().data(), distAtt, distAtt.range(), (i :Long, get:(Long, Int, Long)=>void) => {
						val index = edgeIndexes(i);
						get(i, (index & rankMask) as Int, index >> shift);
					});
					return distAtt;
				}
			}
			catch (e : CheckedThrowable) {
				e.printStackTrace();
				throw new Exception(e);
			}
		});
	}
	
	/** (Not implemented) Constructs attribute along with simple sparse matrix.
	 * @param sparseMatrix The sparse matrix that provides the disrtibution method
	 * @param vertexOrEdge The kind of attribute to distribute
	 * @param name The name of attribute
	 */
	public def constructSimpleAttribute[T](sparseMatrix :GlobalRef[Cell[SparseMatrix]], vertexOrEdge :boolean, name :String) {T haszero} {
		// return GlobalRef[MemoryChunk[T]]...
		
		val team_ = team;
		val att = vertexOrEdge ? getVertexAttribute[T](name) : getEdgeAttribute[T](name);
		
		
	}

	/** Delete Graph and related objects.
	 */
	public def del() {
		val edgeList_ = edgeList;
		val attlist = new ArrayList[Any]();
		
		for(key in vertexAttributes.keySet())
			attlist.add(vertexAttributes(key));
		for(key in edgeAttributes.keySet())
			attlist.add(edgeAttributes(key));
		
		team.placeGroup().broadcastFlat(()=> {
			try {
				edgeList_.del();
				
				for(att in attlist) {
					if(att instanceof Attribute[Byte])
						(att as Attribute[Byte]).values().del();
					else if(att instanceof Attribute[Short])
						(att as Attribute[Short]).values().del();
					else if(att instanceof Attribute[Int])
						(att as Attribute[Int]).values().del();
					else if(att instanceof Attribute[Long])
						(att as Attribute[Long]).values().del();
					else if(att instanceof Attribute[Float])
						(att as Attribute[Float]).values().del();
					else if(att instanceof Attribute[Double])
						(att as Attribute[Double]).values().del();
					else if(att instanceof Attribute[Char])
						(att as Attribute[Char]).values().del();
					else if(att instanceof Attribute[String])
						(att as Attribute[String]).values().del();
					else if(att instanceof Attribute[Boolean])
						(att as Attribute[Boolean]).values().del();
					else 
						throw new UnsupportedOperationException();
				}
			}
			catch(e : CheckedThrowable) {
				e.printStackTrace();
			}
		});
		
		numberOfVertices = 0L;
		numberOfEdges = 0L;
	}

	public def vertexAttributeKeys() = vertexAttributes.keySet();
	public def edgeAttributeKeys() = edgeAttributes.keySet();
}

