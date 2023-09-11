#include <iostream>

class Complejo
{
private:
    double real,imaginario;
public:
    Complejo();
    Complejo(double);
    Complejo(double,double);
    Complejo(const Complejo& otro);
    ~Complejo();

    void operator+=(const Complejo& otro);
    void operator-=(const Complejo& otro);
    void operator*=(const Complejo& otro);
    void operator/=(const Complejo& otro);

    Complejo operator+(const Complejo& otro);
    Complejo operator-(const Complejo& otro);
    Complejo operator*(const Complejo& otro);
    Complejo operator/(const Complejo& otro);

    void muestraComplejo(std::ostream& o)const;
    void recibeComplejo(std::istream& i);

};

std::ostream& operator<<(std::ostream& o,const Complejo& R);
std::istream& operator>>(std::istream& i, Complejo& R);

std::ostream& operator<<(std::ostream& o,const Complejo& R)
{
    R.muestraComplejo(o);
    return o;
}

std::istream& operator>>(std::istream& i, Complejo& R)
{
    R.recibeComplejo(i);
    return i;
}

Complejo::Complejo()
{
    real=0;
    imaginario=0;
}

Complejo::Complejo(const Complejo& otro)
{
    real=otro.real;
    imaginario=otro.imaginario;
}

Complejo::Complejo(double _real,double _imaginario)
{
    real=_real;
    imaginario=_imaginario;
}

Complejo::Complejo(double _real)
{
    real=_real;
    imaginario=0;
}

Complejo::~Complejo(){}

void Complejo::muestraComplejo(std::ostream& o)const
{
    if(imaginario==0)
        o<<"( "<<real<<", "<<imaginario<<" )";
    else
        o<<"( "<<real<<", "<<imaginario<<"i )";
}

void Complejo::recibeComplejo(std::istream& i)
{
    char c;
    i>>c>>real>>c>>imaginario>>c>>c;
}

void Complejo::operator+=(const Complejo& otro)
{
    real=real+otro.real;
    imaginario=imaginario+otro.imaginario;
}

void Complejo::operator-=(const Complejo& otro)
{
    real=real-otro.real;
    imaginario=imaginario-otro.imaginario;
}

void Complejo::operator*=(const Complejo& otro)
{
    double aux1,aux2;
    aux1=(real*otro.real)-(imaginario*otro.imaginario);
    aux2=(real*otro.imaginario)+(imaginario*otro.real);
    real=aux1;
    imaginario=aux2;
}

void Complejo::operator/=(const Complejo& otro)
{
    double aux1,aux2;
}

Complejo Complejo::operator+(const Complejo& otro)
{
    Complejo resultado(real,imaginario);
    resultado+=otro;
    return resultado;
}

Complejo Complejo::operator-(const Complejo& otro)
{
    Complejo resultado(real,imaginario);
    resultado-=otro;
    return resultado;
}

Complejo Complejo::operator*(const Complejo& otro)
{
    Complejo resultado(real,imaginario);
    resultado*=otro;
    return resultado;
}

Complejo Complejo::operator/(const Complejo& otro)
{
    Complejo resultado(real,imaginario);
    resultado/=otro;
    return resultado;
}

int main ()
{
    Complejo A;
    std::cin>>A;
    std::cout<<A;
}
