#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>
int main(void)
{
    int i, j, temp, iNum; 
    int A[20];
    char B[10];

    printf("Input a number: ");
    scanf("%d", &iNum);

    temp = iNum;

    i=0;
    while( iNum!=0 )
    {
        A[i] = iNum%2;
        iNum = iNum/2;
        i++;
    }
    
    for(--i; i>=0; i--)    printf("%d", A[i]);
    printf("\n");

    iNum = temp;

    i=0;
    while( iNum!=0 )
    {
        if( iNum%16==15 ) B[i] = 'F';
        else if( iNum%16==14 ) B[i] = 'E';
        else if( iNum%16==13 ) B[i] = 'D';
        else if( iNum%16==12 ) B[i] = 'C';
        else if( iNum%16==11 ) B[i] = 'B';
        else if( iNum%16==10 ) B[i] = 'A';
        else if( iNum%16== 9 ) B[i] = '9';
        else if( iNum%16== 8 ) B[i] = '8';
        else if( iNum%16== 7 ) B[i] = '7';
        else if( iNum%16== 6 ) B[i] = '6';
        else if( iNum%16== 5 ) B[i] = '5';
        else if( iNum%16== 4 ) B[i] = '4';
        else if( iNum%16== 3 ) B[i] = '3';
        else if( iNum%16== 2 ) B[i] = '2';
        else if( iNum%16== 1 ) B[i] = '1';
        else if( iNum%16== 0 ) B[i] = '0';
        iNum = iNum/16;
        i++;        
    }
    
    for(--i; i>=0; i--)    printf("%c", B[i]);
    printf("\n");

    system("pause"); return(0);
}