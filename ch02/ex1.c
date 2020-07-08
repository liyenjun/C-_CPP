#include <stdio.h>
#include <stdlib.h>

#define PI 3.14
#define AREA PI*fr*fr
#define CIRCUMFERENCE 2*PI*fr

int main(void)
{
    float fr;

    printf("Input radius:");
    scanf("%f", &fr);
    printf("The area of this circuit is %f\n", AREA);
    printf("The circumference of this circuit is %f\n", CIRCUMFERENCE);
}