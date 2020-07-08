#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float fa, fb;

    printf("x = a^2 + b^2\n");
    printf("Input a\n");
    scanf("%f", &fa);
    printf("Input b\n");
    scanf("%f", &fb);
    printf("x = a^2 + b^2 = %f", fa*fa + fb*fb);
}