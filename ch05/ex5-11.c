#include <stdio.h>
#include <stdlib.h>
#include <time.h> /* for time ¨ç¦¡ */
int main(void)
{
	int iPWin, iCWin;
	int iPlayer, iComp; // ª±®a»P¹q¸£ªº¥X®±ª¬ºA
	iPWin = iCWin = 0; // ³]©w¹q¸£»Pª±®a¥Ø«em¨S¦³¤HÄ¹ 
	srand((unsigned)time(NULL)); // ³]©w¶Ã¼Æ²£¥ÍªºşÂI, °õ¦æ¤@¦¸§Y¥i
	while( (iPWin <= 2) && (iCWin <= 2) ) 
	{
		iComp = rand()%3+1; // ¥H rand ¨ú±o¶Ã¼Æ, ¦AÂà¦¨1,2,3 ¦¨¬°¹q¸£ªº¥X®±ª¬ºA
		printf("1:°Å¤M, 2:¥ÛÀY, 3:¥¬. §A¥Xªº¬O: ");
		scanf("%d",&iPlayer);
        
        if(iPlayer-iComp == 0) 
        {
            printf("P:%d C:%d\n", iPlayer, iComp);
            printf("¥­¤â\n");
        }
        else if(iPlayer-iComp<0)
        {
            printf("P:%d C:%d\n", iPlayer, iComp);
            if(iPlayer-iComp==-1)
            {
                printf("¹q¸£Ä¹!\n");
                iCWin++;
            }
            else
            {
                printf("§AÄ¹\n");
                iPWin++;
            }          
        }
		else if(iPlayer-iComp>0)
        {
            printf("P:%d C:%d\n", iPlayer, iComp);
            if(iPlayer-iComp==1)
            {
                printf("§AÄ¹\n");
                iPWin++;
            }
            else
            {

                printf("¹q¸£Ä¹!\n");
                iCWin++;                
            }                     
        }
	}
	if(iPWin == 3) printf("®¥³ß!§AÄ¹¹q¸£¹Æ!\n");
	else printf("³o¦¸¿é¤F¨SÃö«Y,¤U¦¸Ä~Äò§V¤O!\n");
    system("pause");
	return 0;
}