using namespace std;
#include <fstream>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string>
#include<vector>

struct profes
{
    int numero;
    char nombre[10];//cadena de caracteres
    char dep[10];
    int grado;
    char nac[20];
    int sueldo;
};
profes e;
int i;

void captura(void);
vector<profes>almacena(void);
void f1 (vector<profes>&d);
void f2 (vector<profes>&d);
void f3 (vector<profes>&d);
void f4 (vector<profes>&d);


main (void)
{
    ifstream entrada;
    int a;
    char resp='s';
    while(resp=='s' || resp=='S')
    {
        entrada.open("e:/profesores.txt", ios::binary | ios::out);
        while(entrada.read((char*)&e,sizeof(profes)))
    {
        cout<<"Numero de empleado: "<<e.numero<<endl;
        cout<<"Nombre: "<<e.nombre<<endl;
        cout<<"Departamento: "<<e.dep<<endl;
        cout<<"Grado academico: "<<e.grado<<endl;
        cout<<"Nacionalidad: "<<e.nac<<endl;
        cout<<"Sueldo: "<<e.sueldo<<endl<<endl;
    }
        cout<<"Agregar mas registros? (teclee 1, sino teclee 0)"<<endl;
        cin>>a;
        system("cls");
        if(a==1)
        {
            captura();
        }
        else
        {
            vector<profes>x;
            vector<profes>s;
             x=almacena();
             f1(x);
             f2(x);
             f3(x);
             f4(x);
        }
        cout<<endl<<endl<<"Desea repetir el proceso?"<<endl;
        cin>>resp;

    }
}
void captura (void)
{
    ofstream salida;
    profes e;
    char resp='s';
    int i=0;
    salida.open("e:/profesores.txt", ios::binary);
    while(resp!='*')
    {
        system("cls");
        cout<<endl<<"Numero de empleado: ";
        cin>>e.numero;
        cout<<endl<<"Nombre: ";//cin.getline    fflush
        cin.getline(e.nombre,10);
        fflush(stdin);//cadena de caracteres: cin.getline
        cout<<endl<<"(C=computacion, SD=Sistemas Digitales, CE=Control Electrico, MAC=Manufactura Asistida por comp., AT=Automotriz, AR=aereonautica) \n Departamento: ";
        cin>>e.dep;
        cout<<endl<<"Grado academico: ";
        cin>>e.grado;
        cout<<endl<<"Nacionalidad: ";
        cin>>e.nac;
        cout<<endl<<"Salario: ";
        cin>>e.sueldo;
        cout<<endl<<"Inserta * para terminar el registro o escribe 'c' para continuar."<<endl;
        cin>>resp;
        i++;
         salida.write((char*)&e,sizeof(profes));
    }
    salida.close();
}
vector<profes>almacena (void)
{
    ifstream entrada;
    profes e;
    int i;
    vector<profes>d(1);
    entrada.seekg(0,ios::beg);
    entrada.open("e:/profesores.txt", ios::binary | ios::out);
    for( i=0; entrada.read((char*)&e,sizeof(profes));i++)
    {
        d.resize(i+1);
        d[i]=e;
    }
    entrada.close();
    return d;
}
void f1 (vector<profes>&d)
{

    profes e;
    int j, i;

    profes aux;
	for(i=0;i<d.size();i++)
	{
		for(j=0;j<d.size()-1;j++)
		{
			if(d[j].sueldo<d[j+1].sueldo)
			{
				aux=d[j];
				d[j]=d[j+1];
				d[j+1]=aux;
			}
		}
	}
	cout<<"Persona con mayor sueldo:"<<endl;
	cout<<"Num. de empleado: "<<d[0].numero<<endl;
	cout<<"Nombre: "<<d[0].nombre<<endl;
	cout<<"Nacionalidad: "<<d[0].nac<<endl;
	cout<<"Sueldo: "<<d[0].sueldo<<endl;

}

void f2 (vector<profes>&d)
{

    int de;
    profes e;
    cout<<endl<<"Departamento a consultar \n 1.Computacion \n 2.Sistemas Digitales \n 3.Control Electrico \n 4.MAC \n 5.Automotiz \n 6.Aereonautica"<<endl;
    cin>>de;
    switch(de)
    {
    case 1:
        {
            int i,tc;
        for(i=0;i<d.size();i++)
    {
        if (d[i].dep=="C")
        {
            tc=tc+d[i].sueldo;
        }
    }
    cout<<"Total pagado a los profesores de Computacion: "<<tc<<endl;
    break;
        }
    case 2:
        {
            int i,ts;
        for(i=0;i<d.size();i++)
    {
        if (d[i].dep=="SD")
        {
            ts=ts+d[i].sueldo;
        }
    }
    cout<<"Total pagado a los profesores de Sistemas Digitales: "<<ts<<endl;
    break;
        }
    case 3:
        {
            int i,tce;
        for(i=0;i<d.size();i++)
    {
        if (d[i].dep=="CE")
        {
            tce=tce+d[i].sueldo;
        }
    }
    cout<<"Total pagado a los profesores de Control Electrico: "<<tce<<endl;
    break;
        }
    case 4:
        {
            int i,tm;
        for(i=0;i<d.size();i++)
    {
        if (d[i].dep=="MAC")
        {
            tm=tm+d[i].sueldo;
        }
    }
    cout<<"Total pagado a los profesores de MAC: "<<tm<<endl;
    break;
        }
    case 5:
        {
            int i,ta;
        for(i=0;i<d.size();i++)
    {
        if (d[i].dep=="AT")
        {
            ta=ta+d[i].sueldo;
        }
    }
    cout<<"Total pagado a los profesores de Automotriz: "<<ta<<endl;
    break;
        }
    case 6:
        {
            int i,tan;
        for(i=0;i<d.size();i++)
    {
        if (d[i].dep=="AR")
        {
            tan=tan+d[i].sueldo;
        }
    }
    cout<<"Total pagado a los profesores de Aereonautica: "<<tan<<endl;
    break;
        }
    }
}

void f3 (vector<profes>&d)
{
    int i, t;
    for(i=0;i<d.size();i++)
    {
        if(d[i].nac!="mexicano")
        {
            t=t+d[i].sueldo;
        }
    }
    cout<<endl<<"Monto total pagado a profesores extangeros: "<<t<<endl;
}

void f4 (vector<profes>&d)
{
    profes e;
    int j, i;
    profes aux;
	for(i=0;i<d.size();i++)
	{
		for(j=0;j<d.size()-1;j++)
		{
			if(d[j].sueldo>d[j+1].sueldo)
			{
				aux=d[j];
				d[j]=d[j+1];
				d[j+1]=aux;
			}
		}
	}
	cout<<endl<<"Persona con menor sueldo:"<<endl;
	cout<<"Num. de empleado: "<<d[0].numero<<endl;
	cout<<"Nombre: "<<d[0].nombre<<endl;
	cout<<"Nacionalidad: "<<d[0].nac<<endl;
	cout<<"Sueldo: "<<d[0].sueldo<<endl;
}
