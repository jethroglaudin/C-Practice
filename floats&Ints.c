#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int int_one;
    int int_two;
    float float_one;
    float float_two;

    scanf("%i %i", &int_one, &int_two);
    scanf("%f %f", &float_one, &float_two);
    
    printf("%i %i\n", int_one + int_two, int_one - int_two);
    printf("%.1f %.1f", float_one + float_two, float_one - float_two);

    return 0;
}
