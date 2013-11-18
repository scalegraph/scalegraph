#!/bin/bash
#set -x #echo on
HOSTFILE=hosts
NP=4
MPI_RUN="mpirun_rsh -n $NP -hostfile $HOSTFILE"

RMAT_UNWEIGHTED=../graphs/RMAT_scale_10.dl
RMAT_WEIGHTED="../graphs/Weighted_RMAT_scale_10.dl"

function banner () {
    echo ;
    echo '******************************************************************';
    echo "           $1";
    echo '******************************************************************';
    echo ;
    sleep 2;
}

ls "$RMAT_WEIGHTED"

while [ 0 -eq 0 ] ;
    do
        #DEGREE DIST
        banner "Compute degree distritubtion"
        $MPI_RUN bin/DegreeDistributionExample $RMAT_UNWEIGHTED;
        if [ $? -gt 0  ];  then break; echo ; fi


        #BC UNWEIGHTED
        banner "Compute vertex betweenness centrality (unweighted)"
        $MPI_RUN bin/DistBetweennessCentralityUnweightedExample $RMAT_UNWEIGHTED;
        if [ $? -gt 0  ];  then break; echo ; fi
       

        #BC WEIGHTED
        banner "Compute vertex betweenness centrality (weighted)"
        $MPI_RUN bin/DistBetweennessCentralityWeightedExample "$RMAT_WEIGHTED";
        if [ $? -gt 0  ];  then break; echo ; fi
        
        
        #LSBFS Visitor
        banner "Travel grapgh using BFS visitor"
        $MPI_RUN bin/LsBfsVisitorExample $RMAT_UNWEIGHTED;
        if [ $? -gt 0  ];  then break; echo ; fi


        #Delta-stepping visitor
        banner "Travel graph using Delta-stepping"
        $MPI_RUN bin/DeltaSteppingVisitorExample "$RMAT_WEIGHTED";
        if [ $? -gt 0  ];  then break; echo ; fi
        
        
        #Maximum flow
        banner "Compute maximum flow"
        $MPI_RUN bin/MaximumFlowExample  ;
        if [ $? -gt 0  ];  then break; echo ; fi


        #MST
        banner "Compute minimum spanning tree"
        $MPI_RUN bin/MinimumSpanningTreeExample;
        if [ $? -gt 0  ];  then break; echo ; fi


        #PageRank
        banner "Compute page rank score"
        $MPI_RUN bin/PageRankExample;
        if [ $? -gt 0  ];  then break; echo ; fi


        #Spectral clustering
        #banner "Compute spectral clustering"
        #$MPI_RUN bin/SpectralClusteringExample;
        #if [ $? -gt 0  ];  then break; echo ; fi
        
        
        #SSC 
        banner "Compute strongly connected component"
        $MPI_RUN bin/StronglyConnectedComponentExample;
        if [ $? -gt 0  ];  then break; echo ; fi
    done


