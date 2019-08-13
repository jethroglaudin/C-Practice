// any memory addreess type can be asigned to a pointer

#include <stdio.h>

int main() 
{
    int x = 10;
    float y = 20;

    int *pint;
    int *pfloat;
    
    void *vp;
    // vp = &y;
    // vp = &x;
    vp = &x;
    pint = vp;

    vp = &y;
    pfloat = vp;
    return 0;
}