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
import org.scalegraph.concurrent.ScatterGather;
import org.scalegraph.concurrent.Team2;
import org.scalegraph.util.MathAppend;
import org.scalegraph.id.IdStruct;
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
			vertexAttributes.put("Name", vertexNameAtt);
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
	
	private static def innerAddEdges(team_ :Team, numOfVertices :Long,
			ref :GlobalRef[Graph], edgeList_ :GrowableMemory[Long], translated :MemoryChunk[Long])
	{
		val globalNumOfVertices = team_.allreduce(team_.getRole(here), numOfVertices, Team.MAX) * team_.size();
		val globalNumOfEdges = team_.allreduce(team_.getRole(here), translated.size(), Team.ADD);
		if(here == ref.home) {
			val g = ref.getLocalOrCopy();
			g.numberOfVertices = Math.max(globalNumOfVertices, g.numberOfVertices);
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
			var translated :MemoryChunk[Long];
			var numOfVertices :Long = 0;
			if(vt_ != null) {
				val vtt_ = (vt_ as PlaceLocalHandle[VertexTranslator[Long]])();
				translated = new MemoryChunk[Long](edges().size());
				vtt_.translateWithAll(edges(), translated, true);
				numOfVertices = vtt_.size();
			}
			else {
				val edges_ = edges();
				numOfVertices = Parallel.reduce[Long](edges_.range(),
						(i:Long,t:Long)=>Math.max(edges_(i),t), (u:Long,v:Long)=>Math.max(u,v));
				translated = edges_;
			}
			innerAddEdges(team_, numOfVertices, ref, edgeList_(), translated);
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
			val edges_ = edges();
			val translated = new MemoryChunk[Long](edges_.size());
			var numOfVertices :Long = 0;
			if(vt_ != null) {
				val vtt_ = (vt_ as PlaceLocalHandle[VertexTranslator[Double]])();
				vtt_.translateWithAll(edges_, translated, true);
				numOfVertices = vtt_.size();
			}
			else {
				numOfVertices = Parallel.reduce[Long](translated.range(),
						(i:Long,t:Long)=> {
							translated(i) = edges_(i) as Long;
							return Math.max(translated(i),t);
						}, (u:Long,v:Long)=>Math.max(u,v));
			}
			innerAddEdges(team_, numOfVertices, ref, edgeList_(), translated);
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
	
	private static def scatterAttributeValues[T](indexes_ :MemoryChunk[Long], values_ :MemoryChunk[T], team_ :Team) {
		val scatter = new ScatterGather(team_);
		val mask = team_.size() - 1;
		Parallel.iter(indexes_.range(), (tid:Long, r:LongRange) => {
			val counts = scatter.getCounts(tid as Int);
			for(i in r)
				counts(indexes_(i) & mask)++;
		});
		scatter.sum();
		val sendIndexes = new MemoryChunk[Long](indexes_.size());
		val sendValues = new MemoryChunk[T](indexes_.size());
		val teamSize = team_.size();
		Parallel.iter(indexes_.range(), (tid:Long, r:LongRange) => {
			val offsets = scatter.getOffsets(tid as Int);
			for(i in r) {
				val idx = offsets(indexes_(i) & mask)++;
				// TODO: optimize ?
				sendIndexes(idx) = indexes_(i) / teamSize;
				sendValues(idx) = values_(i);
			}
		});
		val recvIndexes = scatter.scatter(sendIndexes);
		val recvValues = scatter.scatter(sendValues);
		return Tuple2[MemoryChunk[Long], MemoryChunk[T]](recvIndexes, recvValues);
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
		val attValues = getOrCreateAttribute[T](false, name, false).values();
		val team_ = team;
		val edgeList_ = edgeList;
		team_.placeGroup().broadcastFlat(() => {
			val recvdata = scatterAttributeValues(indexes(), values(), team_);
			val recvIndexes = recvdata.get1();
			val recvValues = recvdata.get2();
			val att_ = attValues();
			att_.setSize(edgeList_().size());
			Parallel.iter(recvIndexes.range(), (i:Long) => {
				att_(recvIndexes(i)) = recvValues(i);
			});
		});
	}
	
	private static def getLocalNumberOfVertices(verticesPerPlace :Long, vt_ :Any, vertexType_ :Int) :Long {
		if(vt_ != null) {
			switch(vertexType_) {
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
		return verticesPerPlace;
	}


	/** Set vertex attribute values. The length of values for each place must be match the length of vertex list.
	 * If the same attribute is exist, replaces the all values.
	 * @param name The name of attribute.
	 * @param values The attribute values.
	 */
	public def setVertexAttribute[T](name :String, values :DistMemoryChunk[T]) {T haszero}
	{
		val attValues = getOrCreateAttribute[T](true, name, false).values();
		val verticesPerPlace = numberOfVertices / team.size();
		val vt_ = vertexTranslator;
		val vertexType_ = vertexType;
		
		team.placeGroup().broadcastFlat(() => {
			val values_ = values();
			val actualLocalVertices = getLocalNumberOfVertices(verticesPerPlace, vt_, vertexType_);
			if(actualLocalVertices != values_.size())
				throw new IllegalArgumentException("The number of attribute values is not match the number of vertices");
			
			attValues().setMemory(values_);
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
		val attValues = getOrCreateAttribute[T](true, name, false).values();
		val verticesPerPlace = numberOfVertices / team.size();
		val team_ = team;
		val vt_ = vertexTranslator;
		val vertexType_ = vertexType;
		
		team_.placeGroup().broadcastFlat(() => {
			val recvdata = scatterAttributeValues(ids(), values(), team_);
			val recvIndexes = recvdata.get1();
			val recvValues = recvdata.get2();
			val actualLocalVertices = getLocalNumberOfVertices(verticesPerPlace, vt_, vertexType_);
			val att_ = attValues();
			att_.setSize(actualLocalVertices);
			Parallel.iter(recvIndexes.range(), (i:Long) => {
				att_(recvIndexes(i)) = recvValues(i);
			});
		});
	}

	/** Constructs distributed 2D partitioned sparse matrix (CSR).
	 * @param dist2d
	 * @param directed Directed graph or undirected graph. If false (undirected graph), all edges are duplicated to connect with each direction.
	 * @outerOrInner Constructs outer edges or inner edges. This flag is valuable only for directed graph.
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
			val scatterGather = new ScatterGather(team_);
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
	 * @outerOrInner Constructs outer edges or inner edges. This flag is worth only for directed graph.
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
		});
		
		return ret()();
	}
	
	/** Redistributes attribute along with distributed sparse matrix.
	 * @param sparseMatrix The sparse matrix that provides the disrtibution method
	 * @param vertexOrEdge The kind of attribute to distribute
	 * @param name The name of attribute
	 */
	public def constructDistAttribute[T](sparseMatrix :DistSparseMatrix, vertexOrEdge :boolean, name :String) {T haszero} {
		// return DistMemoryChunk[T]...
		
		val team_ = team;
		val att = vertexOrEdge ? getVertexAttribute[T](name) : getEdgeAttribute[T](name);
		
		return new DistMemoryChunk[T](team_.placeGroup(), () => {
			try {
				val edgeIndexes = sparseMatrix().edgeIndexes;
				val distAtt = new MemoryChunk[T](edgeIndexes.size());
				val ids = sparseMatrix.ids();
				val shift = ids.lgr + ids.lgc;
				val rankMask = (1L << shift) - 1;
				
				Remote.get(team_, att.values()().data(), distAtt, edgeIndexes.range(), (i :Long, get:(Long, Int, Long)=>void) => {
					val index = edgeIndexes(i);
					get(i, (index & rankMask) as Int, index >> shift);
				});
				
				return distAtt;
			}
			catch (e : Exception) {
				e.printStackTrace();
				throw e;
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
}

