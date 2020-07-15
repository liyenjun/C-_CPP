#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int i, j, count;
    int Ary[2][3] = {{1,2},{3}};

    printf("Ary[0][1] = %d, Ary[1][0] = %d\n", Ary[0][1], Ary[1][0]);

    count=1;
    for(i=1,j=1; j<4,i<3; i++, j++) count++;
    printf("j<4, i<3, count = %d\n", count);

    count=1;
    for(i=1,j=1; j<4 || i<3; i++, j++) count++;
    printf("j<4 || i<3, count = %d\n", count);

    count=1;
    for(i=1,j=1; j<4 && i<3; i++, j++) count++;
    printf("j<4 && i<3, count = %d\n", count);



    system("pause"); return(0);
}