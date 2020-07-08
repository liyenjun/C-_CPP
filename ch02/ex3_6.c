#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    float fa, fb, fc, fx;

    printf("t = sqrt(a^2 + b^2)\n");
    printf("Input a\n");
    scanf("%f", &fa);
    printf("Input b\n");
    scanf("%f", &fb);
    printf("Input c\n");
    printf("t = sqrt(a^2 + b^2) = %f", sqrt(fa*fa+fb*fb));
}