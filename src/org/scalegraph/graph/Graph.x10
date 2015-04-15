/* 
 *  This file is part of the ScaleGraph project (http://scalegraph.org).
 * 
 *  This file is licensed to You under the Eclipse Public License (EPL);
 *  You may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *      http://www.opensource.org/licenses/eclipse-1.0.php
 * 
 *  (C) Copyright ScaleGraph Team 2011-2012.
 */

package org.scalegraph.graph;

import x10.util.ArrayList;
import x10.util.HashMap;
import x10.util.Team;

import x10.compiler.Pinned;

import org.scalegraph.Config;

import org.scalegraph.util.DistScatterGather;
import org.scalegraph.util.Team2;
import org.scalegraph.util.Remote;
import org.scalegraph.util.Dist2D;
import org.scalegraph.util.Parallel;

import org.scalegraph.util.MemoryChunk;
import org.scalegraph.util.GrowableMemory;
import org.scalegraph.util.DistMemoryChunk;
import org.scalegraph.util.DistGrowableMemory;
import org.scalegraph.util.tuple.*;
import org.scalegraph.util.MathAppend;

import org.scalegraph.graph.id.IdStruct;
import org.scalegraph.blas.DistSparseMatrix;
import org.scalegraph.blas.SparseMatrix;
import org.scalegraph.util.SString;
import org.scalegraph.io.NamedDistData;
import org.scalegraph.io.ID;
import org.scalegraph.id.Type;

/** Raw graph object. The instances of this class are pinned to a particular place because moving this instance to another place is not worth.
 */
@Pinned public final class Graph(vertexType :Int) {
	static type EDGE = Tuple2[Long,Long];
	static type VT_PLH = PlaceLocalHandle[VertexTranslatorBase];
	
    private team :Team;
    private graphAttributes = new HashMap[String, Any]();
	private vertexAttributes = new HashMap[String, Any]();
	private edgeAttributes = new HashMap[String, Any]();
	
	//private vertexTranslator :PlaceLocalHandle[vertexTranslator[T]];
	private vertexTranslator :PlaceLocalHandle[VertexTranslatorBase];
	private srcList :DistMemoryChunk[Long];
	private dstList :DistMemoryChunk[Long];
	
	private var numberOfVertices :Long = 0L;
	private var numberOfEdges :Long = 0L;
	
	/** Vertex ID type.
	 */
	public static class VertexType {
		public static val Long = Type.Long;
		public static val Double = Type.Double;
		public static val String = Type.String;
	}

	/** Returns the number of vertices or the maximum ID number if translation is not used.
	 */
	public def numberOfVertices() = numberOfVertices;
	
	/** Returns the number of edges.
	 */
	public def numberOfEdges() = numberOfEdges;
	
	public def team() = team;
	
	public def source() = srcList;
	
	public def target() = dstList;

	private static def createVertexTranslator[T](team :Team) {T haszero}
	{
		val vertexNames = DistMemoryChunk[T](team.placeGroup(), ()=>MemoryChunk.make[T]());
		val vertexTranslator = PlaceLocalHandle.makeFlat[VertexTranslatorBase](
				team.placeGroup(), ()=>new VertexTranslator.HashTranslator[T](team, vertexNames));
		return Tuple2[Any, VT_PLH](vertexNames, vertexTranslator);
	}
	
	private static def createConverter(team :Team, create :() => VertexTranslatorBase) {
		return new Tuple2[Any, VT_PLH](null,
				PlaceLocalHandle.makeFlat[VertexTranslatorBase](
						team.placeGroup(), create));
	}
	
	/** 
	 * Creates empty raw graph object.
	 * @param team_ The team that the data is spread into
	 * @param vertexType_ The type of vertex ID
	 * @param useTranslator Whether you want to use translator. When you use translator, it will assign each vertex with a small integer value.
	 * If the vertex ID type is String, you must use translator.
	 */
	public def this(team_ :Team, vertexType_ :Int, useTranslator :Boolean) {
		property(vertexType_);

		// currently support only this situation
		if(!team_.equals(Team.WORLD))
			throw new IllegalArgumentException("Please, input Team.WORLD as the team parameter.");
		
		team = team_;
		srcList = new DistMemoryChunk[Long](team_.placeGroup(), ()=>MemoryChunk.make[Long]());
		dstList = new DistMemoryChunk[Long](team_.placeGroup(), ()=>MemoryChunk.make[Long]());
		
		val translator :Tuple2[Any, VT_PLH];
		switch(vertexType) {
		case VertexType.Long:
			if(useTranslator)
				translator = createVertexTranslator[Long](team_);
			else
				translator = createConverter(team, () => new VertexTranslator.NoTraslator(team_));
			break;
		case VertexType.Double:
			if(useTranslator)
				translator = createVertexTranslator[Double](team);
			else
				translator = createConverter(team, () => 
						new VertexTranslator.ArithmeticTranslator[Double](team_));
			break;
		case VertexType.String:
			if(useTranslator)
				translator = createVertexTranslator[SString](team);
			else
				throw new IllegalArgumentException();
			break;
		default:
			throw new IllegalArgumentException("Edge type not supported");
		}

		vertexTranslator = translator.get2();
		if(useTranslator) {
			val vertexNameAtt = translator.get1();
			vertexAttributes.put("name", vertexNameAtt);
		}
	}
	
