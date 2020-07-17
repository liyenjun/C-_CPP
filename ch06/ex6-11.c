#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
int main(void)
{
    int i, j, k, max, temp;
    int A[4][5] = {1, 2 , 3, 4, 5};


    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%5d", A[i][j]);
        }            
        printf("\n");
    }
    printf("\n");

    printf("輸入國文成績(0-100): ");
    for(j=0;j<5;j++)
        scanf("%d", &A[1][j]);   //row 1: Chinese
        
    printf("輸入數學成績(0-100): ");
    for(j=0;j<5;j++)
        scanf("%d", &A[2][j]);   //row 2: Math


    for(j=0;j<5;j++)
        A[3][j] = A[1][j] + A[2][j];


    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%5d", A[i][j]);
        }            
        printf("\n");
    }
    printf("\n");

    
    for(j=0;j<5;j++)
    {
        max = j;
        for(k=j;k<5;k++)
            if(A[3][k]>A[3][max]) max = k;

        for(i=0;i<4;i++)
        {
            temp = A[i][j];
            A[i][j] = A[i][max];
            A[i][max] = temp;
        }
    }



    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%5d", A[i][j]);
        }            
        printf("\n");
    }
    printf("\n");

    system("pause"); return(0);
}