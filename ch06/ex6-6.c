#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
int main(void)
{
    int i, j, iSwitch, temp, Item[10];
    
    srand((unsigned)time(NULL));
    for (i=0; i<10; i++)
    {        
        Item[i] = rand()%1000 + 1;
        printf("%4d", Item[i]);
    }
    printf("\n");
                    
    do{
        iSwitch = 0;
        for( i=0; i<9; i++)
        {
            if( Item[i]<Item[i+1] )
            {
                temp = Item[i]; Item[i] = Item[i+1]; Item[i+1] = temp;
                iSwitch = 1;
            }
        }
        for( j=0; j<10; j++) printf("%4d", Item[j]);
        printf("\n");
    } while(iSwitch);

    system("pause"); return(0);
}