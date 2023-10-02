#include <stdio.h>
#include <math.h>
main (void)
{
    float x,y,z;
    printf("\n Introduzca el precio del producto:\n");
    scanf("%f",&x);
    printf("\n Dinero entregado: \n");
    scanf("%f",&y);
    z=y-x;
    printf("\n Su cambio es de: %.2f",z);
}
