# include <stdio.h>
# include <stdlib.h>

int* return_me(int*);
// returnType functionName (type arg1, type arg2)

int main(void) 
{

int x = 10;
// let p equal the memory address of x
int *p = &x;
printf("p: %p\n", p);

p = return_me(p);
printf("p: %p\n", p);

return 0;

}
int* return_me(int *pint)
{
    return pint;
}
