#include <stdio.h>
#include <stdlib.h>
int *new_interger(void);
int main()
{
    int *p;
    p = new_interger();
    *p = 15;

    printf("value of *p: %d\n", *p);

    free(p);

    return 0;
}

int* new_interger(void)
{
    // p is going to be a pointer to an int
    // malloc will allocate size of(int) bytes;
    // returns a pointer that gets implicitly converted
    // to a pointer to int
    // int *p = malloc(sizeof(int));
    int *p = malloc(sizeof(p));
    return p;
    
}