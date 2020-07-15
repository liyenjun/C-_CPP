#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int ix, iAPlus, iA, iB, iC, iD, iE, iWrongGrade;

    iWrongGrade = ix = iAPlus = iA = iB = iC = iD = iE = 0;

    printf("輸入國文成績，當輸入999表示結束: ");

    while(ix != 999)
    {
        scanf("%d", &ix);
        if(ix>100)
        {
            printf("Wrong Grade\n");
            //break;
        }
        else if( ix == 100 ) iAPlus++;
        else if( ix >= 90 ) iA++;
        else if( ix >= 80 ) iB++;
        else if( ix >= 70 ) iC++;
        else if( ix >= 60 ) iD++;
        else if ( ix >= 0 ) iE++;
        else 
        {
            printf("Wrong Grade\n");
            //break;
        }
    }

    printf("100分 %4d 個\n", iAPlus);
    printf("90~99分 %4d 個\n", iA);
    printf("80~89分 %4d 個\n", iB);
    printf("70~79分 %4d 個\n", iC);
    printf("60~69分 %4d 個\n", iD);
    printf("0~59分 %4d 個\n", iE);  

    system("pause"); return(0);
}

