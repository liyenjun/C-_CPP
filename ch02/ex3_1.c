#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float fa, fb;

    printf("2a + b\n");
    printf("Input a\n");
    scanf("%f", &fa);
    printf("Input b\n");
    scanf("%f", &fb);
    printf("2a + b =%f", 2*fa + fb);
}