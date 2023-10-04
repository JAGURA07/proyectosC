#include<iostream>
#include<math.h>
#include <iomanip>
using namespace std;

double f(double x0)
{
    double aux=pow(x0,3);
    double x1=aux+(2*x0)-2;
    return x1;
}

double f1(double x0)
{
    double aux=pow(x0,2);
    double x1=(3*aux)+2;
    return x1;
}

double newtonA(double x0,int a)
{
    double x1;
    x1=x0-(f(x0))/(f1(x0));
    cout<<"Aproximacion "<<a<<": "<<setprecision(16)<<x1<<" en el punto: "<<x0<<endl;
    if (a==10)
        return x1;
    else
        newtonA(x1,a+1);
}

int main()
{
    cout<<newtonA(0,0);
}
