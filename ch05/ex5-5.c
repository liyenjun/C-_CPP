#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int ix, iAPlus, iA, iB, iC, iD, iE, iWrongGrade;

    iWrongGrade = ix = iAPlus = iA = iB = iC = iD = iE = 0;

    printf("��J��妨�Z�A���J999��ܵ���: ");

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

    printf("100�� %4d ��\n", iAPlus);
    printf("90~99�� %4d ��\n", iA);
    printf("80~89�� %4d ��\n", iB);
    printf("70~79�� %4d ��\n", iC);
    printf("60~69�� %4d ��\n", iD);
    printf("0~59�� %4d ��\n", iE);  

    system("pause"); return(0);
}

