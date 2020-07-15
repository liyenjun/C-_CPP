#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    char A[10], c; int i, j, n;
    printf("½Ð¿é¤J¦r¦ê: "); scanf("%s", A); n = strlen(A);
    for(i=0; i<n; i++)
    {
        for(j=1; j<=n; j++)
        {
            //printf("%d ", (j+i)%5);
            printf("%c", A[(j+i)%5]);            
        }
        printf("\n");
    }
    system("pause"); return(0);
}