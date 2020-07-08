#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    float fa, fb, fc, fd;

    printf("x = (a, b)*(c, d)\n");
    printf("Input a\n");
    scanf("%f", &fa);
    printf("Input b\n");
    scanf("%f", &fb);    
    printf("Input c\n");
    scanf("%f", &fc);    
    printf("Input d\n");
    scanf("%f", &fd);    
    printf("x = (a, b)*(c, d)) = %f", fa*fc + fb*fd);
}