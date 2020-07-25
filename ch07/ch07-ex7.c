#include <stdio.h>
#include <stdlib.h>

int GenNum(void);
void ScoreInput(int [][4]);
int ScorePrint(int [][4]);

int GenNum(void)
{
    return (rand()%101);
}

int SocrePrint(int iScore[][4])
{
    int i, j;
    for(i=0;i<8;i++)
    {
        for(j=0;j<4;j++)
            printf("%4d", iScore[i][j]);
        printf("\n");
    }
}

void ScoreInput(int iScore[][4])
{
    int i, j;
    for(i=0; i<8; i++)
    {              
        for(j=1;j<3;j++)
            iScore[i][j] = GenNum();
        
        iScore[i][0] = i+1;
        iScore[i][3] = iScore[i][1] + iScore[i][2];
    }
}
int main(void)
{
    int i, j;
    int iScore[8][4] = {0};

    ScoreInput(iScore);
    SocrePrint(iScore);
        
    system("pause"); return(0);
}

