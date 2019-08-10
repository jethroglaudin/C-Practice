// start function with <stdio.h>
// print f f stands for format
// while for loops

// #include <stdio.h> 

// int main(void)
//  {
//     char name = get_string("What is your name?\n");
//      printf("hello, %s\n"  name);
//  }

// int main () {
//     printf("Hello, World\n");
// }



// int main () {
//     for (int i = 0; i < 50; i++){
//        printf("Hello, World\n");
//     }
// }


// intergers
// #include <stdio.h>

// int main(void) 
// {
//    int i = get_int("Interger: ");
//    printf("hello, %i\n", i);
// }

// float


// #include <stdio.h>
 
// int main () {

//    int a;
	
//    /* for loop execution */
//    for( a = 10; a < 20; a = a + 1 ){
//       printf("value of a: %d\n", a);
//    }
 
//    return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// int main ()
// {
//     char characterName[] = "Jethro";
//     int characterAge = 27;
//     printf("There once was a man named %s\n", characterName);
//     printf("he was %d years old.\n", characterAge);
//     characterAge = 18;
//      printf("But looked like he was %d years old.\n", characterAge);
    
// }

// Data Types
// #include <stdio.h>
// #include <stdlib.h>

// int main () 
// {
//     // interger
//     int age = 50;
//     // two types of decimals double and float
//     double gpa = 3.6;
//     // character
//     // char can only store on character. need single quotes
//      char grade = 'A';
//      // for a string of characters
//      // create a string of characters (an array). 
//      // need double quotes
//      char phrase[] = "LA Lakers";
    
// }

// printf

// #include <stdio.h>
// #include <stdlib.h>

// int main () 
// {
//     // printf is a function. Task it to print out something
//     // if you want to print out a number you need a format specifier 
//     // %d for number(interger)
//     // we can use multiple specifiers
//     // %f prints out decimal
//     int favNum = 8;
//     char myChar = 'I';
//     printf("My favorite %c is %d",myChar, favNum);
    
    
// }

// working with numbers

//  #include <stdio.h>
//  #include <stdlib.h>
//  #include <math.h>

//  int main()
//  {
//      int num = 6;
//      printf("%f", floor(36.356));
//  }

// constants

#include <stdio.h>
#include <stdlib.h>

int main() 
{   
    // constant variables typically get captialized
    char name[20];
    printf("Enter your name: ");
    // fgets gets string from user. YOu can also use scanf
    fgets(name, 20, stdin);
    printf("Your name is %s", name);

    return 0;
}