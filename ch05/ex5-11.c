#include <stdio.h>
#include <stdlib.h>
#include <time.h> /* for time �禡 */
int main(void)
{
	int iPWin, iCWin;
	int iPlayer, iComp; // ���a�P�q�����X�����A
	iPWin = iCWin = 0; // �]�w�q���P���a�ثe�m�S���HĹ 
	srand((unsigned)time(NULL)); // �]�w�üƲ��ͪ����I, ����@���Y�i
	while( (iPWin <= 2) && (iCWin <= 2) ) 
	{
		iComp = rand()%3+1; // �H rand ���o�ü�, �A�ন1,2,3 �����q�����X�����A
		printf("1:�ŤM, 2:���Y, 3:��. �A�X���O: ");
		scanf("%d",&iPlayer);
        
        if(iPlayer-iComp == 0) 
        {
            printf("P:%d C:%d\n", iPlayer, iComp);
            printf("����\n");
        }
        else if(iPlayer-iComp<0)
        {
            printf("P:%d C:%d\n", iPlayer, iComp);
            if(iPlayer-iComp==-1)
            {
                printf("�q��Ĺ!\n");
                iCWin++;
            }
            else
            {
                printf("�AĹ\n");
                iPWin++;
            }          
        }
		else if(iPlayer-iComp>0)
        {
            printf("P:%d C:%d\n", iPlayer, iComp);
            if(iPlayer-iComp==1)
            {
                printf("�AĹ\n");
                iPWin++;
            }
            else
            {

                printf("�q��Ĺ!\n");
                iCWin++;                
            }                     
        }
	}
	if(iPWin == 3) printf("����!�AĹ�q����!\n");
	else printf("�o����F�S���Y,�U���~��V�O!\n");
    system("pause");
	return 0;
}