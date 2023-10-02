#include <stdio.h>
#include <math.h>
main (void){
    int x,y,z;
    char resp;
    resp='s';
    while (resp=='s' || resp=='S'){
            system ("cls");
    printf("Introduzca su numero");
    scanf("%d",&x);
    y=sqrt(x);
    z=pow(y,3);
if (z>=98){
    printf("\nEl resultado es %d",z);
}
else {
    printf ("\nSin resultado");
}
printf("\nOtra vez? R=s/n");
resp= getch();

    }
}
