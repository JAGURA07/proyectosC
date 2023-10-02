#include <stdio.h>
#include <math.h>
main (void){
    float y,z,a;
    int x;
    char resp;
    resp='s';
    while (resp=='s' || resp=='S'){
            system("cls");
    printf("Eija una opcion:\n 1.-Seno de un numero\n 2.-Coseno de un numero\n 3.-Tangente de un numero\n Respuesta (1-3)\n");
    scanf("%d",&x);
    switch(x)
    {

case 1:
    printf("Elija un numero:\n");
    scanf ("%f",&a);
    z=(a*360)/6.2830;
    y=sin(z);

    printf("\nEl vaor del seno de %.2f es: %.2f",z,y);
    break;
case 2:
    printf("Elija un numero:\n");
    scanf ("%f",&a);
    z=(a*360)/6.2830;
    y=cos(z);
    printf("\nEl vaor del coseno de %.2f es: %.2f",z,y);
    break;
case 3:
    printf("Elija un numero:\n");
    scanf ("%f",&a);
    z=(a*360)/6.2830;
    y=tan(z);
    printf("\nEl vaor de la tangente de %.2f es: %.2f",z,y);
break;
default:
    printf("\nElija en numero del 1 al 3");
    }
printf("\n Otra vez? R=s/n");
resp= getch();
}
}
