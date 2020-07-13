#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define M_NAME "Pride and Prejudice"

int main(void)
{
    printf("Pride and Prejudice\n");
    printf("%-5.5s", M_NAME);
    printf("%14.5s\n", M_NAME);
    printf("%-9.9s", M_NAME);
    printf("%10.9s\n", M_NAME);
    system("pause"); return(0);    
}