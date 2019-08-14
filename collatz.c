// Multiple recursive cases
/*
The collatz conjecturs applies to positive intergers
and speculates that it is always possible to get "back to 1" if you follow these steps
 
 - if n is 1, stop
 - Otherwise, if n is even, repeat this process on n/2
 - Otherwise, if n is odd, repeat this process on 3n +1

 Write a recursive function collatz(n) that calculates how many steps it takes to get to 1 if you start form n and recurse as indicated above
 */

#include <stdio.h>
#include <stdlib.h>

int collatz(int n);

int main(void)
{
    char value[1];
    printf("Enter a number: ");
    scanf("%s", value);
    int num = atoi(value);
    int n = collatz(num);
    printf("The collatz steps for %i is: %i\n", num, n);

    return 0;
}
int collatz(int n)
{
    if (n == 1)
        return 0;
    else if ((n % 2) == 0)
        // if n is even repeat process on n/2
        return 1 + collatz(n / 2);
    else
        //  if n is odd, repeat this process on 3n +1
        return 1 + collatz(3 * n + 1);
}