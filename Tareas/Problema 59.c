#include <stdio.h>
#include <math.h>
main (void)
{
    float x,y;
    printf ("\n Introduce la medida en pulgadas:\n");
    scanf("%f",&x);
    y=x*2.54;
    printf ("\n %.2f cm equivale a %.2f pulgadas",x,y);

}
