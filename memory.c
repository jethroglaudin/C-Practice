#include <stdio.h>
#include <stdlib.h>

int main() {

    int age = 27;
    double gpa = 3.7;
    char grade = 'A';

// if you want to print out a memory address you need %p for pointer
    printf("age : %p\ngpa: %p\ngrade: %p\n", &age, &gpa, &grade);

    return 0;
}