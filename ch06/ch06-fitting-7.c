#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    int i, j;

    for(i=10, j=1; i>4 && j<6; i--, j+=2)
        printf("i=%d, j=%d\n", i, j);
    
    
    printf("\n");

    i = 10; j = 1;
    do{
        i--, j+=2;
        printf("i=%d, j=%d\n", i, j);
    } while( i>5 && j<5);

    system("pause"); return(0);
}