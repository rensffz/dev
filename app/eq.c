#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "eq.h"


roots des(int a, int b, int c) {
    roots answer;

    float D = b * b - 4 * a * c;
    //answer.discr = D;

    if (a == 0)
    {
        answer.count = 1;
        answer.x1 = -c/b;
        answer.x2 = -c/b;
        return answer;
    }
    if (D < 0){
        answer.x1 = -1;
        answer.x2 = -1;
        answer.count = 0;
        return answer;
    }
    else {
        answer.x1 = (-b+sqrt(D))/(2*a);
        answer.x2 = (-b-sqrt(D))/(2*a);
        answer.count = 2;
        return answer;
    }
}

