#include<iostream>

class Matriz
{
private:
    int filas,columnas,elementos[10][10];
public:

    Matriz();
    Matriz(int,int);
    Matriz(const Matriz& otro);
    Matriz(int,int,int[10][10]);
    ~Matriz();

    void muestraMatriz(std::ostream& o)const;
    void leeMatriz(std::istream& i);
    int getElemento(int,int);
    int getFilas();
    int getColumnas();
    int determinante();

    void operator+=(const Matriz& otro);
    void operator-=(const Matriz& otro);
    void operator*=(const Matriz& otro);
    void operator/=(const Matriz& otro);

    Matriz operator+(const Matriz& otro);
    Matriz operator-(const Matriz& otro);
    Matriz operator*(const Matriz& otro);
    Matriz operator/(const Matriz& otro);
};

std::ostream& operator<<(std::ostream& o,const Matriz& R)
{
    R.muestraMatriz(o);
    return o;
}

std::istream& operator>>(std::istream& i, Matriz& R)
{
    R.leeMatriz(i);
    return i;
}

Matriz::Matriz()
{
    filas=0;
    columnas=0;
}

Matriz::Matriz(int _filas,int _columnas)
{
    filas=_filas;
    columnas=_columnas;
    for(int i=0;i<filas;i++)
    {
        for(int it=0;it<columnas;it++)
        {
            std::cout<<std::endl<<"Elemento ["<<i+1<<"]["<<it+1<<"] = ";
            std::cin>>elementos[i][it];
        }
    }
}

Matriz::Matriz(const Matriz& otro)
{
    filas=otro.filas;
    columnas=otro.columnas;
    for(int i=0;i<filas;i++)
        for(int it=0;it<columnas;i++)
            elementos[i][it]=otro.elementos[i][it];
}

Matriz::Matriz(int _filas,int _columnas,int _elementos[10][10])
{
    filas=_filas;
    columnas=_columnas;
    for(int i=0;i<filas;i++)
        for(int it=0;it<columnas;it++)
            elementos[i][it]=_elementos[i][it];
}

Matriz::~Matriz(){}

void Matriz::leeMatriz(std::istream& i)
{
    char c;
    i>>filas>>c>>columnas;
    for(int i=0;i<filas;i++)
    {
        for(int it=0;it<columnas;it++)
        {
            std::cout<<std::endl<<"Elemento ["<<i+1<<"]["<<it+1<<"] = ";
            std::cin>>elementos[i][it];
        }
    }
}

void Matriz::muestraMatriz(std::ostream& o)const
{
    //std::cout<<std::endl<<"("<<filas<<", "<<columnas<<")";
    std::cout<<std::endl;
    for(int i=0;i<filas;i++)
    {
        for(int it=0;it<columnas;it++)
        {
            std::cout<<elementos[i][it]<<" ";
        }
        std::cout<<std::endl;
    }
}

void Matriz::operator+=(const Matriz& otro)
{
    for(int i=0;i<filas;i++)
        for(int it=0;it<columnas;it++)
            elementos[i][it]=elementos[i][it]+otro.elementos[i][it];
}

void Matriz::operator-=(const Matriz& otro)
{
    for(int i=0;i<filas;i++)
        for(int it=0;it<columnas;it++)
            elementos[i][it]=elementos[i][it]-otro.elementos[i][it];
}

void Matriz::operator*=(const Matriz& otro)
{
    Matriz C;
    for (int i=0;i<filas;i++)
    {
        for (int j=0;j<otro.columnas;j++)
        {
            C.elementos[i][j]=0;
            for (int k=0;k<columnas;k++)
                elementos[i][j]=C.elementos[i][j]+elementos[i][k]*otro.elementos[k][j];
       }
    }
    C.~Matriz();
}

/*void operator/=(const Matriz& otro)
{

}*/

Matriz Matriz::operator+(const Matriz& otro)
{
    Matriz aux(filas,columnas);
    for(int i=0;i<filas;i++)
        for(int it=0;it<columnas;it++)
            aux.elementos[i][it]=elementos[i][it];
    aux+=otro;
    return aux;
}

Matriz Matriz::operator-(const Matriz& otro)
{
    Matriz aux(filas,columnas);
    for(int i=0;i<filas;i++)
        for(int it=0;it<columnas;it++)
            aux.elementos[i][it]=elementos[i][it];
    aux-=otro;
    return aux;
}

Matriz Matriz::operator*(const Matriz& otro)
{
    Matriz aux(filas,columnas);
    for(int i=0;i<filas;i++)
        for(int it=0;it<columnas;it++)
            aux.elementos[i][it]=elementos[i][it];
    aux*=otro;
    return aux;
}

/*Matriz Matriz::operator/(cons Matriz& otro)
{

}*/

int Matriz::determinante()
{
    double respuesta;
    if(filas==2&&columnas==2)
        respuesta=(elementos[0][0]*elementos[1][1])-(elementos[1][0]*elementos[0][1]);
    return respuesta;
}

int Matriz::getElemento(int a,int b){return elementos[a][b];}
int Matriz::getFilas(){return filas;}
int Matriz::getColumnas(){return columnas;}

int main()
{
    Matriz B(2,2);
    Matriz A(2,2);
    std::cout<<std::endl<<A+B;
}
