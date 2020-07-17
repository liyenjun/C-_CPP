#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
int main(void)
{
    int i, j, k, ix, iFactor;
    int iNum;

    printf("Input a  number: ");
    scanf("%d", &iNum);
    
    for(i=3; i<=iNum; i++)
    {    
        iFactor = 0;
        ix = 2;         

        while(ix<=i-1)
        {
            if( !(i%ix) ) iFactor = 1;
            ix++;
        }

        if(iFactor==0)  printf("%4d", i);
        
    }
    printf("\n");
    
    system("pause"); return(0);
}