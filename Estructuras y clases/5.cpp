//Metodos constructores y modificadores (getters y setters)
#include <iostream>
using namespace std;

class Punto
{
private:
    int x,y;
public:
    Punto();//Constructor
    void setPunto(int,int);//setter
    int getPuntoX();//Getter X
    int getPuntoY();//Getter Y
};

Punto::Punto()
{
}

//setter
void Punto::setPunto(int _x, int _y)
{
    x=_x;
    y=_y;
}

//getter
int Punto::getPuntoX()
{
    return x;
}

int Punto::getPuntoY()
{
    return y;
}

int main()
{
    Punto punto1;
    punto1.setPunto(1,2);
    cout<<punto1.getPuntoX()<<endl;
    cout<<punto1.getPuntoY()<<endl;
    system("pause");
}
