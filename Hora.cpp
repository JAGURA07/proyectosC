#include "Hora.h"
using namespace std;

int mcd(int a,int b)
{
    while(b!=0)
    {
        int aux=b;
        b=a%b;
        a=aux;
    }
    return a;
}

void Racionales::reduce()
{
    int M=mcd(_num,_den);
    _num/=M;
    _den/=M;
    if(_num<0 && _den<0 || _den<0 && _num>0)
    {
        _num=-_num;
        _den=-_den;
    }

}

Racionales::Racionales()
{
    _num=0;
    _den=1;
}

Racionales::Racionales(const Racionales& other)
{

    _num=other._num;
    _den=other._den;
}

Racionales::Racionales(int num,int den)
{
    _num=num;
    _den=den;
    reduce();
}

void Racionales::escribeRacional(ostream& o) const
{
    o<<_num;
    if(_den!=1)
        o<<'/'<<_den;
}

void Racionales::leeRacional(istream& i)
{
    char c;
    i>>_num>>c>>_den;
    reduce();
}

std::ostream& operator<<(std::ostream& o,const Racionales& R)
{
    R.escribeRacional(o);
    return o;
}

std::istream& operator>>(std::istream& i, Racionales& R)
{
    R.leeRacional(i);
    return i;
}

void Racionales::operator+=(const Racionales& otro)
{
    int a=_num, b=_den;
    int c=otro._num, d=otro._den;
    _num=a*d+c*b;
    _den=b*d;
    reduce();
}

void Racionales::operator-=(const Racionales& otro)
{
    int a=_num, b=_den;
    int c=otro._num, d=otro._den;
    _num=a*d-c*b;
    _den=b*d;
    reduce();
}

void Racionales::operator*=(const Racionales& otro)
{
    _num*=otro._num;
    _den*=otro._den;
    reduce();
}

void Racionales::operator/=(const Racionales& otro)
{
    _num*=otro._den;
    _den*=otro._num;
    reduce();
}

Racionales Racionales::operator+(const Racionales& otro)
{
    Racionales resultado(_num,_den);
    resultado+=otro;
    reduce();
    return resultado;
}

Racionales Racionales::operator-(const Racionales& otro)
{
    Racionales resultado(_num,_den);
    resultado-=otro;
    reduce();
    return resultado;
}

Racionales Racionales::operator*(const Racionales& otro)
{
    Racionales resultado(_num,_den);
    resultado*=otro;
    reduce();
    return resultado;
}

Racionales Racionales::operator/(const Racionales& otro)
{
    Racionales resultado(_num,_den);
    resultado/=otro;
    reduce();
    return resultado;
}

bool Racionales::operator>(const Racionales& otro) const
{
    int a=_num,b=_den;
    int c=otro._num,d=otro._den;
    return a*d>c*b;
}

bool Racionales::operator>=(const Racionales& otro) const {return !operator<(otro);}

bool Racionales::operator<(const Racionales& otro) const
{
    int a=_num,b=_den;
    int c=otro._num,d=otro._den;
    return a*d<c*b;
}

bool Racionales::operator<=(const Racionales& otro) const {return !operator>(otro);}

bool Racionales::operator==(const Racionales& otro) const {return _num==otro._num && _den==otro._den;}

bool Racionales::operator!=(const Racionales& otro) const {return !operator==(otro);}

Racionales operator+(int n, const Racionales& R) {return Racionales(n)+R;}

Racionales operator-(int n, const Racionales& R) {return Racionales(n)-R;}

Racionales operator*(int n, const Racionales& R) {return Racionales(n)*R;}

Racionales operator/(int n, const Racionales& R) {return Racionales(n)/R;}
