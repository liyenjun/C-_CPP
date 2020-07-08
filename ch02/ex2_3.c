#include <stdio.h>
#include <stdlib.h>

#define M2TOPING 0.3025

int main(void)
{
    float fl, fw, fping;

    printf("Input leng(m): \n");
    scanf("%f", &fl);
    printf("Input weight(m): \n");
    scanf("%f", &fw);    
    printf(" %f ping\n", fl*fw*M2TOPING);

    printf("Input ping: \n");
    scanf("%f", &fping);
    printf(" %f m^2\n", fping/M2TOPING);
	
	system("pause"); return(0);
}