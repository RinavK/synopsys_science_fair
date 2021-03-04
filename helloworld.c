#include <mpi.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (int argc, char *argv[]) {
    
    int rank, size;
    double start, end, total;
    FILE *p;
    char ch, ph;
    char take, pull;
    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;
    char core[100];
    char thread[10];
    char clockSpeed[10];
    char test[10];
    char aCore[100];
    char mem[12];
    int threads;
    float speed, memory, cores;
    
    //Get the clock speed of the processor
    p = popen("sudo lshw -short | grep processor", "r");
    while( (ch=fgetc(p)) != EOF)
    {
        if(82 > k && k > 76)
        {
            strncat(clockSpeed, &ch, 1);
        }
        k++;
    }
    
    for(int i = 0; i < 5; i++)
    {
        if(0 < i < 6){
            take = clockSpeed[i];
            strncat(test, &take, 1);
        }
    }
    
    speed = atof(clockSpeed);

    //printf("\nThis is your clock speed: %s \n", clockSpeed);
    pclose(p);
    
    MPI_Init (&argc, &argv); //initialize MPI library
    
    start = MPI_Wtime(); //Beginning time for the program
    
    //Opening for program
    printf("\n%0.2f\n", speed);
    MPI_Comm_size(MPI_COMM_WORLD, &size); //get number of processes
    MPI_Comm_rank(MPI_COMM_WORLD, &rank); //get my process id
    //do something
    printf ("\nRank %d\n", rank);
    if (rank == 0) printf("%d processes\n", size);
    
    //Ending for program
    
    end = MPI_Wtime(); //Ending time for the program
    
    total = end - start; //Total time for the program
    printf("\nIt took %f seconds\n", total);
    
    MPI_Finalize(); //MPI cleanup
    
    return 0; //End
}

//Username: Herakles
//Password: Beowulf123
