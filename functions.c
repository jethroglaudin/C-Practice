#include <stdio.h>
#include <stdlib.h>

void sayHi();
int main()
{
    
    sayHi("Jethro", 27);
    return 0;
}
 // void means this function doesnt return any information
void sayHi(char name[], int age){
    printf("Hello %s, you are %d\n", name, age);
}
