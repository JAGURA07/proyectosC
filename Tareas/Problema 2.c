#include <stdio.h>
#include <math.h>
main (void){
    int x;
    char resp;
    resp= 's';
    while (resp=='s' || resp=='S')
    {
    system("cls");
    printf("\nEdad del shavo:\n");
    scanf("%d",&x);
    if (x<18){
        printf("\nEs usted menor de edad");
    }
    else {
        printf("\nEs usted un mayor de edad");
    }
    printf("\nOtra vez? R=s/n");
resp= getch();
}

}
