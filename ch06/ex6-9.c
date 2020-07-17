#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
int main(void)
{
    int i, j, k;
    int A[3][3], B[3][3], C[3][3];

    printf("Input two matrices A and B: \n");
    printf("A = ");
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            scanf("%d", &A[i][j]);                  

    printf("B = ");
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            scanf("%d", &B[i][j]);     

    printf("\nA = \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            printf("%4d", A[i][j]);
        printf("\n");
    }
   
    printf("\nB = \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            printf("%4d", B[i][j]);
        printf("\n");
    }        

    printf("\nC = A + B\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            C[i][j] =  A[i][j] +  B[i][j];
            printf("%4d", C[i][j]);
        }            
        printf("\n");
    }

    printf("\nC = A * B\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            C[i][j] = 0;
            for(k=0; k<3; k++)
            {
                C[i][j] = C[i][j] + A[i][k] * B[k][j];                
            }
            printf("%4d", C[i][j]);
        }
         printf("\n");    
    }
    system("pause"); return(0);
}