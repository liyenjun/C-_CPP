#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    unsigned int uiO;
    printf("��J�@�ӤQ�i�쥿���:");
    scanf("%d",&uiO);
    printf("10�i��      16�i��      8�i��\n");
    printf("%-14d%-014o%-#14x\n",uiO, uiO, uiO);
    system("pause"); return(0);    
}