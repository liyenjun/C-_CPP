#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
int main(void)
{
    int i, j, iNum;
    int buf[20]={1};

    printf("Input a number (1~9): ");
    scanf("%d", &iNum);

    for(i=0;i<iNum;i++)
    {
        for(j=i;j>0;j--)    buf[j] = buf[j] + buf[j-1];
        for(j=0;j<iNum-i;j++)     printf("    ");
        for(j=0;j<=i;j++)     printf("%5d    ", buf[j]);
        printf("\n");
    }
    



    system("pause"); return(0);
}