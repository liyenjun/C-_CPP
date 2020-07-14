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
    int ix = 100;

    while( (ix>=10) && (ix<=50000) )
    {

        printf("Input n =\n");
        scanf("%d", &ix);
        if( (ix<10) || (ix>50000) ) break;
        printf("The sum of input is %d\n", Sum(ix));
    }
    system("pause"); return(0);
}