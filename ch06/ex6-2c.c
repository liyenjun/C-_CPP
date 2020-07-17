#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(void)
{
    int x, y;

    for(y=1; y<=7; y++)
    {
        if(y<=4)
        {
            for(x=1; x<=13; x++)
            {
                if(x<=7-y) printf(" ");
                else if(x>=7+y) printf(" ");
                else printf("*");
            }
            printf("\n");
        }
        else
        {
            for(x=1; x<=13; x++)
            {
                if(x<y) printf(" ");
                else if(x>14-y) printf(" ");
                else printf("*");
            }
            printf("\n");
        }
        

    }

    system("pause"); return(0);
}