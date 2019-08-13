#include <stdio.h>

float* biggest_float(float*, float*);

int main(void)
{
    float x = 10.0;
    float y = 20.0;
    // access the address using &
    printf("y: %p\n", &y);

    float *b = biggest_float(&x, &y);
    printf("b: %p\n", b);
    return 0;
} 
float* biggest_float(float *pfloat1, float *pfloat2)
{
    // this function looks through two pointers of float
    // checks to see which address has the bigger value
    // then return that address
    float *biggest;

    if (*pfloat1 > *pfloat2)
    {
        biggest = pfloat1;
    }  
    else 
    {
        biggest = pfloat2;
    }
    return biggest;
}