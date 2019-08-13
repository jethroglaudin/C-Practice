// Demonstrate a simple function that returns a void pointer

#include <stdio.h>

void* return_me(int*);

int main()
{
    int x = 10;
    // int *p = &x;
    void *vp = &x;

   // casting void pointer to int
   // you cannot directly dereference a void pointer unless you cast
   
     *(int *)vp = 15;

    printf("x: %d\n", x);


 

    
    // printf("p: %p\n", p);
    // p = return_me(p);
    // printf("p: %p \n", p);
    return 0;
}
void* return_me(int *pint)
{
    return pint;
}