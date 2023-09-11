#include<iostream>

class Racionales
{
    void reduce();
public:
    Racionales();
    Racionales(const Racionales& other);
    Racionales(int num,int den=1);
    ~Racionales();

    void operator+=(const Racionales& otro);
    void operator-=(const Racionales& otro);
    void operator*=(const Racionales& otro);
    void operator/=(const Racionales& otro);

    Racionales operator+(const Racionales& otro);
    Racionales operator-(const Racionales& otro);
    Racionales operator*(const Racionales& otro);
    Racionales operator/(const Racionales& otro);

    bool operator>(const Racionales& otro) const;
    bool operator>=(const Racionales& otro) const;
    bool operator<(const Racionales& otro) const;
    bool operator<=(const Racionales& otro) const;
    bool operator==(const Racionales& otro) const;
    bool operator!=(const Racionales& otro) const;

    Racionales a_racional(double);
    float a_float () const {return float(_num)/float(_den);};
    double  a_double () const {return double(_num)/double(_den);};

    Racionales exponencial(const Racionales& r1,int n);

    void escribeRacional(std::ostream& o)const;
    void leeRacional(std::istream& i);
private:
    int _num;
    int _den;
};

std::ostream& operator<<(std::ostream& o,const Racionales& R);
std::istream& operator>>(std::istream& i, Racionales& R);

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

Racionales Racionales::a_racional(double x)
{
    Racionales resultado(x*100000,100000);
    reduce();
    return resultado;
}

Racionales::~Racionales(){}

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
    //a/-b -> -a/b
    int M=mcd(_num,_den);
    _num/=M;
    _den/=M;
    if(_num<0 && _den<0 || _den<0 && _num>0)
    {
        _num=-_num;
        _den=-_den;
    }
}

void Racionales::escribeRacional(std::ostream& o)const
{
    o<<_num;
    if(_den!=1)
        o<<'/'<<_den;
}

