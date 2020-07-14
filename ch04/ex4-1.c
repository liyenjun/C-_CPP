#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int ix = 1;
    int iEven, iMultiple3, iMultiple5;

    iEven = iMultiple3 = iMultiple5 = 0;

    while( ix <= 10000)
    {
        if( ix%2 == 0 ) iEven += ix;
        if( ix%3 == 0 ) iMultiple3 += ix;
        if( ix%5 == 0 ) iMultiple5 += ix;
        ix++;
    }

    printf("案计㎝: 2+4+...+10000 = %4d\n",iEven);
    printf("3计㎝: 3+6+...+99999 = %4d\n",iMultiple3);
    printf("5计㎝: 5+10+...+10000 = %4d\n",iMultiple5);

    system("pause"); return(0);
}