#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
    float fChinese, fMath, fEnglish;

    printf("�п�J��妨�Z:  ");
    scanf("%f", &fChinese);
    printf("�п�J�ƾǦ��Z:  ");
    scanf("%f", &fMath);
    printf("�п�J�^�妨�Z:  ");
    scanf("%f", &fEnglish);
    printf("==================\n");
    printf("      ��妨�Z:  %04.1f\n", fChinese);
    printf("      �ƾǦ��Z:  %04.1f\n", fMath);
    printf("      �^�妨�Z:  %04.1f\n", fEnglish);
    printf("==================\n");
    printf("        �`���Z:  %05.1f\n", fChinese + fMath + fEnglish);
    printf("      �������Z:  %04.1f\n", (fChinese + fMath + fEnglish)/3);
    system("pause"); return(0);    
}