#include <iostream>
using namespace std;

class Persona
{
private:
    string nombre;
    int edad;
public:
    Persona(string,int);
    void mostrarPersona();
};

class Alumno: public Persona
{
private:
    string numRegistro;
    float notaFinal;
public:
    Alumno(string,int,string,float);
    void mostrarAlumno();
};

Alumno::Alumno(string _nombre,int _edad,string _numRegistro,float _notaFinal):Persona(_nombre,_edad)
{
    numRegistro=_numRegistro;
    notaFinal=_notaFinal;
}

void Alumno::mostrarAlumno()
{
    mostrarPersona();
    cout<<"Numero de registro: "<<numRegistro<<endl;
    cout<<"Nota final: "<<notaFinal<<endl;
}

Persona::Persona(string _nombre, int _edad)
{
    nombre=_nombre;
    edad=_edad;
}

void Persona::mostrarPersona()
{
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
}

int main()
{
    Persona persona1("Jafet",20);
    persona1.mostrarPersona();
    Alumno alumno1("Reyes",19,"12345",6.7);
    alumno1.mostrarAlumno();
    system("pause");
}
