#include <stdio.h>
#include <math.h>

main (void)
{
    float x,y,z;
    printf("\n Introduzca el primer valor");
    scanf("%f",&x);
    printf("\n Introduzca el segundo valor");
    scanf("%f",&y);
    z=pow((x+y),3)/4;
    printf("\n El resultado es: %.2f",z);
}
