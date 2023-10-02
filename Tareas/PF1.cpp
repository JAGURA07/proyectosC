#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    int MAX;
    cout<<"Cuantos numeros quiere? ";
    cin>>MAX;

    int numeros[MAX],contador=0,auxiliar[MAX],posicion=0,numero=0,contador2=0,mayor=0,posicionmayor=0,bandera=0,y=0;
    float suma=0;
    if(MAX%2==0)
    {
        y=MAX/2;
    }
    else
    {
        y=MAX/2;
    }
    for(contador=0;contador<MAX;contador++) {
        cout<<endl<<"No. "<<contador+1<<": ";
        cin>>numeros[contador];
    }
    cout<<endl<<"Elementos del vector : ";
    for(contador=0;contador<MAX;contador++) {
        cout<<" "<<numeros[contador];
    }
    for(contador=0;contador<MAX;contador++) {
        auxiliar[contador]=0;
    }
    for(contador=0;contador<MAX;contador++) {
        numero = numeros[contador];
        posicion = contador;
        for(contador2=contador;contador2<MAX;contador2++) {
            if(numeros[contador2]==numero) auxiliar[posicion]++;
        }
    }
    mayor=auxiliar[0];
    posicionmayor = 0;
    for(contador=0;contador<MAX;contador++) {
        if(auxiliar[contador]>mayor) {
            posicionmayor=contador;
            mayor=auxiliar[contador];
        }
    }
    cout<<endl<<"MODA : "<<numeros[posicionmayor];
    bandera=0;
    for(contador=MAX;contador>0 && bandera==0;contador--) {
        bandera=1;
        for(contador2=0;contador2<contador;contador2++) {
            if(numeros[contador2]>numeros[contador2+1]) {
                numero = numeros[contador2];
                numeros[contador2] = numeros[contador2+1];
                numeros[contador2+1]=numero;
                bandera=0;
            }
        }
    }
    if(MAX%2!=0)
    {
        cout<<endl<<"EL valor de la mediana es : "<<numeros[y];
    }
    else
        {
        cout<<endl<<"EL valor 1 de la mediana es : "<<numeros[y];
        cout<<endl<<"EL valor 2 de la mediana es : "<<numeros[y+1];
    }
    suma = 0;
    for(contador=0;contador<MAX;contador++) {
        suma+=numeros[contador];
    }
}
