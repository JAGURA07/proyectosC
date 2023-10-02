#include <stdio.h>
#include <math.h>
main (void)
{
    int x;
    char resp;
    resp='s';
    while (resp=='s' || resp=='S'){
            system ("cls");
    printf("\nIngrese el valor:\n");
    scanf("%d",&x);
    if (x%3==0)
    {
        printf("\nEs multiplo de 3");
    }
    else
    {
        printf("No es multiplo de 3");
    }
    printf("\n Otra vez? R=s/n");
    resp=getch();
}
}
