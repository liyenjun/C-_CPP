#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned int ui50, ui10, ui5, ui1, uiInput, uitemp;

    printf("How much money do you want to change?\n");
    scanf("%d", &uiInput);
    ui50 = uiInput / 50;
    printf("50 x %d\n", ui50);
    uiInput = uiInput - 50*ui50;
    ui10 = uiInput / 10;
    printf("10 x %d\n", ui10);
    uiInput = uiInput - 10*ui10;
    ui5 = uiInput / 5;
    printf("5 x %d\n", ui5);
    uiInput = uiInput - 5*ui5;
    ui1 = uiInput / 1;
    printf("1 x %d\n", ui1);
    uiInput = uiInput - 1*ui1;
    system("pause"); return(0);
}