#include <stdio.h>
#include <stdlib.h>

// create a rectangle structure
typedef struct {
    int height;
    int width;
} rec_t;

rec_t* new_rectangle(void);

int main() 
{
    rec_t *ptr; 
    ptr = new_rectangle();

    // create new rectange
    rec_t rectangle = *ptr;

    rectangle.width = 10;
    rectangle.height = 10;

    printf("height: %d\nweidth: %d\n", rectangle.height, rectangle.width);

    free(ptr);
    return 0;
}

rec_t* new_rectangle(void)
{
    // allocate memory for new rectange
    rec_t *p = malloc(sizeof *p);

    return p;
}