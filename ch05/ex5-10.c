#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int ix, ifee;
    char cc;

    printf("��J�q�O�p���k: a)�a�x�ιq b)�u�~�ιq c)�b�~�ιq :");
    scanf("%c", &cc);
    printf("��J�ιq�q:");
    scanf("%d", &ix);
    switch (cc)
    {
    case 'a':
        if(ix<=100)
            ifee = ix * 2.4;
        else if(ix<=300)
            ifee = ix * 3.4;
        else
            ifee = ix * 4.4;
        break;
    case 'b':
        ifee = 150 + ix * 2.1;
        break;
    case 'c':
        if(ix<=300)
            ifee = ix * 6;
        else
            ifee = ix * 6.8;        
        break;
    default:
        break;
    }
    printf("�q�O: %d\n", ifee);
    system("pause"); return(0);
}

