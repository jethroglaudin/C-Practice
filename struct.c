#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// most of the time structs start with a Capital letter
struct Student {
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main()
{

    // create instance of student struct
    // created a cointainer student1 that will store the name, major, age, and gpa
    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    // string copy will take a strong and give it a value that we specify
    strcpy( student1.name, "Jim" );
    strcpy( student1.major, "Business" );

    struct Student student2;
    student2.age = 20;
    student2.gpa = 3.8;
    strcpy( student2.name, "Monica" );
    strcpy( student2.major, "Law");

    printf("%d\n", student1.age);
    printf("%f\n", student1.gpa);
    return 0;
}