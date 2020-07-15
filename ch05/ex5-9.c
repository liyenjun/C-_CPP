#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int iA, iB, iC, iD, imax, imin;
    
    printf("Input four numbers:\n");
    printf("A="); scanf("%d", &iA);
    printf("B="); scanf("%d", &iB);
    printf("C="); scanf("%d", &iC);
    printf("D="); scanf("%d", &iD);

    if((iA>iB) && (iA>iC) && (iA>iD))
        imax = iA;
    else if((iB>iC) && (iB>iD) && (iB>iA))
        imax = iB;
    else if ((iC>iD) && (iC>iA) && (iC>iB))
        imax = iC;
    else
        imax = iD;
    
    printf("max = %d\n", imax);
    
    if((iA<iB) && (iA<iC) && (iA<iD))
        imin = iA;
    else if((iB<iC) && (iB<iD) && (iB<iA))
        imin = iB;
    else if ((iC<iD) && (iC<iA) && (iC<iB))
        imin = iC;
    else
        imin = iD;
    
    printf("min = %d\n", imin);    

    system("pause"); return(0);
}

