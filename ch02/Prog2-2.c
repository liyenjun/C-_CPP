#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
    int x;
    float t;
    printf("輸入攻擊力:");
    scanf("%d", &x);
    printf("t = %f",t);
    t = 2.0*pow(x,1.5) - 25*sqrt(10.0);
    printf("對怪獸的傷害值為:%f \n", t);
    system("pause"); return(0);
}