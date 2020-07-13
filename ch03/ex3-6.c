#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
    float fChinese, fMath, fEnglish;

    printf("請輸入國文成績:  ");
    scanf("%f", &fChinese);
    printf("請輸入數學成績:  ");
    scanf("%f", &fMath);
    printf("請輸入英文成績:  ");
    scanf("%f", &fEnglish);
    printf("==================\n");
    printf("      國文成績:  %04.1f\n", fChinese);
    printf("      數學成績:  %04.1f\n", fMath);
    printf("      英文成績:  %04.1f\n", fEnglish);
    printf("==================\n");
    printf("        總成績:  %05.1f\n", fChinese + fMath + fEnglish);
    printf("      平均成績:  %04.1f\n", (fChinese + fMath + fEnglish)/3);
    system("pause"); return(0);    
}