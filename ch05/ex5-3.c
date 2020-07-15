#include <stdio.h>
#include <stdlib.h>

#define SPACE ' '

int main(void)
{
    char ch;
    int iLower, iUpper, iSpace, iNum;

    iLower = iUpper = iSpace = iNum = 0;

    printf("輸入一段英文句子，以 # 代表結尾\n");
    while( (ch = getchar()) != '#')
    {
        if( (ch >= 'a') && ( ch <= 'z') ) iLower++;
        if( (ch >= 'A') && ( ch <= 'Z') ) iUpper++;
        if( (ch >= '0') && ( ch <= '9') ) iNum++;
        if( ch == SPACE) iSpace++;
    }
    printf("小寫英文字母有: %4d 個\n", iLower);
    printf("大寫英文字母有: %4d 個\n", iUpper);
    printf("    數字字母有: %4d 個\n", iNum);
    printf("    空格字母有: %4d 個\n", iSpace);
    system("pause"); return(0);
}

