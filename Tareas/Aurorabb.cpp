#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
using namespace std;
void I (int x);
void II (int x);
void III (void);
int main (int x)
{
    char r;
    r='s';
    while (r=='s'||r=='S')
    {
        system("cls");
        I(x);
        cin>>x;
        II(x);
        cout<<endl<<"Desea repetir el programa? S/N   ";
        cin>>r;
    }
}
void I (int x)
{
    cout<<endl<<"De cuanto quiere su arreglo?   ";
}
void II(int x)
{
    int i,b,c=0,d,e[x+1]{0},y[x];
    float a;
    for (i=0;i<x;i++)
    {
        cout<<endl<<"Introduzca el numero"<<i+1<<":  ";
        cin>>y[i];
    }
    for (i=0;i<x;i++)
    {
        e[y[i]]++;
    }
    for (b=1;b<=x;b++)
    {
        if (e[b]>c)
        {
            c=e[b];
            d=b;
        }

    }
    cout<<"El valor moda es:   "<<d<<endl;
    getch();
    if (x%2==0)
    {
        a=((y[x/2]+y[x/2+1])/2);
        cout<<"La media es:   "<<a;
    }
    else
    {
        cout<<"La media es:   "<<y[x/2];
    }
}
