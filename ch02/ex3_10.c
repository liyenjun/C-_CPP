#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    float fx, fy;

    printf("(x^2 + y^2)/(x^2 - y^2)\n");
    printf("Input x\n");
    scanf("%f", &fx);
    printf("Input y\n");
    scanf("%f", &fy);    
    printf("(x^2 + y^2)/(x^2 - y^2) = %f", (fx*fx + fy*fy)/(fx*fx - fy*fy));
}