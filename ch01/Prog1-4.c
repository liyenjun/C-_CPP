#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i, j, halfi, num = 0;
    int flag;
    for(i = 2; i <= 100; i++)
    {
        flag = 1;
        halfi = 1/2;
        for(j = 2; j <= halfi; j++)
        {
            if(i%j == 0)
                flag = 0; break;            
        }
        if(flag)
        {
            printf("%3d", i); num++;
            if(num%10 == 0) printf("\n");
        }
    }
    system("pause"); return(0);
}