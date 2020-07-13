#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    unsigned int uiO;
    printf("輸入一個十進位正整數:");
    scanf("%d",&uiO);
    printf("10進位      16進位      8進位\n");
    printf("%-14d%-014o%-#14x\n",uiO, uiO, uiO);
    system("pause"); return(0);    
}