#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
int main(void)
{
    int i, j, k, temp, Item[10];
    
    srand((unsigned)time(NULL));
    for (i=0; i<10; i++)
    {        
        Item[i] = rand()%1000 + 1;
        printf("%4d", Item[i]);
    }
    printf("\n%4d\n", Item[0]);

    for(i=1; i<10; i++)
    {
        j = 0; temp = Item[i];
        while(temp<Item[j] && j<i) j++;
        if(j!=i)
        {
            for(k=i; k>j; k--) Item[k] = Item[k-1];
            Item[j] = temp;
        }
        for(k=0; k<=i; k++) printf("%4d", Item[k]);
        printf("\n");

    }

    system("pause"); return(0);
}