void Racionales::leeRacional(std::istream& i)
{
    char c;
    i>>_num>>c>>_den;
    if(_den==0)
    {
        std::cout<<"ERROR_ Denominador 0 no admitido!";
    }
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
    int c=otro._num, d=otro._den;a/b + c/d;
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

bool Racionales::operator>=(const Racionales& otro) const
{
    return !operator<(otro);
}

bool Racionales::operator<(const Racionales& otro) const
{
    int a=_num,b=_den;
    int c=otro._num,d=otro._den;
    return a*d<c*b;
}

bool Racionales::operator<=(const Racionales& otro) const
{
    return !operator>(otro);
}

bool Racionales::operator==(const Racionales& otro) const
{
    return _num==otro._num && _den==otro._den;
}

bool Racionales::operator!=(const Racionales& otro) const
{
    return !operator==(otro);
}

Racionales Racionales::exponencial(const Racionales& r1,int n)
{
    Racionales resultado(_num,_den);
    int auxn=resultado._num,auxd=resultado._den;
    for(int i=1;i<n;i++)
    {
        resultado._den*=auxd;
        resultado._num*=auxn;
    }
    reduce();
    return resultado;
}

Racionales operator+(int n,const Racionales& R) {return Racionales(n)+R;}

Racionales operator-(int n,const Racionales& R) {return Racionales(n)-R;}

Racionales operator*(int n,const Racionales& R) {return Racionales(n)*R;}

Racionales operator/(int n,const Racionales& R) {return Racionales(n)/R;}

int menu()
{
    int r;
    std::cout<<std::endl<<"---------Clase Racional---------";
    std::cout<<std::endl<<"1.- SUMA ";
    std::cout<<std::endl<<"2.- RESTA ";
    std::cout<<std::endl<<"3.- DIVISION ";
    std::cout<<std::endl<<"4.- MULTIPLICACION ";
    std::cout<<std::endl<<"5.- EXPONENCIAL ";
    std::cout<<std::endl<<"6.- DECIMAL ";
    std::cout<<std::endl<<"--------------------------------";
    std::cout<<std::endl;
    std::cin>>r;
    return r;
}

void opciones(int x)
{
    switch (x)
    {
        case 1:
            {
                system("cls");
                Racionales A,B;
                std::cout<<std::endl<<"Indique sus racionales a sumar: ";
                std::cout<<std::endl<<"Racional 1: ";
                std::cin>>A;
                std::cout<<std::endl<<"Racional 2: ";
                std::cin>>B;
                std::cout<<std::endl<<"Resultado: "<<A+B;
                A.~Racionales();
                B.~Racionales();
            }
        break;
        case 2:
            {
                system("cls");
                Racionales A,B;
                std::cout<<std::endl<<"Indique sus racionales a restar: ";
                std::cout<<std::endl<<"Racional 1: ";
                std::cin>>A;
                std::cout<<std::endl<<"Racional 2: ";
                std::cin>>B;
                std::cout<<std::endl<<"Resultado: "<<A-B;
                A.~Racionales();
                B.~Racionales();
            }
        break;
        case 3:
            {
                system("cls");
                system("cls");
                Racionales A,B;
                std::cout<<std::endl<<"Indique sus racionales a dividir: ";
                std::cout<<std::endl<<"Racional 1: ";
                std::cin>>A;
                std::cout<<std::endl<<"Racional 2: ";
                std::cin>>B;
                std::cout<<std::endl<<"Resultado: "<<A/B;
                A.~Racionales();
                B.~Racionales();
            }
        break;
        case 4:
            {
                system("cls");
                system("cls");
                Racionales A,B;
                std::cout<<std::endl<<"Indique sus racionales a multiplicar: ";
                std::cout<<std::endl<<"Racional 1: ";
                std::cin>>A;
                std::cout<<std::endl<<"Racional 2: ";
                std::cin>>B;
                std::cout<<std::endl<<"Resultado: "<<A*B;
                A.~Racionales();
                B.~Racionales();
            }
        break;
        case 5:
            {
                system("cls");
                system("cls");
                Racionales A;
                int a;
                std::cout<<std::endl<<"Indique sus racionales a elevar: ";
                std::cout<<std::endl<<"Racional: ";
                std::cin>>A;
                std::cout<<std::endl<<"Exponente: ";
                std::cin>>a;
                std::cout<<std::endl<<"Resultado: "<<A.exponencial(A,a);
                A.~Racionales();
            }
        break;
        case 6:
            {
                system("cls");
                int a2;
                std::cout<<std::endl<<"1.-Racional a decimal";
                std::cout<<std::endl<<"2.-Decimal a racional";
                std::cout<<std::endl<<"3.-Salir";
                std::cout<<std::endl;
                std::cin>>a2;
                switch (a2)
                {
                case 1:
                    {
                        system("cls");
                        double resultado;
                        Racionales r;
                        std::cout<<std::endl<<"Escriba su racional: ";
                        std::cin>>r;
                        std::cout<<std::endl;
                        resultado=r.a_double();
                        std::cout<<std::endl<<"En decimal: "<<resultado;
                        r.~Racionales();
                    }
                break;
                case 2:
                    {
                        double y;
                        Racionales R;
                        system("cls");
                        std::cout<<std::endl<<"Indique sus decimal a transformar: ";
                        std::cin>>y;
                        R=R.a_racional(y);
                        std::cout<<std::endl<<"En racional: "<<R;
                        R.~Racionales();
                    }
                break;
                case 3:
                break;
                default:
                    {
                        system("cls");
                        std::cout<<std::endl<<"Caso no contemplado! ";
                    }
                break;
                }
            }
        break;
        default:
            {
                system("cls");
                std::cout<<std::endl<<"Opcion no contemplada por el momento";
            }
        break;
    }
}

int main()
{
    int x;
    char r='s';
    while (r=='s'||r=='S')
    {
        system("cls");
        x=menu();
        opciones(x);
        std::cout<<std::endl;
        system("PAUSE");
        system("cls");
        std::cout<<std::endl<<std::endl<<"Desea repetir? s/n ";
        std::cin>>r;
    }
}
