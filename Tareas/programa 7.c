#include <stdio.h>
main (void)
{
    int x,y,z;
    printf("Elige el inicio:\n");
    scanf("%d",&x);
    printf("Elige el incremento:\n");
    scanf("%d",&y);
    printf("Elige el final:\n");
    scanf("%d",&z);

   while (x<=z)
        {
        printf ("\n%d",x);
        x=x+y;
    }
}
