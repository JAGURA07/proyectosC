using namespace std;

#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<stdio.h>
#include<vector>

struct plat{
        int clave;
        int pu;
        };

vector<plat>platillos (void);
void factura (vector<plat>&d);

int main()
{
     int a;
    plat p;
    ifstream entrada;
    char resp='s';
    while(resp=='s' || resp=='S')
    {
         entrada.open("e:/platillos.dat", ios::binary | ios::out);
        while(entrada.read((char*)&p,sizeof(plat)))
    {
        cout<<"Clave: "<<p.clave<<endl;
        cout<<"Precio Unitario: "<<p.pu<<endl;
    }
        system("pause");
        system("cls");
        int op;
    cout<<"\t\tMenu"<<endl;
    cout<<"1. Registrar platillos\n2. Generar factura\n3. Salir"<<endl;
    cout<<"Selecciona una opción:"<<endl;
    cin>>op;
    system("cls");
    vector<plat>x;
    if (op==1)
    {
        x=platillos();
    }
    if (op==2)
    {
    }
    if (op==3)
    {

    }
        cout<<endl<<endl<<"Desea repetir el proceso?"<<endl;
        cin>>resp;
    }

}

vector<plat> platillos(void)
{
    ofstream salida;
    plat p;
    char resp='s';
    int i=0;
    salida.seekp(0,ios::end);
    salida.open("e:/platillos.dat", ios::app | ios::binary);
    while(resp!='*')
    {
        system("cls");
        cout<<"Clave: ";
        cin>>p.clave;
        cout<<endl<<"Precio unitario: ";
        cin>>p.pu;

        cout<<endl<<"Inserta * para terminar el registro o escribe 'c' para continuar."<<endl;
        cin>>resp;
        i++;
        salida.write((char*)&p,sizeof(plat));
    }

    salida.close();
    ifstream entrada;
    plat e;
    vector<plat>d(1);
    entrada.seekg(0,ios::beg);
    entrada.open("e:/platillos.dat", ios::binary | ios::out);
    for( i=0; entrada.read((char*)&p,sizeof(plat));i++)
    {
        d.resize(i+1);
        d[i]=e;
    }
    entrada.close();
    return d;
}
void factura (vector<plat>&d)
{

}
