#include <stdio.h>
#include <stdlib.h>
int iPower(int, int);
int iPower(int x, int n)
{
    int i;
    i = 0;

    while(x%n == 0)
    {
        
        if(x>0)
        {
            i++;
            x -= n;
        }            
        else
        {
            break;
        }
        
    }
            
    return i;
}
int main(void)
{
    int iNum, n, k;

    printf("Input two numbers (x,n): ");
    scanf("%d %d", &iNum, &n);
    k = iPower(iNum, n);
    if(k)
        printf("%d is %d times of %d\n", iNum, k, n);
    else
        printf("%d is not a multiple of %d\n", iNum, n);

    system("pause"); return(0);
}

