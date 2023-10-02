#include <iostream>
#include <vector>
#include <stdlib.h>
#include <conio.h>
using namespace std;
vector <int> A(5,0);
void I (void);
void II (void);
void III (void);
void IV (void);
int main ()
{
    int x;
    IV();
    cout<<endl<<"Elija una opcion:"<<endl<<endl;
    cout<<"1. borrar un valor del vector"<<endl;
    cout<<"2. Insertar un valor nuevo al vector"<<endl;
    cout<<"3. Salir de aqui"<<endl;
    cin>>x;
    if (x==1)
    {
        I();
    }
    if (x==2)
    {
        II();
    }
    if(x==3)
    {
        return 0;
    }
}
void IV (void)
{
    int i,it;
    for (i=0;i<5;i++)
    {
       cout<<"Por favor, introduzca el valor "<<i;
       cout<<" del vector"<<endl;
        cin>>A[i];
    }
    cout<<"Valores del vector: ";
    for (it=0;it<5;it++)
    {
        cout<<" "<<A[it];
    }
}
void I ()
{
    int x,b,a,it;
    system ("cls");
    cout<<"Seleccione un espacio para borrar el valor (0-4)"<<endl;
    cin>>x;
    A[x]=0;
    cout<<"Nuevos valores del vector";
    for (it=0;it<5;it++)
    {
        cout<<" "<<A[it];
    }
}
void II()
{
    int x,b,a,it;
    system ("cls");
    cout<<"Seleccione un espacio para cambiar el valor (0-4)"<<endl;
    cin>>x;
    cout<<"Seleccione un nuevo valor para ese espacio"<<endl;
    cin>>b;
    A[x]=b;
    cout<<"Nuevos valores del vector";
    for (it=0;it<4;it++)
    {
        cout<<" "<<A[it];
    }
}
