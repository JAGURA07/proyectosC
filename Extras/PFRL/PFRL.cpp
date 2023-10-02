#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
using namespace std;
fstream empresa("EMPRESA.txt");
void uno (void);
void dos (int x);
void tres (void);
void cuatro (void);
void cinco (void);
struct empre
{
    string nombre;
    int id,retardo=0;
    float horas,ht,hs,sueldo;
};
int main (int x)
{
    char r;
    r='s';
    while (r=='s'||r=='S')
    {
        system("cls");
        uno();
        cin>>x;
        dos(x);
        system("cls");
        cout<<endl<<"Desea salir a menu? S/N ";
        cin>>r;
    }
}
void uno (void)
{
    cout<<"1.- Checar"<<endl<<"2.- Buscar"<<endl<<"3.- Mostrar todo"<<endl<<"4.- Salir"<<endl;
}
void dos (int x)
{
    char re;
    re='s';
    while (re=='s'||re=='S')
    {
        switch (x)
        {
        case 1:
            tres();
            cout<<endl<<"Repite? S/N"<<endl;
            cin>>re;
            break;
        case 2:
            cuatro();
            cout<<endl<<"Repite? S/N"<<endl;
            cin>>re;
            break;
        case 3:
            cinco();
            cout<<endl<<"Repite? S/N"<<endl;
            cin>>re;
            break;
        case 4:
            system("cls");
            cout<<endl<<"Adios!";
            re='n';
            break;
        }
    }
}
void tres (void)
{
    char resp;
    empre x;
    ofstream empresa;
    if(!empresa.is_open())
    {
        empresa.seekp(0,ios::end);
        empresa.open("EMPRESA.txt",ios::app);
    }
    system("cls");
    cout<<endl<<"Nombre: ";
    fflush(stdin);
    getline(cin,x.nombre);
    cout<<endl<<"ID: ";
    cin>>x.id;
    cout<<endl<<"Hora de entrada: ";
    cin>>x.ht;
    if(x.ht>7)
    {
        cout<<endl<<"RETARDO!";
        x.retardo++;
    }
    cout<<endl<<"Hora de salida: ";
    cin>>x.hs;
    x.horas=x.hs-x.ht;
    cout<<endl<<"Total de horas: "<<x.horas;
    x.sueldo=x.horas*100;
    if(x.retardo==1)
    {
        cout<<endl<<"Con retardo!";
        cout<<endl<<"Menos %3 en sueldo por retardo";
        cout<<endl<<"Sueldo de: "<<x.sueldo-((x.sueldo)*(.03));
    }
    else
    {
        cout<<endl<<"Sueldo quincenal: "<<x.sueldo*15;
    }
    cout<<endl<<"Desea guardar registros? S/N"<<endl;
    cin>>resp;
    if(resp=='s'||resp=='S')
    {
        empresa<<endl<<"Nombre: "<<x.nombre;
        empresa<<endl<<"ID: "<<x.id;
        empresa<<endl<<"Hora de entrada: "<<x.ht;
        empresa<<endl<<"Hora de salida: "<<x.hs;
        if(x.retardo==1)
        {
            empresa<<endl<<"Con retardo!";
            empresa<<endl<<"Menos %3 en sueldo por retardo";
            empresa<<endl<<"Sueldo quincenal de: "<<(x.sueldo-((x.sueldo)*(.03)))*15;
        }
        else
        {
              empresa<<endl<<"Sueldo quincenal de: "<<x.sueldo*15;
        }
        empresa<<endl<<"같같같같같같같같같같같같같같같같같같같같같같같같같같같같같�";
    }
}
void cuatro (void)
{
     fstream empresa;
    char b,respu;
    string na,l1,l2,l3,l4,l5,l6,l7,l8;
    int pr,res=0;
    system ("cls");
    cout<<endl<<"Nombre de empleado: ";
    fflush(stdin);
    getline(cin,na);
    if (!empresa.is_open())
    {
        empresa.open("EMPRESA.txt", ios::in);
    }
    while (getline(empresa, l1))
    {
        if(l1.find(na) != string::npos)
            {
                cout<<endl<<l1<<endl;
                getline(empresa, l2);
                cout<<endl<<l2;
                getline(empresa, l3);
                cout<<endl<<l3;
                getline(empresa, l4);
                cout<<endl<<l4;
                getline(empresa, l5);
                cout<<endl<<l5;
                getline(empresa, l6);
                cout<<endl<<l6;
                getline(empresa, l7);
                cout<<endl<<l7;
                getline(empresa, l8);
                cout<<endl<<l8;
                res=1;
                cout<<endl<<endl;
                system ("pause");
            }
        }
    if (res==0)
    {
        cout<<endl<<na<<" no encontrado..."<<endl;
        system("pause");
    }
}
void cinco (void)
{
    FILE *empresa= fopen("EMPRESA.txt","r");
    int c;
    while ((c=fgetc(empresa))!= EOF)
    {
        putchar(c);
    }
    cout<<endl;
    system("pause");
}
