#include <stdio.h>
#include <math.h>
main (void)
{
    float x,y;
    printf ("\n Introduce la medida en Yardas:\n");
    scanf("%f",&x);
    y=x*0.9144;
    printf ("\n %.2f Yd equivale a %.2f Metros",x,y);

}
