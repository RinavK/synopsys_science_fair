#include <stdio.h>

int i = 0;
 
#define MAXCHAR 1000
int main() {
    FILE *fp1;
    char str1[MAXCHAR];
    char* filename1 = "/home/mpiuser/cloud/info.txt";
 
    fp1 = fopen(filename1, "r");
    if (fp1 == NULL){
        printf("Could not open file %s",filename1);
        return 1;
    }
    while (fgets(str1, MAXCHAR, fp1) != NULL)
    {
        if(i == 1 || i == 8 || i == 9 || i == 0 || i == 3 || i == 6)
        {
            printf("%s", str1);
        }
        i++;
    }

    fclose(fp1);

/*
    FILE *fp;
    char str[MAXCHAR];
    char* filename = "/home/mpiuser/cloud/info.txt";
 
    fp = fopen(filename, "r");
    if (fp == NULL){
        printf("Could not open file %s",filename);
        return 1;
    }
    while (fgets(str, MAXCHAR, fp) != NULL)
    {
        if(i == 1 || i == 8)
        {
            printf("%s", str);
        }
        i++;
    }

    fclose(fp);
*/
    return 0;
}
