#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    int i, min, max;

    int A[20] = {3, 2, 1, 4, 5, 6, 7, 8, 9, 10, 31, 23, 5, 10, 17, 54, 99, 102, 87, 99};

    min = max = A[19];

    for(i=19; i>0; i--)
    {
        if(A[i]>max)
        {
            max = A[i];
        }
        else if(A[i]<min)
        {
            min = A[i];
        }
    }

    printf("max = %d\n", max);
    printf("min = %d\n", min);
    system("pause"); return(0);
}