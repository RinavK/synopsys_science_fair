#!/bin/sh
mpirun -np 2 -hostfile setup.txt ./final > speed.txt
mpirun -np 6 -hostfile corecount.txt ./cores > cores.txt
mpirun -np 2 -hostfile setup.txt ./ram > ram.txt
cat speed.txt cores.txt ram.txt > info.txt
mpirun -np 1 ./parse > check.txt
mpirun -np 1 ./check