#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int factoral(int);
float sum(float, int);

int factoral(int n)
{
    int i, product;

    product = 1;

    for(i=1; i<=n; i++)
    {
        product *= i;
    }

    return product;
}
float sum(float x, int n)
{
    int i; 
    float sum;

    sum = 0;

    for(i=0; i<n; i++)
    {
        sum += pow(-1,i)*powf(x,2*i+1)/factoral(2*i+1);
        printf("%f\n", sum);
    }    

    return sum;

}
int main(void)
{
    int n;
    float x;

    printf("Input x and n: ");
    scanf("%f %d", &x, &n);
    sum(x, n);
    system("pause"); return(0);
}

