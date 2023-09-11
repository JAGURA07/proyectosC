#include<iostream>

class Polinomio
{
private:
    int a[10];
public:
    Polinomio();
    Polinomio(int);
    void escribePolinomio(std::ostream& o)const;
    void leePolinomio(std::istream& i);
};

std::ostream& operator<<(std::ostream& o,const Polinomio& P)
{
    P.escribePolinomio(o);
    return o;
}

std::istream& operator>>(std::istream& i,Polinomio& P)
{
    P.leePolinomio(i);
    return i;
}

Polinomio::Polinomio()
{
    for(int i=0;i<10;i++)
        a[i]=0;
}

Polinomio::Polinomio(int b)
{
    for(int i=0;i<b;i++)
        a[i]=0;
}

void Polinomio::escribePolinomio(std::ostream& o)const
{
    o<<"( "<<a[0]<<"x^2, "<<a[1]<<"x, "<<a[2]<<" )";
}

void Polinomio::leePolinomio(std::istream& i)
{
    char c,d;
    i>>c>>a[0]>>c>>d>>d>>d>>a[1]>>c>>d>>a[2]>>d;
}

int main ()
{
    Polinomio A;
    std::cin>>A;
    std::cout<<A;
}
