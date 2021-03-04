bash setup.sh
{
read -p 'Which program do you wish to run: ' programvar;
node=$(mpirun -np 1 ./check)
}
ssh $node xvfb-run -a $programvar
