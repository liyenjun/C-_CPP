#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int ix = 1;
    int iA, iB;

    iA = iB = 0;

    while( ix <= 10000)
    {
        if( (ix%3 == 0) && !(ix%5 == 0) ) iA += ix;
        if( ((ix%2 == 0) || (ix%3 == 0)) && !(ix%6==0)) iB += ix;
        ix++;
    }

    printf("3���Ʀ��D5�����ƩM: %4d\n",iA);
    printf("2��3�����Ʀ��D6�����ƩM: %4d\n",iB);

    system("pause"); return(0);
}