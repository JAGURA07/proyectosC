#include <stdio.h>
#include <math.h>
main (void)
{
    int w,x,y,z;
    char resp;
    resp='s';
    while (resp=='s' || resp=='S')
    {
        system("cls");
    char nombre [10];
    printf("\nNombre del chavo:\n");
    scanf("%s",&nombre);
    printf ("\nIntroduzca su primer calificacion:\n");
    scanf("%d",&w);
    printf("\n Introduzca su segunda calificacion:\n");
    scanf("%d",&x);
    printf("\n Introduzca su tercera calificacion:\n");
    scanf("%d",&y);
    z=(w+x+y)/3;
     if ( z>=10 ){
            printf("\nPromedio de %s: %d\nExcelente",nombre,z);
     }
         else {
            if (z==9){
                printf("\nPromedio de %s: %d\nMuy bien",nombre,z);
         }
     else {
        if (z==8){
            printf("\nPromedio de %s: %d\nBien",nombre,z);
        }
        else {
            if (z==7){
                printf("\nPromedio de %s: %d\nRegular",nombre,z);
            }
     else {
        if (z==6){
            printf("\nPromedio de %s: %d \nSuficiente",nombre,z);
        }
        else {
            printf("\nReprobao >:v");
        }
     }
        }
     }
}
printf ("\nOtra vez? R=s/n");
resp= getch();
    }
}

