#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    int i, j;

    for(i=1; i<11; i+=2)
    {
        for(j=0; j<i; j++) printf("%c", j+66);
        printf("\n");
    }
    system("pause"); return(0);
}