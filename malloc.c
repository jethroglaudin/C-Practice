# include <stdio.h>
# include <stdlib.h>

int main(void) 
{


// we can use pointers to get access to a block of dynamically-allocated memory 
// at runtime
// Dynamically allocated memory comes form a pool of memory known as 
// the heap. 
// All memory from a variable come from the stack.

// statically create interger on the stack;



int x;

// dynaically obtain an interger
int *px = malloc(4);
// malloc will go find you 4 bytes of memory that are next to each
// other on the heap and will return a pointer of that memory
// called px.
// int *px = malloc(sizeof(int));

// get an interger from te user

// int x = get_int();

// // array of floats on the stack
// float stack_array[x];

// // array of floats on the heap
// float* heap_array = malloc(x * sizeof(float));

// // Malloc is not released back to the 


// char * word = malloc(50 * sizeof(char));

// // do stuff with word
// // now we're don using it
// free(word);


}