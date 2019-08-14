// Recursion
// The factorial of function (n!) is defined over all positive intergers.

// n! equals all of the positive intergers less than or equal to n multiplied togethr.

// thinking in terms of programming. We define the mathmatical function n! as fact(n);

// fact(n) = n * fact(n-1)
 
//  n times the total values less than n

//  this forms a bases for a recursive definiition of factorial

//  Every recursive function has two cases that could apply given any imput

//  - the base case, which when triggered will tereminate the recurisve process. This value will break us out of the loop.

//  - the recursive case, which is where the recursion will actually occur.

// in genral but not always recusrive functions can replace loops in non-recursive functions

 #include <stdio.h>
 #include <stdlib.h>

 int fact(int n);

int main ()
{
    char value[1];
    printf("Enter a number: ");
    scanf("%s", value);
    int num = atoi(value);
    int n = fact(num);
    printf("factorial of %s is: %d\n", value, n);
    return 0;

}
int fact(int n)
{
    if (n == 1)  
        return 1;   
    else   
        return n * fact(n-1);    
}
