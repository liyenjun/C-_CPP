#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
    double  dx, dy, dz;
    double dtemp;

    printf("輸入三個doule變數:");
    scanf("%lf%lf%lf", &dx, &dy, &dz);
    printf("\ndx = %f\n", dx);
    printf("dy = %f\n", dy);
    printf("dz = %f\n", dz);
    //switch dx and dy
    dtemp = dx;
    dx = dy;
    dy = dtemp;
    printf("switch dx and dy");
    printf("\ndx = %f\n", dx);
    printf("dy = %f\n", dy);
    printf("dz = %f\n", dz);

    //switch dz and dx
    dtemp = dz;
    dz = dx;
    dx = dtemp;
    printf("switch dz and dx");
    printf("\ndx = %f\n", dx);
    printf("dy = %f\n", dy);
    printf("dz = %f\n", dz);

    //switch dz and dy
    dtemp = dz;
    dz = dy;
    dy = dtemp;
    printf("switch dz and dy");
    printf("\ndx = %f\n", dx);
    printf("dy = %f\n", dy);
    printf("dz = %f\n", dz);

    system("pause"); return(0);    
}