#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char cAsk1[20] = "��J�A���m�W:";
    char cAsk2[20] = "��J�A���Ǹ�:";
    char cName[20];
    char cId[20];
    printf("%s", cAsk1);
    scanf("%s", cName);
    fflush(stdin);
    puts(cAsk2);
    gets(cId);
    printf("�A���m�W: %s �Ǹ�: %s\n", cName, cId);
    printf("%s", cAsk1);
    scanf("%s",cName);
    system("pause"); return(0);
}