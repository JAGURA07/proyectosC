#include <iostream>
using namespace std;

class Hora
{
    private:
        int hora,minuto,segundo;
    public:
        Hora(int,int,int);
        Hora(long);
        void mostrarHora();
};

Hora::Hora(int _hora,int _minuto,int _segundo)
{
    hora=_hora;
    minuto=_minuto;
    segundo=_segundo;
}

Hora::Hora (long _hora)
{
    hora=int(_hora/10000);
    minuto=int(_hora-hora*10000)/100;
    segundo=int(_hora-hora*10000-minuto*100);
}

void Hora::mostrarHora (void)
{
    cout<<"Hora: "<<hora<<":"<<minuto<<":"<<segundo<<endl;
}

int main()
{
    Hora ahora(12,30,45);
    Hora ahorita;
    cin>>ahorita;
    ahorita.mostrarHora();
    ahora.mostrarHora();
    system("pause");
}
