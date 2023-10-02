using namespace std;

#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<stdio.h>
#include<vector>

struct info{
    int clave;
    int edad;
    char sexo;
    int sueldo;
    };

void captura(void);
vector<info>almacena (void);
void hombres(vector<info>&inf);
void mujeres(vector<info>&inf);
void m(vector<info>&inf);
void h(vector<info>&inf);
void mayores(vector<info>&inf);

void captura (void)
{
    ofstream salida;
    ifstream entrada;
    info l;
    char resp='s';
    int i=0;
    salida.seekp(0,ios::end);
    salida.open("e:/info.dat", ios::app | ios::binary);
    while(resp!='*')
    {
        system("cls");
        cout<<"Clave: ";
        cin>>l.clave;
        cout<<endl<<"Edad: ";
        cin>>l.edad;
         cout<<endl<<"Sexo (H=Hombre, M=Mujer): ";
        cin>>l.sexo;
         cout<<endl<<"Sueldo: ";
        cin>>l.sueldo;

        cout<<endl<<"Inserta * para terminar el registro o escribe 'c' para continuar."<<endl;
        cin>>resp;
        i++;
        salida.write((char*)&l,sizeof(info));
    }

    salida.close();
}

vector<info>almacena (void)
{
    ifstream entrada;
    info e;
    int i;
    vector<info>inf(1);
    entrada.seekg(0,ios::beg);
    entrada.open("e:/info.dat", ios::binary | ios::out);
    for( i=0; entrada.read((char*)&e,sizeof(info));i++)
    {
        inf.resize(i+1);
        inf[i]=e;
    }
    entrada.close();
    return inf;
}

void hombres(vector<info>&inf)
{
    info l;
    int i, th=0;
    for(i=0;i<inf.size();i++)
    {
        if(inf[i].sexo=='H')
        {
            th++;
        }
    }
    cout<<"Total de hombres: "<<th<<endl;
}

void mujeres (vector<info>&inf)
{
    info l;
    int i, tm=0;
    for(i=0;i<inf.size();i++)
    {
        if(inf[i].sexo=='M')
        {
            tm++;
        }
    }
    cout<<"Total de mujeres: "<<tm<<endl;
}

void m (vector<info>&inf)
{
    info l;
    int i, mm=0;
    for(i=0;i<inf.size();i++)
    {
        if(inf[i].sexo=='M')
        {
        if(inf[i].sueldo>20000)
        {
            mm++;
        }
        }
    }
    cout<<"Total de mujeres que ganan mas de 20000: "<<mm<<endl;
}
void h (vector<info>&inf)
{
    int i, hm=0;
    for(i=0;i<inf.size();i++)
    {
        if(inf[i].sexo=='H')
        {
        if(inf[i].sueldo<40000)
        {
           hm++;
        }
        }
    }
    cout<<"Total de hombres que ganan menos de 40000: "<<hm<<endl;
}

void mayores (vector<info>&inf)
{
    info l;
    int i, m=0;
    for(i=0;i<inf.size();i++)
    {
        if(inf[i].edad>50)
        {
           m++;
        }
    }
    cout<<"Total de empleados mayores de 50 años: "<<m<<endl;
}
int main ()
{
    int a;
    info l;
    ifstream entrada;
    char resp='s';
    while(resp=='s' || resp=='S')
    {
         entrada.open("e:/info.dat", ios::binary | ios::out);
        while(entrada.read((char*)&l,sizeof(info)))
    {
        cout<<"Clave: "<<l.clave<<endl;
        cout<<"Edad: "<<l.edad<<endl;
        cout<<"Sexo: "<<l.sexo<<endl;
        cout<<"Sueldo: "<<l.sueldo<<endl;
    }
    system("pause");
        system("cls");
        cout<<"Agregar mas registros? (teclee 1, sino teclee 0)"<<endl;
        cin>>a;
        system("cls");
        if(a==1)
        {
            captura();
        }
        else
        {
            vector<info>x;
             x=almacena();
             hombres(x);
             mujeres(x);
             m(x);
             h(x);
             mayores(x);

        }
        cout<<endl<<endl<<"Desea repetir el proceso?"<<endl;
        cin>>resp;
    }
}
