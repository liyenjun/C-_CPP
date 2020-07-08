#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float fa, fb, fc, fx;

    printf("y = a*x^2 + b*x + c\n");
    printf("Input a\n");
    scanf("%f", &fa);
    printf("Input b\n");
    scanf("%f", &fb);
    printf("Input c\n");
    scanf("%f", &fc);    
    printf("Input x\n");
    scanf("%f", &fx);    
    printf("y = a*x^2 + b*x + c = %f", fa*fx*fx + fb*fx + fc);
}