#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define M_NAME "Pride and Prejudice"

int main(void)
{
    printf("Pride and Prejudice\n");
    printf("%-19.5s\n", M_NAME);
    printf("%19.5s\n", M_NAME);

    system("pause"); return(0);    
}