	public static def make(edgeData :NamedDistData) 
		= make(edgeData, null, false);
	
	public static def make(edgeData :NamedDistData, renumbering :Boolean) 
		= make(edgeData, null, renumbering);
	
	public static def make(edgeData :NamedDistData, vertexData :NamedDistData, renumbering :Boolean) {
		val srcIdx = edgeData.nameToIndex(ID.NAME_SOURCE);
		val dstIdx = edgeData.nameToIndex(ID.NAME_TARGET);
		val vertexType = edgeData.typeId()(srcIdx);
		assert(vertexType == edgeData.typeId()(dstIdx));
		val g = new Graph(Config.get().worldTeam(), vertexType, renumbering);
		val src = edgeData.data()(srcIdx);
		val dst = edgeData.data()(dstIdx);
		switch(vertexType) {
		case Type.Long:
			g.addEdges(EdgeList[Long](src as DistMemoryChunk[Long], dst as DistMemoryChunk[Long]));
			break;
		case Type.Double:
			g.addEdges(EdgeList[Double](src as DistMemoryChunk[Double], dst as DistMemoryChunk[Double]));
			break;
		case Type.String:
			g.addEdges(EdgeList[SString](src as DistMemoryChunk[SString], dst as DistMemoryChunk[SString]));
			break;
		default:
			throw new IllegalOperationException("Not supported edge type");
		}
		for(i in edgeData.data().range()) {
			if(i == srcIdx || i == dstIdx) continue;
			val proxy = AttributeProxy.make(edgeData.typeId()(i));
			val name = edgeData.name()(i);
			val data = edgeData.data()(i);
			proxy.setEdgeAttribute(g, name, data);
		}
		if(vertexData != null) {
			for(i in vertexData.data().range()) {
				val proxy = AttributeProxy.make(vertexData.typeId()(i));
				val name = vertexData.name()(i);
				val data = vertexData.data()(i);
				proxy.setVertexAttribute(g, name, data);
			}
		}
		return g;
	}
	
	public static def make(edges :EdgeList[Long]) {
		val g = new Graph(Config.get().worldTeam(),Graph.VertexType.Long,false);
		g.addEdges(edges);
		g.team.placeGroup().broadcastFlat(()=> { edges.del(); });
		return g;
	}
	
	public static def make(edges :EdgeList[Double]) {
		val g = new Graph(Config.get().worldTeam(),Graph.VertexType.Double,false);
		g.addEdges(edges);
		g.team.placeGroup().broadcastFlat(()=> { edges.del(); });
		return g;
	}
	
	public static def makeWithTranslator(edges :EdgeList[Long]) {
		val g = new Graph(Config.get().worldTeam(),Graph.VertexType.Long,true);
		g.addEdges(edges);
		g.team.placeGroup().broadcastFlat(()=> { edges.del(); });
		return g;
	}
	
	public static def makeWithTranslator(edges :EdgeList[Double]) {
		val g = new Graph(Config.get().worldTeam(),Graph.VertexType.Double,true);
		g.addEdges(edges);
		g.team.placeGroup().broadcastFlat(()=> { edges.del(); });
		return g;
	}
	
	public static def makeWithTranslator(edges :EdgeList[SString]) {
		val g = new Graph(Config.get().worldTeam(),Graph.VertexType.String,true);
		g.addEdges(edges);
		g.team.placeGroup().broadcastFlat(()=> { edges.del(); });
		return g;
	}
	
	private def getOrCreateAttribute[T](vertexOrEdge :boolean, name :String,
			throwAlreadyExist :boolean) {T haszero} :DistMemoryChunk[T]
	{
		val attributes = vertexOrEdge ? vertexAttributes : edgeAttributes;
		val att = attributes.getOrElse(name, null);
		if(att != null) {
			if(throwAlreadyExist) throw new IllegalOperationException("key already exists");
			return att as DistMemoryChunk[T];
		}
		val newAtt = new DistMemoryChunk[T](team.placeGroup(), ()=>MemoryChunk.make[T]());
		attributes.put(name, newAtt);
		return newAtt;
	}
			
	private def setAttribute[T](vertexOrEdge :boolean, name :String, attType :Int, attValues :DistMemoryChunk[T]) {T haszero}
	{
		val attributes = vertexOrEdge ? vertexAttributes : edgeAttributes;
		attributes.put(name, attValues);
	}
	
