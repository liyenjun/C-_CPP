#include <stdio.h>
#include <stdlib.h>
unsigned int Sum(int ix)
{
    int iTotal, iindex;
    
    iTotal = 0;
    iindex = 1;

    while(iindex<= ix)
    {
        iTotal += iindex;
        iindex++;
    }

    return iTotal;
}
int main(void)
{
    int ix;

    ix = 100;
    printf("Input n = %d\n", ix);
    printf("The sum of input is %d\n", Sum(ix));
    ix = 1000;
    printf("Input n = %d\n", ix);
    printf("The sum of input is %d\n", Sum(ix));
    ix = 10000;
    printf("Input n = %d\n", ix);
    printf("The sum of input is %d\n", Sum(ix));
    ix = 50000;
    printf("Input n = %d\n", ix);
    printf("The sum of input is %d\n", Sum(ix));        
    system("pause"); return(0);
}