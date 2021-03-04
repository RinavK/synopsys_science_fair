#!/bin/sh
mpirun -np 2 -hostfile setup.txt ./a > speed.txt
lscpu | grep Core > cores.txt
free | grep Mem > ram.txt
cat speed.txt cores.txt ram.txt > info.txt
mpirun -np 1 -host slave ./parse
ssh slave "/snap/bin/spotify < /dev/null > /tmp/mylogfile 2>&1 &"
#{
#read;
#${REPLY}
#}

krdc