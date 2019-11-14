#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[9];
    char sen1[10];
    char sen2[10];
    char sen3[10];
    scanf("%c\n", &ch);
    scanf("%s\n", s);
    scanf("%s%s%s\n", sen1, sen2, sen3);
    printf("%c\n", ch); // C
    printf("%s\n", s); // Language
    printf("%s %s %s", sen1, sen2, sen3); // Welcome To C!!
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
