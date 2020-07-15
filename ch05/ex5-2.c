#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int ia, ib, ic, imin;

    srand((unsigned)time(NULL));
    ia = rand()%900+100;
    printf("a=%d\n", ia); 
    ib = rand()%900+100;
    printf("b=%d\n", ib);
    ic = rand()%900+100; 
    printf("c=%d\n", ic); 

    imin = ia < ib ? ( ia < ic ? ia : ic) : (ib);
    printf("min is %d\n", imin);
    system("pause"); return(0);
}

