#include<iostream>
using namespace std;

class Animal
{
private:
    string raza;
    int edad;
public:
    Animal(string,int);
    void mostrarAnimal();
    virtual void comer();
};

class Humano:public Animal
{
private:
    string alimentacion;
public:
    Humano(string,int,string);
    void mostrarHumano();
    void comer();
};

class Perro:public Animal
{
private:
    string alimentacion;
public:
    Perro(string,int,string);
    void mostrarPerro();
    void comer();
};

Perro::Perro(string _raza,int _edad,string _alimentacion):Animal(_raza,_edad)
{
    alimentacion=_alimentacion;
}

void Perro::mostrarPerro()
{
    mostrarAnimal();
}

void Perro::comer()
{
    cout<<"El perro es "<<alimentacion<<endl;
}

Humano::Humano(string _raza,int _edad,string _alimentacion):Animal(_raza,_edad)
{
    alimentacion=_alimentacion;
}

void Humano::mostrarHumano()
{
    mostrarAnimal();
}

void Humano::comer()
{
    cout<<"El humano es "<<alimentacion<<endl;
}

Animal::Animal(string _raza,int _edad)
{
    raza=_raza;
    edad=_edad;
}

void Animal::mostrarAnimal()
{
    cout<<"Raza: "<<raza<<endl;
    cout<<"Edad: "<<edad<<endl;
}

void Animal::comer()
{
}

int main()
{
    Humano humano1("Jafet",20,"omnivoro");
    humano1.mostrarHumano();
    humano1.comer();
    cout<<endl<<endl;
    Perro atenea("Atenea",2,"carnivoro");
    atenea.mostrarPerro();
    atenea.comer();
    cout<<endl<<endl;
    system("pause");
}
