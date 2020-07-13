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
    XPrint(10);
    system("pause"); return(0);
}