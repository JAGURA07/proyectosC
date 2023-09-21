#include<iostream>

class Vector
{
private:
    int x,y;
public:
    Vector();
    Vector(int,int);
    Vector(const Vector& otro);

    void muestraVector(std::ostream& o)const;
    void leeVector(std::istream& i);
};

std::ostream& operator<<(std::ostream& o,const Vector& R)
{
    R.muestraVector(o);
    return o;
}

std::istream& operator>>(std::istream& i, Vector& R)
{
    R.leeVector(i);
    return i;
}

void Vector::muestraVector(std::ostream& o)const
{
    o<<"("<<x<<","<<y<<")";
}

void Vector::leeVector(std::istream& i)
{
    char c;
    i>>c>>x>>c>>y>>c;
}

Vector::Vector()
{
    x=0;
    y=0;
}

Vector::Vector(int _x,int _y)
{
    x=_x;
    y=_y;
}

Vector::Vector(const Vector& otro)
{
    x=otro.x;
    y=otro.y;
}

int main()
{
    Vector A;
    std::cin>>A;
    std::cout<<A;
}
