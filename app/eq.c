#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "eq.h"


roots des(float a, float b, float c) {
    roots answer;

    float D = b * b - 4 * a * c;
    //answer.discr = D;

    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                answer.count = 2;
                answer.x1 = 0;
                answer.x2 = 0;
                return answer;
            }
            else
            {
                answer.count = 0;
                answer.x1 = -1;
                answer.x2 = -1;
                return answer;
            }
        }
        else
        {
            answer.count = 2;
            answer.x1 = (float)-c/b;
            answer.x2 = (float)-c/b;
            return answer;
        }
    }
    if (D < 0){
        answer.x1 = -1;
        answer.x2 = -1;
        answer.count = 0;
        return answer;
    }
    else {
        if (a > 0)
        {
            answer.x1 = (-b+sqrt(D))/(2*a);
            answer.x2 = (-b-sqrt(D))/(2*a);
            answer.count = 2;
            return answer;
        }
        else
        {
            answer.x2 = (-b+sqrt(D))/(2*a);
            answer.x1 = (-b-sqrt(D))/(2*a);
            answer.count = 2;
            return answer;
        }
    }
}

