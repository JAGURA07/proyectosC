#include <iostream>
using namespace std;

class Perro
{
private:
    string nombre,raza;
public:
    Perro(string,string);
    ~Perro();
    void mostrarDatos();
    void Jugar();
};

Perro::Perro(string _nombre, string _raza)
{
    nombre=_nombre;
    raza=_raza;
}

void Perro::mostrarDatos()
{
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Raza: "<<raza<<endl;
}

void Perro::Jugar()
{
    cout<<nombre<<"esta juegando"<<endl;
}

Perro::~Perro()
{
}

int main()
{
    Perro perro1("Atenea","Hermosa");
    perro1.mostrarDatos();
    perro1.Jugar();
    perro1.~Perro();
    system("pause");
}
