#include <stdio.h>
#include <math.h>
main (void)
{
    int x,z,y;
    x=0;
    printf("\nElige un numero a saber el factorial:\n");
    scanf("%d",&z);

   while (x<=z)
        {
            x=x+1;
            y=y*x;
        printf ("\n%d",y);
        x=x+1;
    }
}

