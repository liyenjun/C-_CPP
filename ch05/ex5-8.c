#include <stdio.h>
#include <stdlib.h>
int IsPrime(int iNum)
{
    int ix, iFactor;

    ix = 2;
    iFactor = 0;

    while( (ix*ix <= iNum) && (iFactor==0) )
    {
        if( !(iNum%ix) ) iFactor=1;
        ix++;
    }

    if( iFactor == 0 ) return 1;
    else return 0;
     
}
int main(void)
{
    int iNum, iCount, iPrime_flag;
    iNum = 2;
    iCount = 1;

    while(iNum <= 10000)
    {
        iPrime_flag = IsPrime(iNum);

        if(iPrime_flag)
        {
            printf("%5d", iNum);
            iCount++;
        }
        if(iCount==15)
        {
            printf("\n");
            iCount = 1;
        }
        iNum++;
    }
    system("pause"); return(0);
}

