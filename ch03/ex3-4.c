#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
    float fx, fy, fz;

    printf("�s���J�T�ӯB�I��:");
    scanf("%f%f%f", &fx, &fy, &fz);
    printf("%16.1f\n", fx);
    printf("%17.2f\n", fy);
    printf("%18.3f\n", fz);

    system("pause"); return(0);    
}