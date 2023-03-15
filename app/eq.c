#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "eq.h"


roots des(int a, int b, int c) {
    roots answer;

    int D = b * b - 4 * a * c;

    if (D < 0){
        answer.x1 = -1;
        answer.x2 = -1;
        return answer;
    }
    else {
        answer.x1 = (-b+sqrt(D))/2*a;
        answer.x2 = (-b-sqrt(D))/2*a;
        return answer;
    }
}

