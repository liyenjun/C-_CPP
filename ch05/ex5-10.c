#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int ix, ifee;
    char cc;

    printf("輸入電費計算方法: a)家庭用電 b)工業用電 c)�b業用電 :");
    scanf("%c", &cc);
    printf("輸入用電量:");
    scanf("%d", &ix);
    switch (cc)
    {
    case 'a':
        if(ix<=100)
            ifee = ix * 2.4;
        else if(ix<=300)
            ifee = ix * 3.4;
        else
            ifee = ix * 4.4;
        break;
    case 'b':
        ifee = 150 + ix * 2.1;
        break;
    case 'c':
        if(ix<=300)
            ifee = ix * 6;
        else
            ifee = ix * 6.8;        
        break;
    default:
        break;
    }
    printf("電費: %d\n", ifee);
    system("pause"); return(0);
}

