#include <stdio.h>
#include <stdlib.h>

int main()
{
    // pointer is basically just a memory address. think of pointer like a type of data.
    
    int age = 27;
    int * pAge  =  &age;
    double gpa = 3.4;
    double * pGpa = &gpa;
    char grade = 'A';
    char * pGrade = &grade;
    

    
    printf("age's memory address: %p\n", &age);

    return 0;


}