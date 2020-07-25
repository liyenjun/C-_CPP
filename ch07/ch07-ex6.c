#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXSTACk 10
int Sp = -1;
int iStack[MAXSTACk] = {0};

void iPush(int);
int iPop(void);
int GenNum(void);
int isEmpty(void);

int isEmpty(void)
{
    if(Sp==-1)
    {
        return 1;
    }        
    else
    {
        return 0;
    } 
}
int GenNum(void)
{
    return (rand()%98 + 1);
}
void iPush(int data)
{
    if(Sp>=MAXSTACk)
    {
        printf("Stack is full\n");
    }
    else
    {
        Sp++;
        iStack[Sp] = data;
    }    
}
int iPop(void)
{
    int data;

    if(isEmpty())
    {
        printf("stack is empty\n");
    }
    else
    {
        data = iStack[Sp];
        Sp--;
        return data;
    }      
}
int main(void)
{
    int iCommand, iNum, i;

    srand((unsigned)time(NULL));
    for (i=0; i<10; i++)
    {        
        //iStack[i] = GenNum();
        iPush(GenNum());
        printf("%4d", iStack[i]);
    }
    printf("\n");

    do
    {
        printf("1)Push a number 2)Pop a number 3)Exit: ");
        scanf("%d", &iCommand);

        if(iCommand==1)
        {
            printf("Input a number: ");
            scanf("%d", &iNum);
            iPush(iNum);
        }
        if(iCommand==2)
        {
            iNum = iPop();
            printf("Pop data is %d\n", iNum);
        }
        if(isEmpty!=0)
        {
            for(i=0;i<=Sp;i++)
                printf("%4d", iStack[i]);
            printf("\n");
        }
    } while (iCommand!=3);
    
    system("pause"); return(0);
}

