#include <iostream>
using namespace std;

class Persona
{
private:
    string nombre;
    int edad;
    float estatura;
public:
    Persona(string,int,float);
    ~Persona();
    void mostrarPersona();
};

class Empleado:public Persona
{
private:
    string numEmpleado,area;
public:
    Empleado(string,int,float,string,string);
    void mostrarEmpleado();
};

class Estudiante:public Persona
{
private:
    string numFolio;
public:
    Estudiante(string,int,float,string);
    void mostrarEstudiante();
};

class Universitario:public Estudiante
{
private:
    string plantel;
public:
    Universitario(string,int,float,string,string);
    void mostrarUniversitario();
};

Universitario::Universitario(string _nombre,int _edad,float _estatura,string _numFolio, string _plantel):Estudiante(_nombre,_edad,_estatura,_numFolio)
{
    plantel=_plantel;
}

void Universitario::mostrarUniversitario()
{
    mostrarEstudiante();
    cout<<"Plantel: "<<plantel<<endl;
}

Estudiante::Estudiante(string _nombre,int _edad,float _estatura,string _numFolio):Persona(_nombre,_edad,_estatura)
{
    numFolio=_numFolio;
}

void Estudiante::mostrarEstudiante()
{
    mostrarPersona();
    cout<<"Numero de folio: "<<numFolio<<endl;
}

Empleado::Empleado (string _nombre,int _edad,float _estatura,string _numEmpleado,string _area):Persona(_nombre,_edad,_estatura)
{
    numEmpleado=_numEmpleado;
    area=_area;
}

void Empleado::mostrarEmpleado()
{
    mostrarPersona();
    cout<<"Numero de empleado: "<<numEmpleado<<endl;
    cout<<"Area de trabajo: "<<area<<endl;
}

Persona::Persona(string _nombre,int _edad,float _estatura)
{
    nombre=_nombre;
    edad=_edad;
    estatura=_estatura;
}

Persona::~Persona(){}

void Persona::mostrarPersona()
{
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
    cout<<"Estatura: "<<estatura<<endl;
}

int main()
{
    cout<<"***PERSONA:***"<<endl;
    Persona persona1("Jafet",20,1.77);
    persona1.mostrarPersona();
    persona1.~Persona();
    cout<<endl<<"***EMPLEADO***"<<endl;
    Empleado empleado1("Axel",23,1.69,"12345","Mercadotecnia");
    empleado1.mostrarEmpleado();
    empleado1.~Persona();
    cout<<endl<<"***Estudiante***"<<endl;
    Estudiante estudiante1("Reyes",19,1.60,"798465");
    estudiante1.mostrarEstudiante();
    estudiante1.~Persona();
    cout<<endl<<"***Universitario***"<<endl;
    Universitario universitario1("Barbara",20,1.56,"9990","ESFM");
    universitario1.mostrarUniversitario();
    universitario1.~Persona();
    cout<<endl<<endl;
    system("pause");
}
