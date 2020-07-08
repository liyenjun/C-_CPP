#include <stdio.h>
#include <stdlib.h>

#define INCH2CM 2.54

int main(void)
{
    float fInch, fcm;

    printf("Input inch: ");
    scanf("%f", &fInch);
    printf("\n %f cm", fInch*INCH2CM);

    printf("\nInput cm: ");
    scanf("%f", &fcm);
    printf("\n %f cm", fcm/INCH2CM);
	
	system("pause"); return(0);
}