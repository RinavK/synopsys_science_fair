#include <mpi.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i = 0;
 
#define MAXCHAR 1000
int main() {
    FILE *fp1;
    char str1[MAXCHAR];
    char cmd1[100];
    char cmd2[100];
    char* filename1 = "/home/mpiuser/cloud/check.txt";
    float speed1, speed2, core1, core2, mem1, mem2, score1, score2;
 
    fp1 = fopen(filename1, "r");
    if (fp1 == NULL){
        printf("Could not open file %s",filename1);
        return 1;
    }
    while (fgets(str1, MAXCHAR, fp1) != NULL)
    {
        if(i == 0)
        {
            speed2 = atof(str1);
            //printf("%s", str1);
        }

        if(i == 1)
        {
            speed1 = atof(str1);
            //printf("%s", str1);
        }

        if(i == 2)
        {
            core1 = atof(str1);
            //printf("%s", str1);
        }

        if(i == 3)
        {
            core2 = atof(str1);
            //printf("%s", str1);
        }

        if(i == 4)
        {
            mem1 = atof(str1);
            //printf("%s", str1);
        }

        if(i == 5)
        {
            mem2 = atof(str1);
            //printf("%s", str1);
        }

        i++;
    }

    fclose(fp1);

    core1 = (core1)/2;
    core2 = (core2)/2;

    mem1 = mem1/400;
    mem2 = mem2/400;

    score1 = speed1 * core1 * mem1;
    score2 = speed2 * core2 * mem2;

    //printf("%f \n", mem1);
    //printf("%f \n", mem2);

    strcpy(cmd1, "echo 'slave' > whichhost.txt");
    strcpy(cmd2, "echo 'master' > whichhost.txt");

    if(score1 > score2)
    {
        system("echo slave");
    }
    else
    {
        system("echo master");
    }

    return 0;
}
