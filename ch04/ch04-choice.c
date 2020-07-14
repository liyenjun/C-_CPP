#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a,b,c;
    
    a = 5;
    b = 3;
    a += a + (b++);

    scanf("%d %d %d", &a, &b, &c);

    system("pause"); return(0);
}