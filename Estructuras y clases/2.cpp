#include <iostream>

using namespace std;

class Fecha
{
    private:
        int dia,mes,anio;
    public:
        Fecha(int,int,int);
        Fecha(long);
        void mostrarFecha();
};

Fecha::Fecha(int _dia, int _mes, int _anio)
{
    anio=_anio;
    mes=_mes;
    dia=_dia;
}

Fecha::Fecha(long fecha)
{
    anio=int(fecha/10000);
    mes=int((fecha-anio*10000)/100);
    dia=int(fecha-anio*10000-mes*100);
}

void Fecha::mostrarFecha()
{
    cout<<"La fecha es: "<<dia<<"/"<<mes<<"/"<<anio<<endl;
}

int main()
{
    Fecha hoy;
    cin>>hoy.anio>>hoy.mes>>hoy.dia;
    Fecha maniana(20210209);
    maniana.mostrarFecha();
    hoy.mostrarFecha();
    system("pause");
}
