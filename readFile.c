#include <stdio.h>
#include <stdlib.h>

int main()
{
    char line[255];
    FILE * fpointer = fopen("employees.txt", "r");

    fgets(line, sizeof(line), fpointer);
    fgets(line, sizeof(line), fpointer);
    printf("%s", line);
    fclose(fpointer);
    return 0;

}