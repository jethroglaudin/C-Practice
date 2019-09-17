#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int age = 27;
    int * pAge = &age;




// derefencing will get the value whatever the adresss was storing

    printf("%d\n", *pAge);
    printf("%p\n", &age);
    return 0;
}