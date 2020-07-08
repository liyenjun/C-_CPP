#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float fa, fb;

    printf("(a + 3)(b - 5)\n");
    printf("Input a\n");
    scanf("%f", &fa);
    printf("Input b\n");
    scanf("%f", &fb);
    printf("(a + 3)(b - 5) = %f", (fa + 3)*(fb - 5));
}