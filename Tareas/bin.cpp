#include <iostream>
#include <windows.h>
#include <vector>
using namespace std;
void I (void);
void II (void);
int x;
int main()
{
    char r;
    r='s';
    while (r=='s'||r=='S')
    {
         I();
        II();
        cout<<"Desea hacerlo de nuevo? s/n"<<endl;
        cin>>r;
    }
}
void I (void)
{
     cout << "Ingrese el numero decimal a convertir a sistema binario" << endl;
 cin >> x;
}
void II (void)
{
     int y, z, a = 2;
 string b = "";
 y = x;
 while(y >= a){ //Mientras el dividendo sea mayor o igual que el divisor, es decir, mayor o igual que 2.
    z = y % 2;
    if(z == 1)
    {
        b = "1" + b; //Si el resto es igual a 1 concatenamos 1 a la variable string llamada binario
    }
    else
    {
        b = "0" + b; // Sino concatemanos 0
  //Es importante este orden de concatenación (primero el bit y luego el valor de la variable) esto para que nuestro número
  //en sistema binario esté ordenado correctamente.
        y = y/a; // Actualizamos el valor del dividendo dividiendolo entre 2.
    }
 }
    if(y == 1)
    {
        b = "1" + b; // Por último sí el valor final del dividendo es 1 concatenamos 1 sino concatenamos 0.

    }
    else
    {
        b = "0" + b;
        cout<<b<< endl;
    }
}

