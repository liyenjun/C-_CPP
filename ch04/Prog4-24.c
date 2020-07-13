#include <stdio.h>
#include <stdlib.h>
void XPrint(int n)
{
    int i = 1;
    while(i <= n)
    {
        printf("*");
        i++;
    }
    
}

int main(void)
{
    int ix;
    printf("請輸入要印出的 * 個數:");
    scanf("%d",&ix);
    XPrint(ix);
    system("pause"); return(0);
}