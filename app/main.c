#include <stdio.h>

#include "eq.h"

int main()
{
    float a=-1,b=0,c=1.44;
    roots A = des(a,b,c);

    printf("%d", A.count);

}