	/** Returns the vertex attribute.
	 * @param name The name of the attribute.
	 */
	public def getVertexAttribute[T](name :String) {T haszero} =
		vertexAttributes.getOrThrow(name) as DistMemoryChunk[T];
		
	/** Returns the edge attribute.
	 * @param name The name of the attribute.
	 */
	public def getEdgeAttribute[T](name :String) {T haszero} =
		edgeAttributes.getOrThrow(name) as DistMemoryChunk[T];
	
	private static def innerAddEdges(team_ :Team, maxVertexID :Long,
			ref :GlobalRef[Graph],
			srcList :DistMemoryChunk[Long], dstList :DistMemoryChunk[Long],
			tlSrcs :MemoryChunk[Long], tlDsts :MemoryChunk[Long])
	{
		assert (srcList().size() == dstList().size());
		assert (tlSrcs.size() == tlDsts.size());

		val srcList_ = srcList();
		val dstList_ = dstList();
		
		//val globalNumOfEdges = team_.reduce(team_.role()(0), 0, tlSrcs.size(), Team.ADD);
		//val globalNumOfEdges = team_.reduce(0n, tlSrcs.size() as Int, Team.ADD);
		val globalNumOfEdges = team_.reduce(Place.FIRST_PLACE, tlSrcs.size(), Team.ADD);
		if(here == ref.home) {
			val g = ref.getLocalOrCopy();
			g.numberOfVertices = Math.max(maxVertexID + 1, g.numberOfVertices);
			g.numberOfEdges += globalNumOfEdges;
		}
		
		if(srcList_.size() == 0L) {
			srcList() = tlSrcs;
			dstList() = tlDsts;
		}
		else {
			if(here == ref.home) {
				Console.OUT.println("WARNING: AddEdges if invoked while there are existing edges on the Graph object. This operation is slow.");
			}
			val allocator = new GrowableMemory[Long]();
			allocator.setMemory(srcList_); allocator.add(tlSrcs); srcList() = allocator.raw();
			allocator.setMemory(dstList_); allocator.add(tlDsts); dstList() = allocator.raw();
		}
	}
	
	private def genericAddEdges[T](srcs :DistMemoryChunk[T], dsts :DistMemoryChunk[T]) { T haszero } {
		val vt_ = vertexTranslator;
		val team_ = team;
		val ref = GlobalRef[Graph](this);
		val srcList_ = srcList;
		val dstList_ = dstList;
		
		team.placeGroup().broadcastFlat(()=> {
			try {
				assert (srcs().size() == dsts().size());
				
				val vtt_ = vt_() as VertexTranslator[T];
				val tlSrcs = vtt_.translateWithAll(srcs(), true);
				val tlDsts = vtt_.translateWithAll(dsts(), true);
				
				innerAddEdges(team_, vtt_.maxVertexID(), ref, srcList_, dstList_, tlSrcs, tlDsts);
			}
			catch(e : CheckedThrowable) {
				e.printStackTrace();
			}
		});
	}
	
	private def vertexTypeString() {
		switch(vertexType) {
		case VertexType.Long: return "Long";
		case VertexType.Double: return "Double";
		case VertexType.String: return "String";
		default: return "Not supported type";
		}
	}
			
	/** Set/Add edges to this instance.
	 * @param edges The distributed memory that contains edges.
	 */
	public def addEdges(edges :EdgeList[Long]) {
		if(vertexType != VertexType.Long)
			throw new IllegalOperationException("Vertex type does not match. "
					+ vertexTypeString() + " type is expected but the input is Long");
		genericAddEdges(edges.src, edges.dst);
	}
	
	/** Set/Add edges to this instance.
	 * @param edges The distributed memory that contains edges.
	 */
	public def addEdges(edges :EdgeList[Double]) {
		if(vertexType != VertexType.Double)
			throw new IllegalOperationException("Vertex type does not match. "
					+ vertexTypeString() + " type is expected but the input is Long");
		genericAddEdges(edges.src, edges.dst);
	}
	
	/** Set/Add edges to this instance.
	 * @param edges The distributed memory that contains edges.
	 */
	public def addEdges(edges :EdgeList[SString]) {
		if(vertexType != VertexType.String)
			throw new IllegalOperationException("Vertex type does not match. "
					+ vertexTypeString() + " type is expected but the input is Long");
		genericAddEdges(edges.src, edges.dst);
	}

	/* Translates vertex IDs. When you are using translator and you want to add vertex attributes with [ID, value] pair,
	 * you have to use this method before adding attributes.
	 * @param key Input data for translation
	 * @param ids 
	 */
	public def translateVertexIds[T](key :DistMemoryChunk[T]) {T haszero} {
		return VertexTranslator.translate[T](vertexTranslator, key, false);
	}
	
