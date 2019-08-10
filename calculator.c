#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1;
    double num2;
    printf("Enter first number: ");
    // & means to access the address. So we are access the address of num 1;
    scanf("%lf", &num1);
    // if where scanning for a number and we have double stored as a variable type. we must use %lf
    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("Answer: %f\n", num1 + num2);

    return 0;
}