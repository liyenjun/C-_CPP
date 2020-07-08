#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define a 1
#define b 2
#define c 3
#define d 4

int main(void)
{
    float fx;

    printf("y = d + x(c + x(b + ax))\n");
    printf("Input x\n");
    scanf("%f", &fx);    
    printf("y = d + x(c + x(b + ax)) = %f",d + fx*(c + fx*(b + a*fx)) );
}