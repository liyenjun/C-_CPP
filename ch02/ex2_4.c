#include <stdio.h>
#include <stdlib.h>

#define C2F fc*9/5+32
#define F2C (ff-32)*5/9

int main(void)
{
    float fc, ff;

    printf("Input Celsius: ");
    scanf("%f", &fc);
    printf("\n %f Fahrenheit ", C2F);

    printf("\nInput Fahrenheit : ");
    scanf("%f", &ff);
    printf("\n %f Celsius", F2C);
	
	system("pause"); return(0);
}