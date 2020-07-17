#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
int main(void)
{
    int i, j, max, temp, Item[10];
    
    srand((unsigned)time(NULL));
    for (i=0; i<10; i++)
    {        
        Item[i] = rand()%1000 + 1;
        printf("%d ", Item[i]);
    }
    printf("\n");
                    
    for(i=0; i<9; i++)
    {
        max = i;
        for(j=i+1;j<10;j++)
            if(Item[j]>Item[max]) max=j;
        temp = Item[max]; Item[max] = Item[i]; Item[i] = temp;
        for (j=0; j<10; j++)
            printf("%d ", Item[j]);
        printf("\n");
    }                
                		
    system("pause"); return(0);
}