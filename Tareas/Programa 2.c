#include <stdio.h>
main(void)
{
    int n,num,c=0,suma=0;
    while (c<=9)
    {
        printf("\ningresar numero:\n");
        scanf("%d",&num);
        suma+=num;
        c=c+1;
    }
    printf("\nLa suma de los numeros es: %d",suma);
}
