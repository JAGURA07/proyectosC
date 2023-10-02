#include<iostream>
#include<string.h>
#include<stdio.h>
#include <windows.h>
using namespace std;
struct dato {
    int a;
    int y;
    float b;
    string z;
    string x;
}alumno;
void I (dato alumno1);
void II (dato alumno1);
int y1[10], a1[10], co=0;
float b1[10];
string x1[10], z1[10];
int main (){
    I (alumno);
    II(alumno);
}
void I (dato alumno1)
{
    char c='s';
    co=0;
    while (c!='*')
    {
        system("cls");
        cout<<"Nombre"<<endl;
        fflush(stdin);
        getline(cin,alumno.x);
        x1[co]=alumno.x;
        cout<<"Numero de empleado "<<endl;
        cin>>alumno.y;
        y1[co]=alumno.y;
        cout<<"Departamento"<<endl;
        fflush(stdin);
        getline(cin,alumno.z);
        z1[co]=alumno.z;
        cout<<"Nivel "<<endl;
        cin>>alumno.a;
        a1[co]=alumno.a;
        cout<<"sueldo "<<endl;
        cin>>alumno.b;
        b1[co]=alumno.b;
        cin>>c;
        co++;
    }
}
void II( dato alumno1)
{
    int i,it;
    for (i=0;i<co;i++)
    {
        cout<<endl<<"Te llamas: "<<x1[i]<<endl;
        cout<<"Su folio es: "<<y1[i]<<endl;
        cout<<"Departamento de: "<<z1[i]<<endl;
        cout<<"Nivel: "<<a1[i]<<endl;
        cout<<"Su sueldo es de: "<<b1[i]<<endl;
        cout<<"-----------------------------------";
    }
    for (it=0;it<co;it++)
    {
        if (b1[it]>10000)
        {
            cout<<endl<<"El docente "<<x1[it]<<" gana mas de 10,000"<<endl;
        }
    }
}
