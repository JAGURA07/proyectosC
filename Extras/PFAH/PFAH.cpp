#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
using namespace std;
void I (void);
void II (int x);
void III (void);
void IV (void);
void V (void);
string p,n[255],n2[255],g;
fstream archivo("registro.txt");
char r;
int a;
int main (int x)
{
    r='s';
    while (r=='s'||r=='S')
    {
        I();
        cin>>x;
        II(x);
    }
}
void I (void)
{
    system("cls");
    cout<<endl<<"--Presiona el numero de la opcion que quieras--";
    cout<<endl<<"----------------------------------";
    cout<<endl<<"|1.- Ingresar datos  (Admin)     |";
    cout<<endl<<"|--------------------------------|";
    cout<<endl<<"|2.- Buscar pelicula             |";
    cout<<endl<<"|--------------------------------|";
    cout<<endl<<"|3.- Mostrar todos los registros |";
    cout<<endl<<"|--------------------------------|";
    cout<<endl<<"|4.- Salir                       |";
    cout<<endl<<"----------------------------------";
    cout<<endl<<endl;
}
void II (int x)
{
    switch (x)
    {
    case 1:
        system("cls");
        III();
        cin>>r;
        break;
    case 2:
        system("cls");
        IV();
        break;
    case 3:
        system("cls");
        V();
        cin>>r;
        break;
    case 4:
        system("cls");
        cout<<endl<<endl<<"Gracias, bai."<<endl<<endl;
        r='x';
    }
}
void III (void)
{
    ofstream archivo;
    string nombre;
    int c,c2,i=0;
    char aux,re,respue,frase[20];
    cout<<endl<<"Nombre del usuario: ";
    fflush(stdin);
    getline (cin,nombre);
    cout<<endl<<"Ingrese password: ";
    cout.flush();
    do
    {
        frase[i] = (unsigned char)getch();
        if(frase[i]!=8)
        {
            cout << '*';
            i++;
        }
        else if(i>0)
        {
            cout << (char)8 << (char)32 << (char)8;
            i--;
        }
        cout.flush();
    }
    while(frase[i-1]!=13);
    frase[i-1] = NULL;
    if(frase[0]=='a'&&frase[1]=='r'&&frase[2]=='m'&&frase[3]=='a'&&frase[4]=='n'&&frase[5]=='d'&&frase[6]=='o')
    {
        respue='s';
        while (respue=='s'||respue=='S')
        {
            system("cls");
            if(!archivo.is_open())
            {
                archivo.seekp(0,ios::end);
                archivo.open("registro.txt", ios::app);
            }
            cout<<endl<<"Nombre de la pelicula: ";
            fflush(stdin);
            getline(cin,p);
            aux='s';
            while (aux=='s')
            {
                cout<<endl<<"Numero de actores principales: ";
                cin>>c;
                if (c<=0)
                {
                    cout<<endl<<"Numero invalido";
                    aux='s';
                }
                else
                {
                    aux='n';
                }
            }
            for(i=0;i<c;i++)
            {
                cout<<endl<<"Nombre de actor "<<i+1<<": ";
                fflush(stdin);
                getline(cin,n[i]);
            }
            aux='s';
            while (aux=='s')
            {
                cout<<endl<<"Numero de actores secundarios: ";
                cin>>c2;
                if (c2<=0)
                {
                    cout<<endl<<"Numero invalido";
                    aux='s';
                }
                else
                {
                    aux='n';
                }
            }
            for(i=0;i<c2;i++)
            {
                cout<<endl<<"Nombre de actor "<<i+1<<": ";
                fflush(stdin);
                getline(cin,n2[i]);
            }
            cout<<endl<<"Genero: ";
            fflush(stdin);
            getline(cin,g);
            cout<<endl<<"Año de estreno: ";
            cin>>a;
            cout<<endl<<"Guardar registro? S/N"<<endl;
            cin>>re;
            if (re=='s'||re=='S')
            {
                archivo<<endl<<"Nombre de la pelicula: "<<p<<" vs "<<g;
                archivo<<endl<<"Reparto:";
                for (i=0;i<c;i++)
                {
                    archivo<<endl<<"    Nombre del actor principal "<<i+1<<": "<<n[i];
                }
                for (i=0;i<c2;i++)
                {
                    archivo<<endl<<"    Nombre del actor secundario "<<i+1<<": "<<n2[i];
                }
                archivo<<endl<<"Genero: "<<g;
                archivo<<endl<<"Año de estreno: "<<a;
                archivo<<endl<<"Registrada por: "<<nombre;
                archivo<<endl<<"-----------------------------------------------";
                system("cls");
                cout<<endl<<endl<<"Registro guardado con exito...";
            }
            else
            {
                cout<<endl<<"Otro registro? S/N"<<endl;
                cin>>respue;
            }
            cout<<endl<<"Otro registro? S/N"<<endl;
            cin>>respue;
        }
        system("cls");
        cout<<endl<<"Regresar a menu? S/N"<<endl;
    }
    else
    {
        system("cls");
        cout<<endl<<"Contraseña incorrecta!"<<endl;
        cout<<endl<<"Regresar a menu? S/N"<<endl;
    }
}
void IV (void)
{
    fstream archivo;
    char b,respu;
    string na,l1,l2,l3,l4,l5,l6,l7,l8,l9,l10;
    int pr,res=0;
    system ("cls");
    cout<<endl<<"Nombre de la pelicula: ";
    fflush(stdin);
    getline(cin,na);
    if (!archivo.is_open())
    {
        archivo.open("registro.txt", ios::in);
    }
    while (getline(archivo, l1))
    {
        if(l1.find(na) != string::npos)
            {
                cout<<endl<<l1<<endl;
                getline(archivo, l2);
                cout<<endl<<l2;
                getline(archivo, l3);
                cout<<endl<<l3;
                getline(archivo, l4);
                cout<<endl<<l4;
                getline(archivo, l5);
                cout<<endl<<l5;
                getline(archivo, l6);
                cout<<endl<<l6;
                getline(archivo, l7);
                cout<<endl<<l7;
                getline(archivo, l8);
                cout<<endl<<l8;
                getline(archivo, l9);
                cout<<endl<<l9;
                getline(archivo, l10);
                cout<<endl<<l10;
                res=1;
                cout<<endl<<endl;
                system ("pause");
                cout<<endl;
                cout<<endl<<"Desea salir al menu? S/N"<<endl;
                cin>>r;
            }
        }
    if (res==0)
    {
        cout<<endl<<na<<" no encontrado..."<<endl;
        cout<<endl<<endl<<"Desea buscar en la pagina de IMDB? S/N";
        cin>>respu;
        if (respu=='s')
        {
            system("start https://www.imdb.com");
            r='s';
        }
    }
}
void V (void)
{
    FILE *archivo= fopen("registro.txt","r");
    int c;
    while ((c=fgetc(archivo))!= EOF)
    {
        putchar(c);
    }
    cout<<endl;
    system("pause");
    cout<<endl<<"Desea salir al menu? S/N"<<endl;
}
