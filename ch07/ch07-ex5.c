#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int NumGen(void);
int Sorting(int);

int NumGen(void)
{
    return (rand()%98 + 1);
}
int Sorting(int iDir)
{
    if(iDir)
    {
         printf("1\n");
    }
    else
    {
         printf("0\n");
    }
}
int main(void)
{
    int i, iNUM[10] = {0};
    
    srand((unsigned)time(NULL));
    for(i=0; i<10; i++)
        iNUM[i] = NumGen();
    
        
    printf("Oringal Array = ");   
    for(i=0;i<10;i++)
    {
        printf("%4d", iNUM[i]);        
    }
    printf("\n");
        

    printf("0)小到大排列 1)大到小排列: ");
    scanf("%d", &i);
    Sorting(i);
    printf("Sorted Array =");
    for(i=0;i<10;i++)
    {
        printf("%4d", iNUM[i]);        
    }
    printf("\n");
        

    system("pause"); return(0);
}

