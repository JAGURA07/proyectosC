#include <stdio.h>
#include <math.h>

main (void)
{
    float x,y,z;
    printf ("\n Ingresa el primer valor:\n");
    scanf("%f",&x);
    printf("\n Ingresa el segundo valor:\n");
    scanf ("%f",&y);
    z=(x*y)/2;
    printf ("\nEl resultado es: %.2f",z);
}
