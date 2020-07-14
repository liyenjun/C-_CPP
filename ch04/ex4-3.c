#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned int uin, uix, uiSum;
    unsigned long long ullx, ullSum;

    uin = uiSum = 1;
    uix = 1;
    ullx = 1;
    ullSum = 1;
    
    while( uin <= 30 )
    {
        /*
        uix = uix << uin;
        uiSum += uix;
        printf("n = %d, 2^%d = %d, Sum = %d\n", uin, uin, uix, uiSum);
        */
        ullx = ullx << 1;
        ullSum += ullx;
        printf("n = %d, 2^%d = %llu, Sum = %llu\n", uin, uin, ullx, ullSum);
        uin++;
    }

    system("pause"); return(0);
}