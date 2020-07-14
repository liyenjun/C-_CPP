#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned int ui50, ui10, ui5, ui1, uiInput, uitemp;

    uiInput = 100;

    while(uiInput >= 50)
    {
        printf("How much money do you want to change?\n");
        scanf("%d", &uiInput);
        
        if(uiInput < 50) 
        {
            printf("Input is less than 50 dollar\n");
            break;
        }

        uitemp = uiInput;
        ui50 = uitemp / 50;
        printf("50 x %d\n", ui50);
        uitemp = uitemp - 50*ui50;
        ui10 = uitemp / 10;
        printf("10 x %d\n", ui10);
        uitemp = uitemp - 10*ui10;
        ui5 = uitemp / 5;
        printf("5 x %d\n", ui5);
        uitemp = uitemp - 5*ui5;
        ui1 = uitemp / 1;
        printf("1 x %d\n", ui1);
        uitemp = uitemp - 1*ui1;
    }
    
    
    system("pause"); return(0);
}