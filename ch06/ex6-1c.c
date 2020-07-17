#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void)
{
    int i, n;
    float sum;

    sum = 0;

    printf("Input n: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        sum += (1 + pow(-1,n+1)*(n-1)/(float)n);
        //sum = pow(-1,n+1)*(n-1)/(float)n;
    }

    printf("sum: %f\n", sum);

    system("pause"); return(0);
}