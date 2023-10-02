#include <stdio.h>
#include <math.h>
main (void){
  int opcion=1;
char x;
x= 'no';
while(opcion)
{
printf("Seguir introduciendo numeros (Finalizar con no):  ");
scanf("%d",&opcion);

if(x)
{
printf("Ya");
}
else
{
    printf("Seguir introduciendo numeros (Finalizar con no): ");
scanf("%d",&opcion);

}
x=getch();

}
}
