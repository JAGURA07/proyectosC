
using namespace std;
#include<iostream>
#include<fstream>
#include<stdlib.h>

struct Persona
{
    char nombre[8];
    int edad;
};

void salida (void);
void entrada (void);
void buscar (void);
int main(void);

void salida (void)
{
    ofstream salida;
    Persona p;
    char resp;

    resp='s';
    salida.seekp(0,ios::end);
    salida.open("agenda.txt",ios::app | ios::binary);

    cout<<"Introduce los datos"<<endl;
    while(resp!='*')
    {
        cout<<endl<<"Nombre:"<<endl;
        cin>>p.nombre;

        cout<<endl<<"Edad:"<<endl;
        cin>>p.edad;

        cout<<endl<<"Presiona * para terminar o cualquier otra letra para continuar"<<endl;
        cin>>resp;

        salida.write((char*)&p,sizeof(Persona));
    }

    system("cls");
    salida.close();
    main();
}

void entrada (void)
{
    Persona p;
    ifstream entrada;
    entrada.open("agenda.txt",ios::binary);

    while (entrada.read((char*)&p,sizeof(Persona)))
    {
            cout<<p.nombre<<endl;
            cout<<p.edad<<endl;
    }
    system("pause");
    system("cls");
    entrada.close();
    main();
}

void buscar(void)
{
    fstream ensa;
    Persona p;
    ensa.open("agenda.txt", ios::in | ios::binary);
    int noRegistro;
    cout<<"ingrese el numero de registro que desea buscar:"<<endl;
    cin>>noRegistro;
    cin.ignore(256,'\n');

    ensa.seekg((noRegistro-1)*sizeof(Persona),ios::beg);
    ensa.read((char*)&p,sizeof(Persona));

    cout<<endl;
    cout<<p.nombre<<endl;
    cout<<p.edad<<endl;

    ensa.close();
    system("pause");
    main();
}

int main(void)
{
    system("cls");
    int x;

    cout<<"¿Que quieres hacer?"<<endl<<endl;
    cout<<"1. Introducir nuevos datos"<<endl;
    cout<<"2. Mostrar datos"<<endl;
    cout<<"3. Buscar un dato"<<endl;
    cout<<"4. Salir"<<endl;
    cin>>x;
    cout<<endl;

    if(x==1)
    {
        system("cls");
        salida();
    }
    if(x==2)
    {
        system("cls");
        entrada();
    }
    if(x==3)
    {
        system("cls");
        buscar();
    }
    if(x==4)
    {
        system("cls");
        cout<<"Adios!"<<endl;
    }
}
