#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int iFib[31] = {0};
    int i;

    for(i=1; i<=30; i++)
    {
        if(i==1) 
            iFib[1] = 1;
        else
            iFib[i] = iFib[i-1] + iFib[i-2];

        printf("iFib[%d]=%d\n", i, iFib[i]);
    }
    system("pause"); return(0);
}

