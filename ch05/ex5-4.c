#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int ix, iNum;
    unsigned long long ullSum, ullProduct;

    ix = 2;
    ullSum = 0;
    ullProduct = 1;

    printf("Input:");
    scanf("%d", &iNum);
    while(ix <= iNum)
    {
        if( iNum%ix == 0)
        {
            printf("%d ", ix);
            ullSum += ix;
            ullProduct *= ix;
        }
        ix++;
    }

    printf("\nThe sum of factors = %llu\n", ullSum);
    printf("The product of factors = %llu\n", ullProduct);
    system("pause"); return(0);
}

