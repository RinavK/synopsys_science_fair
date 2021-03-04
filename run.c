#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i = 0;
 

int main() {

    char command[50];
    strcpy(command, "bash testing.sh");
    system(command);

}
