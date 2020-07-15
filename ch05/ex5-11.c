#include <stdio.h>
#include <stdlib.h>
#include <time.h> /* for time 函式 */
int main(void)
{
	int iPWin, iCWin;
	int iPlayer, iComp; // 玩家與電腦的出拳狀態
	iPWin = iCWin = 0; // 設定電腦與玩家目前�m沒有人贏 
	srand((unsigned)time(NULL)); // 設定亂數產生的��點, 執行一次即可
	while( (iPWin <= 2) && (iCWin <= 2) ) 
	{
		iComp = rand()%3+1; // 以 rand 取得亂數, 再轉成1,2,3 成為電腦的出拳狀態
		printf("1:剪刀, 2:石頭, 3:布. 你出的是: ");
		scanf("%d",&iPlayer);
        
        if(iPlayer-iComp == 0) 
        {
            printf("P:%d C:%d\n", iPlayer, iComp);
            printf("平手\n");
        }
        else if(iPlayer-iComp<0)
        {
            printf("P:%d C:%d\n", iPlayer, iComp);
            if(iPlayer-iComp==-1)
            {
                printf("電腦贏!\n");
                iCWin++;
            }
            else
            {
                printf("你贏\n");
                iPWin++;
            }          
        }
		else if(iPlayer-iComp>0)
        {
            printf("P:%d C:%d\n", iPlayer, iComp);
            if(iPlayer-iComp==1)
            {
                printf("你贏\n");
                iPWin++;
            }
            else
            {

                printf("電腦贏!\n");
                iCWin++;                
            }                     
        }
	}
	if(iPWin == 3) printf("恭喜!你贏電腦嘍!\n");
	else printf("這次輸了沒關係,下次繼續努力!\n");
    system("pause");
	return 0;
}