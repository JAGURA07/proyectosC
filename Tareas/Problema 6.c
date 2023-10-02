#include <stdio.h>
#include <math.h>
main (void)
{
    int x,y,z;
    x=1;
    printf ("Numero  Cuadrado  Cubo");
    while (x<=5)
        {
        y=pow(x,2);
        z=pow(x,3);
        printf ("\n %d:       %d         %d",x,y,z);
        x++;

    }
}

