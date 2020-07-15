#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int ia, ib, ic;
    
    printf("Input the lengths of a triangular:\n");
    printf("a="); scanf("%d", &ia);
    printf("b="); scanf("%d", &ib);
    printf("c="); scanf("%d", &ic);

    if(ia + ib < ic) printf("This is no a triangular.\n");
    else if(ib + ic < ia) printf("This is no a triangular.\n");
    else if(ic + ia < ib) printf("This is no a triangular.\n");
    else printf("It's ok!\n");

    system("pause"); return(0);
}

