#include <stdio.h>
#include <stdlib.h>

#define SPACE ' '

int main(void)
{
    char ch;
    int iLower, iUpper, iSpace, iNum;

    iLower = iUpper = iSpace = iNum = 0;

    printf("��J�@�q�^��y�l�A�H # �N����\n");
    while( (ch = getchar()) != '#')
    {
        if( (ch >= 'a') && ( ch <= 'z') ) iLower++;
        if( (ch >= 'A') && ( ch <= 'Z') ) iUpper++;
        if( (ch >= '0') && ( ch <= '9') ) iNum++;
        if( ch == SPACE) iSpace++;
    }
    printf("�p�g�^��r����: %4d ��\n", iLower);
    printf("�j�g�^��r����: %4d ��\n", iUpper);
    printf("    �Ʀr�r����: %4d ��\n", iNum);
    printf("    �Ů�r����: %4d ��\n", iSpace);
    system("pause"); return(0);
}

