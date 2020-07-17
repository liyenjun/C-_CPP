#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    int i, n, sum;

    sum = 0;

    for(i=1; i<=333; i++)
    {
        printf("i = %d\n", 3*i);
        sum += 3*i;
    }

    printf("sum: %d\n", sum);
    system("pause"); return(0);
}