#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void)
{
    int i, n;
    float sum;

    sum = 1;

    printf("Input n: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        sum += pow( (-1/(float)3), n);
    }

    printf("sum: %f\n", sum);

    system("pause"); return(0);
}