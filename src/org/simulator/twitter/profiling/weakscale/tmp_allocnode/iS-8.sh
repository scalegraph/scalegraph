#!/bin/bash

host=`hostname`
cd ${PBS_O_WORKDIR}

printenv | grep PBS | awk '{print "export",$1}' > ${PBS_JOBID}.env
printenv | grep TMPDIR | awk '{print "export",$1}' >> ${PBS_JOBID}.env

cat >> ${PBS_JOBID}.env <<EOF2
export PATH=/usr/apps/openmpi/1.4.2/gcc/bin:$PATH
export LD_LIBRARY_PATH=/usr/apps/openmpi/1.4.2/gcc/lib:$LD_LIBRARY_PATH
cd /home/usr3/14ITA189/scalegraph/src/org/simulator/twitter/profiling/weakscale
EOF2

cat > ${PBS_JOBID}.start <<EOF2
#!/bin/bash

echo "Node allocation is complete. We are going to login to $host !"
ssh -Y -t $host "cd ${PBS_O_WORKDIR} ; source ./${PBS_JOBID}.env ; /usr/bin/newgrp $(id -gn)"

EOF2

while [ -e ${PBS_JOBID}.start ]
do
	sleep 10
done
echo "exit job!"

