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
    p = popen("free --mega | grep Mem", "r");
    while( (ch=fgetc(p)) != EOF)
    {
        if(80 > k && k > 70)
        {
            strncat(clockSpeed, &ch, 1);
        }
        k++;
    }
    
    for(int i = 0; i < 5; i++)
    {
        if(0 < i < 4){
            take = clockSpeed[i];
            strncat(test, &take, 1);
        }
    }
    
    speed = atof(clockSpeed);

    //printf("%s \n", clockSpeed);
    printf("%0.0f\n", speed);

    pclose(p);
    
    return 0; //End
}
