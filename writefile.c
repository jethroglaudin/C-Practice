#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* creating a pointer to a phsycal file on our computer
     fopen is a fucntion that will open a file for us
     first paramater in fopen opens the file we want to open
     second paramater is a file mode: which tells c what we're going to do with the file. 
     r - stands for read. 
     w - stands for write. create a new file or write over an existing file
     a - stands for apphend. to append information onto the file
    */
    
    // FILE * fpointer = fopen("employees.txt", "w");
    FILE * fpointer = fopen("employees.txt", "a");
    // you want to make sure you close the file as well
    // closes off the file and remove the file from the memory of our computer. Also makes the saves 

    fprintf(fpointer, "\nKelly, Customer Service");

    fclose(fpointer);

    return 0;

}