//Polimorfismo
#include <iostream>
using namespace std;

class Persona
{
private:
    string nombre,raza;
public:
    Persona(string,string);
    virtual void mostrar();
};

class Humano:public Persona
{
private:
    string sexo;
public:
    Humano(string,string,string);
    void mostrar();
};

class Profesionista:public Humano
{
private:
    string profesion;
public:
    Profesionista(string,string,string,string);
    void mostrar();
};

Profesionista::Profesionista(string _nombre,string _raza,string _sexo,string _profesion):Humano(_nombre,_raza,_sexo)
{
    profesion=_profesion;
}

void Profesionista::mostrar()
{
    Persona::mostrar();
    cout<<"Profesion: "<<profesion<<endl;
}

Humano::Humano(string _nombre,string _raza,string _sexo):Persona(_nombre,_raza)
{
    sexo=_sexo;
}

void Humano::mostrar()
{
    Persona::mostrar();
    cout<<"Sexo: "<<sexo<<endl;
}

Persona::Persona(string _nombre,string _raza)
{
    nombre=_nombre;
    raza=_raza;
}

void Persona::mostrar()
{
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Raza: "<<raza<<endl;
}

int main()
{
    Humano humano1("Jafet","Negra","Hombre");
    humano1.mostrar();
    cout<<endl<<endl;
    Profesionista profesional("Zenif","Aria","Hombre","Profesor");
    profesional.mostrar();
    cout<<endl<<endl;
    Persona persona1("Profe","Aria");
    persona1.mostrar();
    system("pause");
}
