#include <iostream>
using namespace std;
struct jafet
{
    string nombre;
    double peso,edad;
};

jafet operator+(jafet &x, jafet &y);

int main ()
{
    jafet dato,r;
    fflush(stdin);
    getline(cin,dato.nombre);
    cin>>dato.edad;
    cin>>dato.peso;
    r=dato+dato;
    cout<<r.edad<<endl;
}

jafet operator+(jafet &x, jafet &y)
{
    jafet r;
    r.edad=x.edad+x.peso;
    return r;
}
