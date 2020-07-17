#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
int main(void)
{
    int i, j, min, temp; 
    int A[10], B[10];

    srand((unsigned)time(NULL));
    for (i=0; i<10; i++)
    {        
        A[i] = rand()%999 + 1;        
        B[i] = rand()%999 + 1;        
    }
    for (i=0; i<10; i++)    printf("%d ", A[i]);            
    printf("\n");
    for (i=0; i<10; i++)    printf("%d ", B[i]);            
    printf("\n");

    for(i=0; i<10; i++)
    {
        min = A[i];
        for(j=0;j<10;j++)
            if( min>abs(A[i]-B[j]) )    min = abs(A[i]-B[j]);       
    }                

    printf("min = %4d\n", min);
               		
    system("pause"); return(0);
}