#include <stdio.h>
#include <math.h>
main (void){
    float x,y,z;
    char resp;
    resp='s';
    while (resp=='s' || resp=='S'){
            system ("cls");
    printf("Ingrese el valor en metros:\n");
    scanf("%f",&x);
    y=x*39.37;
    z=y/12;
    printf("\nEl resultado es: \n%.2f Pulgadas \n%.2f Pies",y,z);
printf("\n Otra vez? R=s/n");
resp= getch();
    }
}
