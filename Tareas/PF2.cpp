#include <iostream>
#include <fstream>
#include <windows.h>
#include <stdio.h>
#define piv 25.5
using namespace std;
fstream negativo("negativo.txt");
fstream mn255("mn255.txt");
fstream my255("my255.txt");
void I (void);
void II (void);
void III (void);
void IV (void);
char r;
float x[20],y[20],z[20],a[20];
int i,it,ite,iter,itera,iterad,iterado,iterado1,c=0,c1=0,c2=0;
int main (int x)
{
    char r;
    r='s';
    while (r=='s'||r=='S')
    {
        I();
        II();
    }
}
void I (void)
{
    int aux,aux1,aux2;
    system("cls");
    for(i=0;i<20;i++)
    {
        cout<<endl<<"Ingrese el numero "<<i+1<<": ";
        cin>>x[i];
    }
    for (ite=0;ite<20;ite++)
    {
        if(x[ite]<0)
        {
            aux=x[ite];
            y[ite]=aux;
            c++;
        }
        if(x[ite]>piv)
        {
            aux1=x[ite];
            z[ite]=aux1;
            c1++;
        }
         if(x[ite]>piv)
        {
            aux2=x[ite];
            a[ite]=aux2;
            c2++;
        }
    }
    cout<<endl<<"Elementos del arreglo: ";
    for(it=0;it<20;it++)
    {
        cout<<" "<<x[it];
    }
    cout<<endl<<"Elementos del arreglo menores a 0: ";
    for(iterad=0;iterad<c;iterad++)
    {
        cout<<" "<<y[iterad];
    }
    cout<<endl<<"Elementos del arreglo menores a 25.5: ";
    for(iterado=0;iterado<c1;iterado++)
    {
        cout<<" "<<z[iterado];
    }
    cout<<endl<<"Elementos del arreglo mayores a 25.5: ";
    for(iterado1=0;iterado1<c2;iterado1++)
    {
        cout<<" "<<a[iterado1];
    }
    cout<<endl;
    system("pause");
}
void II (void)
{
    char re;
    system("cls");
    cout<<endl<<"a.- Nuevo registro";
    cout<<endl<<"b.- Guardar datos";
    cout<<endl<<"c.- Abrir archivos";
    cout<<endl<<"d.- Modificar datos";
    cout<<endl<<"e.- Salir"<<endl;
    cin>>re;
    switch (re)
    {
    case 'a':
        system("cls");
        r='s';
        break;
    case 'b':
        III();
        cout<<endl<<"Desea repetir? S/N"<<endl;
        cin>>r;
        break;
    case 'c':
        IV();
        cout<<endl<<"Desea repetir? S/N"<<endl;
        cin>>r;
        break;
    case 'd':
        system("cls");
        cout<<endl<<"Este si se la debo :u";
        cout<<endl<<"Desea repetir? S/N"<<endl;
        cin>>r;
        break;
    case 'e':
        system("cls");
        cout<<endl<<"Desea repetir? S/N"<<endl;
        cin>>r;
    default:
        system("cls");
        r='s';
        break;
    }
}
void III (void)
{
    system("cls");
    ofstream negativo,mn255,my255;
    if(!negativo.is_open())
    {
        negativo.seekp(0,ios::end);
        negativo.open("negativo.txt", ios::app);
    }
    if(!mn255.is_open())
    {
        mn255.seekp(0,ios::end);
        mn255.open("mn255.txt", ios::app);
    }
    if(!my255.is_open())
    {
        my255.seekp(0,ios::end);
        my255.open("my255.txt", ios::app);
    }
    negativo<<endl<<"Elementos del arreglo menores a 0: ";
    for(iterad=0;iterad<c;iterad++)
    {
        negativo<<" ,"<<y[iterad];
    }
    mn255<<endl<<"Elementos del arreglo menores a 25.5: ";
    for(iterado=0;iterado<c1;iterado++)
    {
        mn255<<" "<<z[iterado];
    }
    my255<<endl<<"Elementos del arreglo mayores a 25.5: ";
    for(iterado1=0;iterado1<c2;iterado1++)
    {
        my255<<" "<<a[iterado1];
    }
    negativo<<endl<<"-------------------------------------";
    mn255<<endl<<"-------------------------------------";
    my255<<endl<<"-------------------------------------";
    cout<<endl<<"Registros guardados con exito!";
    system("pause");
}
void IV (void)
{
    system("cls");
    int c,d,e;
    cout<<endl<<"Numeros negativos!"<<endl;
    FILE *negativo= fopen("negativo.txt","r");
    while ((c=fgetc(negativo))!= EOF)
    {
        putchar(c);
    }
    cout<<endl;
    cout<<endl<<"Mayores a 25.5!"<<endl;
    FILE *my255= fopen("my255.txt","r");
    while ((e=fgetc(my255))!= EOF)
    {
        putchar(e);
    }
    cout<<endl;
    cout<<endl<<"Menores a 25.5!"<<endl;
    FILE *mn255= fopen("mn255.txt","r");
    while ((d=fgetc(mn255))!= EOF)
    {
        putchar(d);
    }
    cout<<endl;
    system("pause");
}
