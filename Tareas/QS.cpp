#include <stdio.h>
#include <iostream>
using namespace std;
int I (int n);
int I (int n)
{
     int lista[5];
     int i;
    for (i=0;i<=4;i++)
    {
        printf("\nIntroduzca su valor\n");
        scanf("%d",&lista[i]);
    }
    return lista;
}
void qs(int lista[],int limite_izq,int limite_der)
{
    int izq,der,temporal,pivote;
    izq=limite_izq;
    der = limite_der;
    pivote = lista[(izq+der)/2];
    do{
        while(lista[izq]<pivote && izq<limite_der)izq++;
        while(pivote<lista[der] && der > limite_izq)der--;
        if(izq <=der)
        {
            temporal= lista[izq];
            lista[izq]=lista[der];
            lista[der]=temporal;
            izq++;
            der--;
        }
    }while(izq<=der);
    if(limite_izq<der){qs(lista,limite_izq,der);}
    if(limite_der>izq){qs(lista,izq,limite_der);}
}
void quicksort(int lista[],int n)
{
    qs(lista,0,n-1);
}
int main(int argc, const char * argv[])
{
    int b,n,it;
    b=I(n);
    int size = sizeof(n)/sizeof(int);
    printf("Lista Desordenada \n");
    for (int it=0; it<size; it++) {
        cout<<" "<<n [it];
        if(it<size-1)
            printf(",");
    }
    printf("\n");
    quicksort(n,size);
    printf("Lista Ordenada \n");
    for (int it=0; it<size; it++) {
        printf("%d",n[it]);
        if(it<size-1){
            printf(",");
    }
    }
    return 0;
}
