#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char cAsk1[20] = "輸入你的姓名:";
    char cAsk2[20] = "輸入你的學號:";
    char cName[20];
    char cId[20];
    printf("%s", cAsk1);
    scanf("%s", cName);
    fflush(stdin);
    puts(cAsk2);
    gets(cId);
    printf("你的姓名: %s 學號: %s\n", cName, cId);
    printf("%s", cAsk1);
    scanf("%s",cName);
    system("pause"); return(0);
}