using namespace std;
#include<iostream>
#include<fstream>
#include<stdlib.h>
struct persona{
    char nombre[15],modelo[15],marca[15];
    int ano;
    float horae,horas;
    };
void captura (void);
void salida(void);
void despliega (void);
void calcula (void);
void menu(void);
persona p;
float c1,c2,c3,c4,c5;
char o='s';
int main()
{
    menu();
}
void menu (void)
{
    int op;
    cout<<"Menu. \n 1.Captura \n 2.Mostrar datos \n 3.Buscar"<<endl;
    cin>>op;
    switch(op)
    {
    case 1: captura();
    case 2: salida();
    case 3: despliega();
    }
}

void captuira (void)
{
    ofstream salida;
    ifstream entrada;

    char resp='s';
    int i=0;
    salida.seekp(0,ios::end);
    salida.open("C:/Users/Jafet Gutierrez/Downloads/agenda.dat", ios::app | ios::binary);
    if(resp='s')
    {
        cout<<"Desea dar de alta nuevos registros? (S/N)"<<endl;
        cin>>resp;
    while(resp!='*')
    {
        system("cls");
        cout<<"Numero de placa: ";
        cin>>p.nombre;
        cout<<endl<<"Marca de auto: ";
        cin>>p.marca;
        cout<<endl<<"Modelo del auto: ";
        cin>>p.modelo;
        cout<<endl<<"Año: ";
        cin>>p.ano;
        cout<<endl<<"Hora de entrada: ";
        cin>>p.horae;
        c4=p.horae;
        cout<<endl<<"Hora de salida: ";
        cin>>p.horas;
        c5=p.horas;
        calcula();
        cout<<endl<<"Inserta * para terminar el registro o escribe 'c' para continuar."<<endl;
        cin>>resp;
        i++;
        salida.write((char*)&p,sizeof(persona));
    }
    }
    while(o=='s')
    {
    cout<<"Regresar al menu? (S/N)";
    cin>>o;
    system("cls");
    menu();
    }
    salida.close();
}
void salida(void)
{
    ofstream salida;
    ifstream entrada;

    entrada.open("C:/Users/Jafet Gutierrez/Downloads/agenda.dat",ios::binary);
    while(entrada.read((char*)&p,sizeof(persona)))
    {
        cout<<p.nombre<<endl;
        cout<<p.ano<<endl;
        cout<<p.marca<<endl;
        cout<<p.modelo<<endl;
        cout<<p.horae<<endl;
        cout<<p.horas<<endl;
    }
     while(o=='s')
    {
    cout<<"Regresar al menu? (S/N)";
    cin>>o;
    system("cls");
    menu();
    }
    entrada.close();
}

void busca (void)
{
    fstream entradaSalida;

    entradaSalida.open("C:/Users/Jafet Gutierrez/Downloads/agenda.dat",ios::in | ios::binary);
    int noRegistro=0;
    cout<<"Ingrese el numero de registro que desea seleccionar: "<<endl;
    cin>>noRegistro;
    cin.ignore(256,'\n');
    entradaSalida.seekg((noRegistro-1)*sizeof(persona),ios::beg);
    entradaSalida.read((char*)&p,sizeof(persona));
    cout<<p.nombre<<endl;
    cout<<p.ano<<endl;
    cout<<p.marca<<endl;
    cout<<p.modelo<<endl;
    cout<<p.horae<<endl;
    cout<<p.horas<<endl;
     while(o=='s')
    {
    cout<<"Regresar al menu? (S/N)";
    cin>>o;
    system("cls");
    menu();
    }
    entradaSalida.close();
}
void calcula (void)
{
    c5-c4=c1;
    if(c1>=6&&c1<12)
    {
        c2=(c1*16)*.85;
    }
    if(c1>=13)
    {
        c1=(c1*16)*15;
    }
    c2=c1*16;
    cout<<endl<<"Con cuanto va a pagar: ";
    cin>>c3;
    cout<<"cambio: "<<c3-c2;
}
