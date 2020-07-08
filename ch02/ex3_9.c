#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    float fx, fy;

    printf("(2x + y)/(2x - y)\n");
    printf("Input x\n");
    scanf("%f", &fx);
    printf("Input y\n");
    scanf("%f", &fy);    
    printf("(2x + y)/(2x - y) = %f", (2*fx + fy)/(2*fx - fy));
}