#include <stdio.h>
#include <stdlib.h>

int GenNum(void);
void ScoreInput(int [][4]);
int ScorePrint(int [][4], int);
void Sort(int [][4], int);

void Sort(int iScore[][4], int iCommand)
{
    int i, j, k, temp, max;

    for(i=0; i<8; i++)
    {
        max = i;
        for(k=i; k<8; k++)
            if(iScore[k][iCommand-1]>iScore[max][iCommand-1]) max = k;

        printf("max is %d\n", max);
        /*
        for(j=0; j<4; j++)
        {
            temp = iScore[i][j];
            iScore[i][j] = iScore[i][max];
            iScore[i][max] = temp;
        }
        */
    }
    /*
    for(i=0; i<8; i++)
    {
        max = i; 
        for(k=i;k<5;k++)
            if(iScore[iCommand][k]>iScore[iCommand][max]) max = k;

        //Switch data
        for(j=0;j<4;j++)
        {
            temp = iScore[i][j];
            iScore[i][j] = iScore[i][max];
            iScore[i][max] = temp;
        }
    }
    */
}

int GenNum(void)
{
    return (rand()%101);
}

int SocrePrint(int iScore[][4], int iCommand)
{
    int i, j, iSort;

    if(iCommand!=1)
    {
        Sort(iScore, iCommand);
    }
    printf("  ID   C   M   T\n");
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
    int i, j, iCommand;
    int iScore[8][4] = {0};

    ScoreInput(iScore);
    SocrePrint(iScore, 1);

    do
    {
        printf("1)依座號輸出 2)依國文分數排序 3)依數學分數排序 4)依總分排序 5)離開: ");
        scanf("%d", &iCommand);
        if(iCommand!=5)
            SocrePrint(iScore, iCommand);
    } while (iCommand!=5);
    
    
    
        
    system("pause"); return(0);
}

