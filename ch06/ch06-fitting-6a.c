#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    char A[10], c; int i, j, n;
    printf("½Ð¿é¤J¦r¦ê: "); scanf("%s", A); n = strlen(A);
    for(i=0; i<n-1; i++)
    {
        c = A[0];
        for(j=0; j<n-1; j++) A[j] = A[j+1];
        A[n-1] = c;
        printf("%s\n", A);
    }
    system("pause"); return(0);
}