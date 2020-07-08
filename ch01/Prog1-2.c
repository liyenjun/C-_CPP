#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int attack;
    int defence;
    printf("輸入攻擊力:");
    scanf("%d",&attack);
    printf("輸入怪獸的防禦力:");
    scanf("%d",&defence);
    printf("對怪獸的傷害值為:%d\n",3*attack-2*defence);
    system("pause");
    return(0);
}