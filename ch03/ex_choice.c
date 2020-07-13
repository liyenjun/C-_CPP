#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char cName[15] = "XYZ";
    char cN[10] = "John";

    printf("%6.4d\n", 60);
    putchar(65);
    printf("sizeof(\"Frank\") = %d\n", sizeof("Frank"));
    printf("sizeof(cName) = %d\n", sizeof(cName));
    printf("strlen(cN) = %d\n", strlen(cN));

    system("pause"); return(0);
}