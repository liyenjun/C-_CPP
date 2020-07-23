#include <stdio.h>
#include <stdlib.h>
int sum(int);
int sum(int n)
{
    unsigned int i, sum=0;

    for(i=1; i<=n; i++)
    {
        sum += (2*i-1)*2;
    }

    return sum;
}
int main(void)
{
    int n;
    printf("Input n: ");
    scanf("%d", &n);
    printf("sum = %d\n", sum(n));
    system("pause"); return(0);
}

