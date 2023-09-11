#include<iostream>
#include<math.h>
#include<wchar.h>
#include<fstream>

class Figuras
{
private:
    int Lados;
    double Longitud,Area,Perimetro;
public:
    Figuras();
    Figuras(int,double);
    Figuras(int,double,double,double);
    ~Figuras(){};

    virtual void muestraFiguras();
    virtual void guarda();
    virtual void mostrar();
    Figuras Calculadora(int,double);
};

class FigurasI:public Figuras
{
private:
    double Lados,Longitud,Area,Perimetro;
public:
    FigurasI();
    FigurasI(int,double);
    FigurasI(int,double,double,double);

    virtual void muestraFigurasI();
    void guarda();
    void mostrar();
    FigurasI CalculadoraI(int,double);
};

Figuras::Figuras(int _Lados,double _Longitud,double _Area,double _Perimetro)
{
    Lados=_Lados;
    Longitud=_Longitud;
    Area=_Area;
    Perimetro=_Perimetro;
}

FigurasI::FigurasI(int _Lados,double _Longitud,double _Area,double _Perimetro)
{
    Lados=_Lados;
    Longitud=_Longitud;
    Area=_Area;
    Perimetro=_Perimetro;
}

Figuras::Figuras()
{
    Lados=0;
    Longitud=0;
    Area=0;
    Perimetro=0;
}

FigurasI::FigurasI()
{
    Lados=0;
    Longitud=0;
    Area=0;
    Perimetro=0;
}

Figuras::Figuras(int _Lados,double _Longitud)
{
    Lados=_Lados;
    Longitud=_Longitud;
    Area=0;
    Perimetro=0;
}

FigurasI::FigurasI(int _Lados,double _Perimetro)
{
    Lados=_Lados;
    Longitud=0;
    Area=0;
    Perimetro=_Perimetro;
}


void FigurasI::muestraFigurasI()
{
    std::cout<<"***Figura irregular***"<<std::endl;
    std::cout<<"Cantidad de lados: "<<Lados<<std::endl;
    std::cout<<"Area: "<<Area<<std::endl;
    std::cout<<"Perimetro: "<<Perimetro<<std::endl;
}

void Figuras::muestraFiguras()
{
    std::cout<<"***Figura regular***"<<std::endl;
    std::cout<<"Cantidad de lados: "<<Lados<<std::endl;
    std::cout<<"Longitud de los lados: "<<Longitud<<std::endl;
    std::cout<<"Area: "<<Area<<std::endl;
    std::cout<<"Perimetro: "<<Perimetro<<std::endl;
}

Figuras Figuras::Calculadora(int N,double L)
{
    double A,P;
    switch (N)
    {
        case 3:
            A=L*L/2;
            P=N*L;
            break;
        case 4:
            A=L*N;
            P=N*L;
            break;
        case 5:
            P=N*L;
            A=P*(7/(2*tan(180/5)));
            break;
    }
    Figuras F(N,L,A,P);
    return F;
}

FigurasI FigurasI::CalculadoraI(int N,double L)
{
    double A,P;
    switch (N)
    {
        case 3:
            A=L*L/2;
            P=N*L;
            break;
        case 4:
            A=L*L;
            P=N*L;
            break;
        case 5:
            P=N*L;
            A=P*(7/(2*tan(180/5)));
            break;
    }
    FigurasI F(N,L,A,P);
    return F;
}

void Figuras::guarda()
{
    std::ofstream archivo;
    archivo.open("Figuras.txt",std::ios::app);
    archivo<<"***Figura regular***"<<std::endl;
    archivo<<"Cantidad de lados: "<<Lados<<std::endl;
    archivo<<"Longitud de los lados: "<<Longitud<<std::endl;
    archivo<<"Area: "<<Area<<std::endl;
    archivo<<"Perimetro: "<<Perimetro<<std::endl;
}

void FigurasI::guarda()
{
    std::ofstream archivo;
    archivo.open("figurasI.txt",std::ios::app);
    archivo<<"***Figura irregular***"<<std::endl;
    archivo<<"Cantidad de lados: "<<Lados<<std::endl;
    archivo<<"Area: "<<Area<<std::endl;
    archivo<<"Perimetro: "<<Perimetro<<std::endl;
}

void Figuras::mostrar(void)
{
    std::ifstream archivo;
    archivo.open("Figuras.txt",std::ios::out);
    std::string linea;
    while(!archivo.eof())
    {
        getline(archivo,linea);
        std::cout<<linea<<std::endl;
    }
}

void FigurasI::mostrar(void)
{
    std::ifstream archivo;
    archivo.open("FigurasI.txt",std::ios::out);
    std::string linea;
    while(!archivo.eof())
    {
        getline(archivo,linea);
        std::cout<<linea<<std::endl;
    }
}

void menu (void)
{
    setlocale(LC_ALL,"");
    int l;
    double d;
    char r='s';
    while(r=='s'||r=='S')
    {
        system("cls");
        std::cout<<"¿Cuantos lados tiene su figura? \nLo sentimos, por temas de presupuesto tenemos un limite hasta Pentagonos no más :(\n";
        std::cin>>l;
        if(l<=2)
        {
            system("cls");
            std::cout<<std::endl<<"Una figura geometrica no puede tener menos de 3 lados, ¿Intentamos otra vez? s/n"<<std::endl;
            std::cin>>r;
        }
        else
        {
            system("cls");
            std::cout<<"¿Es una figura regular? s/n ";
            char r;
            std::cin>>r;
            if(r=='s'||r=='S')
            {
                Figuras A;
                system("cls");
                std::cout<<"Longitud de los lados: ";
                std::cin>>d;
                A.Calculadora(l,d);
                char aux2;
                std::cout<<std::endl<<"¿La quiere guardar? Amo s/n ";
                std::cin>>aux2;
                if(aux2=='S'||aux2=='S')
                    A.guarda();
            }
            if(r=='n'||r=='N')
            {
                FigurasI A;
                double a[l],aux=0;
                system("cls");
                for(int i=0;i<l;i++)
                {
                    std::cout<<"Longitud lado "<<i+1<<": ";
                    std::cin>>a[l];
                    aux+=a[l];
                }
                A.CalculadoraI(l,aux);
                char aux2;
                std::cout<<std::endl<<"¿La quiere guardar? Amo s/n ";
                std::cin>>aux2;
                if(aux2=='S'||aux2=='S')
                    A.guarda();
            }
        }
        std::cout<<std::endl<<"¿Se avienta otra? s/n ";
        std::cin>>r;
    }
}

int main()
{
    setlocale(LC_ALL, "");
    char r='s';
    while (r=='s'||r=='S')
    {
        system("cls");
        menu();
        std::cout<<std::endl;
        system("PAUSE");
        std::cout<<std::endl<<std::endl<<"¿Desea repetir? s/n ";
        std::cin>>r;
    }
}

/*FigurasI::FigurasI(int _Lados, double _Perimetro)
{
    Lados=_Lados;
    Perimetro=_Perimetro;
}

Figuras::Figuras(double _Lados,double _Longitud)
{
    Lados=_Lados;
    Longitud=_Longitud;
}

Figuras calcu(int lados, double distancia)
{
    double perimetro=lados*distancia;
    double Area=
    Figuras C(lados,distancia,)
}

FigurasI cacluI(int lados, double perimetro)
{

}*/
