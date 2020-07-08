#include <stdio.h>
#include <stdlib.h>

#define POUND2KG 0.454

int main(void)
{
    float fpound, fkg;

    printf("Input pound: ");
    scanf("%f", &fpound);
    printf("\n %f cm", fpound*POUND2KG);

    printf("\nInput kg: ");
    scanf("%f", &fkg);
    printf("\n %f cm", fkg/POUND2KG);
	
	system("pause"); return(0);
}