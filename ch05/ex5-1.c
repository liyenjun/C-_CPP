#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int ia, ib, ic, imin;

    printf("Input three numbers\n");
    printf("a="); scanf("%d", &ia);
    printf("b="); scanf("%d", &ib);
    printf("c="); scanf("%d", &ic);

    imin = ia < ib ? ( ia < ic ? ia : ic) : (ib);
    printf("min is %d\n", imin);
    system("pause"); return(0);
}

