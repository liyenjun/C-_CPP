#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    int i, n, sum2, sum3, sum5;

    sum2 = sum3 = sum5 = 0;

    for(i=1; i<=1000; i++)
    {
        if( i%2 == 0 ) sum2 += i;
        if( i%3 == 0) sum3 += i;
        if( i%5 == 0) sum5 += i;
    }

    printf("sum2: %d\n", sum2);
    printf("sum3: %d\n", sum3);
    printf("sum5: %d\n", sum5);

    system("pause"); return(0);
}