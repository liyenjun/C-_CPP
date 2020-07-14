#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char cInput;

    printf("Input a character:");
    cInput = getchar();
    if( (cInput>=65) && (cInput<=90) )
    {
        printf("The input character is %c\n", cInput);
        printf("The low case of input is %c\n", cInput+32);
    }
    else if( (cInput>=97) && (cInput<=122) )
    {
        printf("The input character is %c\n", cInput);
        printf("The capital of input is %c\n", cInput-32);
    }
    else
    {
        printf("Wrong Input\n");
    }
    
    system("pause"); return(0);
}