	private def internalSetAttributeValues[T](vertexOrEdge :Boolean, name :String, indexes : () => MemoryChunk[Long], values :DistMemoryChunk[T]) {T haszero} {
		val att = getOrCreateAttribute[T](vertexOrEdge, name, false);
		val team_ = team;
		
		val srcList_ = srcList;
		val vi = VertexInfo(vertexTranslator, vertexType, numberOfVertices, team.size() as Int);
		
		team_.placeGroup().broadcastFlat(() => {
			try {
				val att_ :MemoryChunk[T];
				if(vertexOrEdge) {
					val actualLocalVertices = getLocalNumberOfVertices(vi, team_.role()(0));
					att_ = MemoryChunk.make[T](actualLocalVertices);
				}
				else {
					att_ = MemoryChunk.make[T](srcList_().size());
				}
				
				val mask = team_.size() - 1;
				val shift = MathAppend.log2(team_.size()) as Int;
				val indexes_ = indexes();
				val values_ = values();
				Remote.put(team_, att_, indexes_.range(),
						(index:Long, put:(Int, Long,  T)=>void)=> {
					val dstRole = indexes_(index) & mask;
					val dstIdx = indexes_(index) >> shift;
					put(dstRole as Int, dstIdx, values_(index));
				});
				
				att() = att_;
			}
			catch(e : CheckedThrowable) {
				e.printStackTrace();
			}
		});
	}

	private def internalRetrieveAttributeValues[T](vertexOrEdge :Boolean, indexes : () => MemoryChunk[Long], values :DistMemoryChunk[T]) {T haszero} {
		val team_ = team;
		
		val srcList_ = srcList;
		val vi = VertexInfo(vertexTranslator, vertexType, numberOfVertices, team.size() as Int);
		
		return DistMemoryChunk[T](team_.placeGroup(), () => {
			var att_ :MemoryChunk[T] = MemoryChunk.make[T]();
			try {
				if(vertexOrEdge) {
					val actualLocalVertices = getLocalNumberOfVertices(vi, team_.role()(0));
					att_ = MemoryChunk.make[T](actualLocalVertices);
				}
				else {
					att_ = MemoryChunk.make[T](srcList_().size());
				}
				
				val mask = team_.size() - 1;
				val shift = MathAppend.log2(team_.size()) as Int;
				val indexes_ = indexes();
				val values_ = values();
				Remote.put(team_, att_, indexes_.range(),
						(index:Long, put:(Int, Long,  T)=>void)=> {
							val dstRole = indexes_(index) & mask;
							val dstIdx = indexes_(index) >> shift;
							put(dstRole as Int, dstIdx, values_(index));
						});
				
			}
			catch(e : CheckedThrowable) {
				e.printStackTrace();
			}
			return att_;
		});
	}
	
