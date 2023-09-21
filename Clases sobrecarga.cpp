#include <iostream>
using namespace std;

struct Punto
{
    int x,y;
};

Punto operator+(const Punto &p, const Punto &q);

int main ()
{
    Punto a,b,r;
    cout<<endl<<"Valor 1 de a: ";
    cin>>a.x;
    cout<<endl<<"Valor 2 de a: ";
    cin>>a.y;
    cout<<endl<<"Valor 1 de b: ";
    cin>>b.x;
    cout<<endl<<"Valor 2 de a: ";
    cin>>b.y;
    r=a+b;
    cout<<endl<<r.x<<", "<<r.y;
}

Punto operator+(const Punto &p, const Punto &q)
{
    Punto r;
    r.x=p.x+q.y;
    r.y=p.y+q.x;
    return r;
}
