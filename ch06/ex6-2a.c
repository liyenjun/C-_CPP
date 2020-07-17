#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void)
{
    int x, y;

    for(y=1; y<=7; y++)
    {
        for(x=1; x<=13; x++)
        {
            if(x<=7-y) printf(" ");
            else if(x>=7+y) printf(" ");
            else if(y>1 && x==7) printf(" ");
            else printf("*");
        }
        printf("\n");
    }

    system("pause"); return(0);
}