	/** Set edge attribute values. The length of values for each place must be match the length of edge list.
	 * If the same attribute is exist, replaces the all values.
	 * @param name The name of attribute.
	 * @param values The attribute values.
	 */
	public def setEdgeAttribute[T](name :String, values :DistMemoryChunk[T]) {T haszero} {
		val srcList_ = srcList;
		team.placeGroup().broadcastFlat(() => {
			val numEdges = srcList_().size();
			if(numEdges != values().size())
				throw new IllegalArgumentException("The number of attribute values is not match the number of edges");
		});
		edgeAttributes.put(name, values);
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
	public def setEdgeAttribute[T](name :String, distEdgeIndexMatrix : DistSparseMatrix[Long], values :DistMemoryChunk[T]) {T haszero} {
		internalSetAttributeValues(false, name, ()=>distEdgeIndexMatrix().values, values);
	}
	
	public def retrieveEdgeAttribute[T](indexes :DistMemoryChunk[Long], values :DistMemoryChunk[T]) {T haszero} {
		return internalRetrieveAttributeValues(false, ()=>indexes(), values);
	}
	
	public def retrieveEdgeAttribute[T](distEdgeIndexMatrix :DistSparseMatrix[Long], values :DistMemoryChunk[T]) {T haszero} {
		return internalRetrieveAttributeValues(false, ()=>distEdgeIndexMatrix().values, values);
	}
	
	private static struct VertexInfo {
		val vertexTranslator : PlaceLocalHandle[VertexTranslatorBase];
		val vertexType : Int;
		val numberOfPlaces : Int;
		val numberOfVertices : Long;
		
		public def this(vertexTranslator :PlaceLocalHandle[VertexTranslatorBase], vertexType :Int, numberOfVertices :Long, numberOfPlaces :Int) {
			this.vertexTranslator = vertexTranslator;
			this.vertexType = vertexType;
			this.numberOfVertices = numberOfVertices;
			this.numberOfPlaces = numberOfPlaces;
		}
	}
	
	private static def getLocalNumberOfVertices(vi :VertexInfo, role :Int) :Long {
		val vt_ = vi.vertexTranslator();
		if(vt_.isTranslator()) {
			return vt_.sizeOfDictionary();
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
		val vi = VertexInfo(vertexTranslator, vertexType, numberOfVertices, team.size() as Int);
		
		team_.placeGroup().broadcastFlat(() => {
			try {
				val values_ = values();
				val actualLocalVertices = getLocalNumberOfVertices(vi, team_.role()(0));
				if(actualLocalVertices > values_.size())
					throw new IllegalArgumentException("The number of attribute values is not match the number of vertices");
			}
			catch(e : CheckedThrowable) {
				e.printStackTrace();
			}
		});

		vertexAttributes.put(name, values);
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
	public def setVertexAttribute[T](name :String, sparseMatrix :DistSparseMatrix[Long],
			values :DistMemoryChunk[T]) {T haszero}
	{
		setVertexAttribute[T](name, sparseMatrix, values, 0n);
	}
	
	public def retrieveVertexAttribute[T](ids :DistMemoryChunk[Long], values :DistMemoryChunk[T]) {T haszero} {
		return internalRetrieveAttributeValues(true, ()=>ids(), values);
	}
	
	/** Set vertex attribute values with vertex IDs.
	 * The attributes that the values are not provided will be filled with default values.
	 * If the same attribute values are exist, overwrite the values.
	 * @param name The name of attribute.
	 * @param ids The edge indexes for each attribute values.
	 * @param values The attribute values.
	 */
	public def setVertexAttribute[T](name :String, sparseMatrix :DistSparseMatrix[Long],
			values :DistMemoryChunk[T], z :Int) {T haszero}
	{
		val attValues = getOrCreateAttribute[T](true, name, false);
		val team_ = team;
		val vi = VertexInfo(vertexTranslator, vertexType, numberOfVertices, team.size() as Int);
		
		team_.placeGroup().broadcastFlat(() => {
			try {
				val roleInGraph = team_.role()(0);
				val sizeOfGraph = team_.size();
				val logSizeOfGraph = MathAppend.log2(sizeOfGraph) as Int;
				val actualLocalVertices = getLocalNumberOfVertices(vi, team_.role()(0));
				if(attValues().size() == 0L) {
					attValues() = MemoryChunk.make[T](actualLocalVertices);
				}
				val att_ = attValues();
				
				val setter = (i :Long, v :T) => {
					if(i < actualLocalVertices) att_(i) = v;
				};

				if(sparseMatrix.dist().z() == z as Long) {
					val allTeam = sparseMatrix.dist().allTeam();
					val roleInDist = allTeam.role()(0);
					val sizeOfDist = allTeam.size();
					val localsize = sparseMatrix.ids().numberOfLocalVertexes();
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
	public def createDistEdgeIndexMatrix(dist2d :Dist2D, directed :Boolean, transpose :Boolean) {
		val team_ = team;
		val srcList_ = srcList;
		val dstList_ = dstList;
		val vi = VertexInfo(vertexTranslator, vertexType, numberOfVertices, team.size() as Int);
		
		return new DistSparseMatrix(dist2d, () => {
			val sw = Config.get().stopWatch();
			val scatterGather = new DistScatterGather(team_);
			val srcList__ = srcList_();
			val dstList__ = dstList_();
			val ids = dist2d.getIds(vi.numberOfVertices,
					getLocalNumberOfVertices(vi, team_.role()(0)), transpose);
			val roleMap = MemoryChunk.make[Int](dist2d.allTeam().size());
			val places = dist2d.allTeam().places();
			for(i in places.range()) {
				roleMap(i) = team_.role(places(i))(0);
			}
			val rmask = (1L << ids.lgr) - 1;
			val cmask = (1L << (ids.lgc + ids.lgr)) - 1 - rmask;

			if(here.id == 0) sw.lap("start graph construction");
			Parallel.iter(srcList__.range(), (tid:Long, r:LongRange) => {
				val counts = scatterGather.getCounts(tid as Int);
				if(directed) {
					for(i in r) {
						val v0 = srcList__(i);
						val v1 = dstList__(i);
						counts(roleMap((v1 & cmask) | (v0 & rmask)))++;
					}
				}
				else {
					for(i in r) {
						val v0 = srcList__(i);
						val v1 = dstList__(i);
						counts(roleMap((v1 & cmask) | (v0 & rmask)))++;
						counts(roleMap((v0 & cmask) | (v1 & rmask)))++;
					}
				}
			});
			scatterGather.sum();
			if(here.id == 0) sw.lap("count edge finished");
			val teamRank = team_.role()(0);
			val teamSize = team_.size();
			val sendCount = scatterGather.sendCount();
			val sendSrcV = MemoryChunk.make[Long](sendCount);
			val sendDstV = MemoryChunk.make[Long](sendCount);
			val sendValues = MemoryChunk.make[Long](sendCount);
			Parallel.iter(srcList__.range(), (tid:Long, r:LongRange) => {
				val offsets = scatterGather.getOffsets(tid as Int);
				/*
				 * for(i in r) {
				 * val v0 = edgelist__(i*2 + 0);
				 * val v1 = edgelist__(i*2 + 1);
				 * val off0 = offsets(roleMap((v0 & cmask) | (v1 & rmask)))++;
				 * sendEdges(off0) = outerOrInner ? EDGE(v0, v1) : EDGE(v1, v0);
				 * sendIndexes(off0) = i * teamSize + teamRank;
				 * if(!directed) {
				 * val off1 = offsets(roleMap((v1 & cmask) | (v0 & rmask)))++;
				 * sendEdges(off1) = outerOrInner ? EDGE(v1, v0) : EDGE(v0, v1);
				 * sendIndexes(off1) = i * teamSize + teamRank;
				 * }
				 * }
				 * // The following code is equivalent to the above code.
				 */
				if(directed) {
					for(i in r) {
						val v0 = srcList__(i);
						val v1 = dstList__(i);
						val off0 = offsets(roleMap((v1 & cmask) | (v0 & rmask)))++;
						sendSrcV(off0) = v0;
						sendDstV(off0) = v1;
						sendValues(off0) = i * teamSize + teamRank;
					}
				}
				else {
					for(i in r) {
						val v0 = srcList__(i);
						val v1 = dstList__(i);
						val off0 = offsets(roleMap((v1 & cmask) | (v0 & rmask)))++;
						sendSrcV(off0) = v0;
						sendDstV(off0) = v1;
						sendValues(off0) = i * teamSize + teamRank;
						val off1 = offsets(roleMap((v0 & cmask) | (v1 & rmask)))++;
						sendSrcV(off1) = v1;
						sendDstV(off1) = v0;
						sendValues(off1) = i * teamSize + teamRank;
					}
				}
			});
			if(here.id == 0) sw.lap("complete creating send data");
			val recvSrcV = scatterGather.scatter(sendSrcV); sendSrcV.del();
			val recvDstV = scatterGather.scatter(sendDstV); sendDstV.del();
			val recvValues = scatterGather.scatter(sendValues); sendValues.del();
			if(here.id == 0) sw.lap("alltoall finished");
			return new Tuple2[IdStruct, SparseMatrix[Long]](ids, new SparseMatrix(recvSrcV, recvDstV, recvValues, ids));
		});
	}
	
	public def createDistSparseMatrix[T](dist2d :Dist2D, name :String, directed :Boolean, transpose :Boolean) { T haszero }
	{
		val team_ = team;
		val srcList_ = srcList;
		val dstList_ = dstList;
		val vi = VertexInfo(vertexTranslator, vertexType, numberOfVertices, team.size() as Int);
		val att = getEdgeAttribute[T](name);

		return new DistSparseMatrix(dist2d, () => {
			val sw = Config.get().stopWatch();
			val scatterGather = new DistScatterGather(team_);
			val srcList__ = transpose ? dstList_() : srcList_();
			val dstList__ = transpose ? srcList_() : dstList_();
			val ids = dist2d.getIds(vi.numberOfVertices,
					getLocalNumberOfVertices(vi, team_.role()(0)), transpose);
			val roleMap = MemoryChunk.make[Int](dist2d.allTeam().size());
			val places = dist2d.allTeam().places();
			for(i in places.range()) {
				roleMap(i) = team_.role(places(i))(0);
			}
			/*
			for(p in team.placeGroup()) {
				if(here == p) {
					Console.OUT.println(here);
					Console.OUT.println("roleMap = " + roleMap);
					Console.OUT.println("allTeam = " + dist2d.allTeam());
					Console.OUT.println("places = " + places);
				}
				team.barrier(team.role()(0));
			}
			*/
			val rmask = (1L << ids.lgr) - 1;
			val cmask = (1L << (ids.lgc + ids.lgr)) - 1 - rmask;
			val att_ = att();

			if(here.id == 0) sw.lap("start graph construction");
			Parallel.iter(srcList__.range(), (tid:Long, r:LongRange) => {
				val counts = scatterGather.getCounts(tid as Int);
				if(directed) {
					for(i in r) {
						val v0 = srcList__(i);
						val v1 = dstList__(i);
						counts(roleMap((v1 & cmask) | (v0 & rmask)))++;
					}
				}
				else {
					for(i in r) {
						val v0 = srcList__(i);
						val v1 = dstList__(i);
						counts(roleMap((v1 & cmask) | (v0 & rmask)))++;
						counts(roleMap((v0 & cmask) | (v1 & rmask)))++;
					}
				}
			});
			scatterGather.sum();
			if(here.id == 0) sw.lap("count edge finished");
			val sendCount = scatterGather.sendCount();
			val sendSrcV = MemoryChunk.make[Long](sendCount);
			val sendDstV = MemoryChunk.make[Long](sendCount);
			val sendValues = MemoryChunk.make[T](sendCount);
			Parallel.iter(srcList__.range(), (tid:Long, r:LongRange) => {
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
					for(i in r) {
						val v0 = srcList__(i);
						val v1 = dstList__(i);
						val off0 = offsets(roleMap((v1 & cmask) | (v0 & rmask)))++;
						sendSrcV(off0) = v0;
						sendDstV(off0) = v1;
						sendValues(off0) = att_(i);
					}
				}
				else {
					for(i in r) {
						val v0 = srcList__(i);
						val v1 = dstList__(i);
						val off0 = offsets(roleMap((v1 & cmask) | (v0 & rmask)))++;
						sendSrcV(off0) = v0;
						sendDstV(off0) = v1;
						sendValues(off0) = att_(i);
						val off1 = offsets(roleMap((v0 & cmask) | (v1 & rmask)))++;
						sendSrcV(off1) = v1;
						sendDstV(off1) = v0;
						sendValues(off1) = att_(i);
					}
				}
			});
			/*
			for(p in team.placeGroup()) {
				if(here == p) {
					Console.OUT.println(here);
					Console.OUT.println("edgelist__ = " + edgelist__.raw());
				}
				team.barrier(team.role()(0));
			}
			for(p in team.placeGroup()) {
				if(here == p) {
					Console.OUT.println(here);
					Console.OUT.println("sendSrcV = " + sendSrcV);
					Console.OUT.println("sendDstV = " + sendDstV);
					Console.OUT.println("sendValues = " + sendValues);
				}
				team.barrier(team.role()(0));
			}*/

			if(here.id == 0) sw.lap("complete creating send data");
			val recvSrcV = scatterGather.scatter(sendSrcV); sendSrcV.del();
			val recvDstV = scatterGather.scatter(sendDstV); sendDstV.del();
			val recvValues = scatterGather.scatter(sendValues); sendValues.del();
			
			return new Tuple2[IdStruct, SparseMatrix[T]](ids, new SparseMatrix(recvSrcV, recvDstV, recvValues, ids));
		});
	}
	
	/** Constructs non-distributed sparse matrix.
	 * @param place The place where the sparse matrix is created
	 * @param directed Directed graph or undirected graph. If false (undirected graph), all edges are duplicated to connect with each direction.
	 * @outerOrInner Constructs outer edges (true) or inner edges (false). This flag is worth only for directed graph.
	 */
	public def createSimpleEdgeIndexMatrix(place :Place, directed :Boolean, transpose :Boolean) {
		// return GlobalRef[SparseMatrix]...
		val team_ = team;
		val srcList_ = srcList;
		val dstList_ = dstList;
		val root = team_.role(place)(0);
		// too complex ...
		val ret = GlobalRef[Cell[GlobalRef[Cell[SparseMatrix[Long]]]]](
				new Cell[GlobalRef[Cell[SparseMatrix[Long]]]](Zero.get[GlobalRef[Cell[SparseMatrix[Long]]]]()));
		team_.placeGroup().broadcastFlat(() => {
			try {
				val srcList__ = srcList_();
				val dstList__ = dstList_();
				val numEdges = srcList__.size();
				val sendCount = directed ? numEdges : numEdges * 2;
				val sendSrcV = MemoryChunk.make[Long](sendCount);
				val sendDstV = MemoryChunk.make[Long](sendCount);
				val sendIndexes = MemoryChunk.make[Long](sendCount);
				val teamSize = team_.size();
				val teamRank = team_.role()(0);
				Parallel.iter(srcList__.range(), (tid:Long, r:LongRange) => {
					if(directed) {
						for(i in r) {
							val v0 = srcList__(i);
							val v1 = dstList__(i);
							sendSrcV(i) = v0;
							sendDstV(i) = v1;
							sendIndexes(i) = i * teamSize + teamRank;
						}
					}
					else {
						for(i in r) {
							val v0 = srcList__(i);
							val v1 = dstList__(i);
							sendSrcV(i*2 + 0) = v0;
							sendDstV(i*2 + 0) = v1;
							sendIndexes(i*2 + 0) = i * teamSize + teamRank;
							sendSrcV(i*2 + 1) = v1;
							sendDstV(i*2 + 1) = v0;
							sendIndexes(i*2 + 1) = i * teamSize + teamRank;
						}
					}
				});
				
				val team2 = new Team2(team_);
				
				val sendNumEdges = MemoryChunk.make[Int](1);
				sendNumEdges(0) = sendSrcV.size() as Int;
				if(place == here) { // root
					val counts = MemoryChunk.make[Int](team_.size(), 0 as Int, true);
					val offsets  = MemoryChunk.make[Int](team_.size() + 1);
					team2.gather(root, sendNumEdges, counts);
					
					offsets(0) = 0n;
					for(i in counts.range()) offsets(i + 1) = offsets(i) + counts(i);
					val recvSrcV = MemoryChunk.make[Long](offsets(team_.size()));
					val recvDstV = MemoryChunk.make[Long](offsets(team_.size()));
					val recvIndexes = MemoryChunk.make[Long](offsets(team_.size()));
					team2.gatherv(root, sendSrcV, recvSrcV, counts, offsets);
					team2.gatherv(root, sendDstV, recvDstV, counts, offsets);
					team2.gatherv(root, sendIndexes, recvIndexes, counts, offsets);
					
					val lgl = MathAppend.ceilLog2(numberOfVertices);
					val sparseMatrix = new SparseMatrix[Long](recvSrcV, recvDstV, recvIndexes, lgl, transpose);
					
					// write result
					val ref = new GlobalRef[Cell[SparseMatrix[Long]]](new Cell[SparseMatrix[Long]](sparseMatrix));
					at(ret.home) {
						ret()() = ref;
					}
				}
				else { // non-root
					val nullInt = MemoryChunk.getNull[Int]();
					val nullLong = MemoryChunk.getNull[Long]();
					team2.gather(root, sendNumEdges, nullInt);
					team2.gatherv(root, sendSrcV, nullLong, nullInt, nullInt);
					team2.gatherv(root, sendDstV, nullLong, nullInt, nullInt);
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
	 * @param edgeIndexMatrix The sparse matrix that provides the disrtibution method
	 * @param vertexOrEdge The kind of attribute to distribute
	 * @param name The name of attribute
	 */
	public def createDistAttribute[T](edgeIndexMatrix :DistSparseMatrix[Long], vertexOrEdge :boolean, name :String) {T haszero} {
		val team_ = team;
		val att = vertexOrEdge ? getVertexAttribute[T](name) : getEdgeAttribute[T](name);

		val verticesPerPlace = numberOfVertices / team.size();
		val vertexType_ = vertexType;
		
		return new DistMemoryChunk[T](team_.placeGroup(), () => {
			try {
				if(vertexOrEdge) {
					val roleInGraph = team_.role()(0);
					val sizeOfGraph = team_.size();
					val logSizeOfGraph = MathAppend.log2(sizeOfGraph) as Int;

					val allTeam = edgeIndexMatrix.dist().allTeam();
					val roleInDist = allTeam.role()(0);
					val sizeOfDist = allTeam.size();
					val localsize = 1L << edgeIndexMatrix.ids().lgl;
					
					val distAtt = MemoryChunk.make[T](localsize);
					Remote.get(team_, att(), distAtt, distAtt.range(),
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
					val edgeIndexes = edgeIndexMatrix().values;
					val distAtt = MemoryChunk.make[T](edgeIndexes.size());
					Remote.get(team_, att(), distAtt, distAtt.range(), (i :Long, get:(Long, Int, Long)=>void) => {
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
	 * @param edgeIndexMatrix The sparse matrix that provides the disrtibution method
	 * @param vertexOrEdge The kind of attribute to distribute
	 * @param name The name of attribute
	 */
	public def createSimpleAttribute[T](edgeIndexMatrix :GlobalRef[Cell[SparseMatrix[Long]]], vertexOrEdge :boolean, name :String) {T haszero} {
		// return GlobalRef[MemoryChunk[T]]...
		
		val team_ = team;
		val att = vertexOrEdge ? getVertexAttribute[T](name) : getEdgeAttribute[T](name);
		
		
	}

	/** Delete Graph and related objects.
	 */
	public def del() {
		val srcList_ = srcList;
		val dstList_ = dstList;
		val attlist = new ArrayList[Any]();
		
		for(key in vertexAttributes.keySet())
			attlist.add(vertexAttributes.getOrThrow(key));
		for(key in edgeAttributes.keySet())
			attlist.add(edgeAttributes.getOrThrow(key));
		
		team.placeGroup().broadcastFlat(()=> {
			try {
				srcList_.del();
				dstList_.del();
				
				for(att in attlist) {
					if(att instanceof DistMemoryChunk[Byte])
						(att as DistMemoryChunk[Byte]).del();
					else if(att instanceof DistMemoryChunk[Short])
						(att as DistMemoryChunk[Short]).del();
					else if(att instanceof DistMemoryChunk[Int])
						(att as DistMemoryChunk[Int]).del();
					else if(att instanceof DistMemoryChunk[Long])
						(att as DistMemoryChunk[Long]).del();
					else if(att instanceof DistMemoryChunk[Float])
						(att as DistMemoryChunk[Float]).del();
					else if(att instanceof DistMemoryChunk[Double])
						(att as DistMemoryChunk[Double]).del();
					else if(att instanceof DistMemoryChunk[Char])
						(att as DistMemoryChunk[Char]).del();
					else if(att instanceof DistMemoryChunk[String])
						(att as DistMemoryChunk[String]).del();
					else if(att instanceof DistMemoryChunk[Boolean])
						(att as DistMemoryChunk[Boolean]).del();
					else
						throw new UnsupportedOperationException("Type: " + att.typeName());
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

