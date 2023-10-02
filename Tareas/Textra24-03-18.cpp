#include <iostream>
#include <vector>
#include <windows.h>
using namespace std;
int  I (int a);
int II (int a);
int I (int a)
{
    int b;
    cout<<"-Suma magica-"<<endl<<endl<<"INSTRUCCIONES:"<<endl<<endl<<"Selecciona un numero de la tabla, los ceros no se pueden elegir"<<endl<<"Solo puedes elegir una sola vez el numero"<<endl<<endl<<"Siguiendo estas reglas, al seleccionar 4 numeros, tu suma siempre sera de 34"<<endl<<endl<<"A jugar !!!!..... :) "<<endl<<"Numeros que puedes seleccionar:"<<endl<<endl;
    b=II(a);
}
int II (int a)
{
    vector <int> vector1(16,0);
    vector <int> vector2(4,0);
    vector <int> vector3(4,0);
    vector <int> vector4(4,0);
    vector <int> vector5(4,0);
    int c,d,e,f,g=0,h,i;
    c=1;
    for(i=0;i<=16;i++)
    {
        vector1[i]=c;
        c++;
    }
    for(i=0;i<16;i++){
            if(i==4||i==8||i==12||i==16)
            {
               cout<<endl;
            }
                cout<<"   "<<vector1[i];
            }
    cout<<endl;
    while(g<=3)
    {
        cin>>a;
        vector5[g]=a;
        if(a==vector5[g-1]){cout<<"Ese ya lo eligio antes"<<endl;}
        if(a>16){cout<<"Elija un numero valido"<<endl;}
        else
        {
            g++;
            e=e+a;
        if(a<=4)
        {
            for(h=0;h<4;h++){vector1[h]=0;}
            vector1[a-1]=a;
            vector1[a+3]=0;
            vector1[a+7]=0;
            vector1[a+11]=0;
        }
        if(a>4&&a<=8)
        {
            for(h=4;h<=7;h++){vector1[h]=0;}
            vector1[a-5]=0;
            vector1[a-1]=a;
            vector1[a+3]=0;
            vector1[a+7]=0;
        }
        if(a>8&&a<=12)
        {
            for(h=8;h<=11;h++){vector1[h]=0;}
            vector1[a-9]=0;
            vector1[a-5]=0;
            vector1[a-1]=a;
            vector1[a+3]=0;
        }
        if(a>12&&a<=16)
        {
            for(h=12;h<=15;h++){vector1[h]=0;}
            vector1[a-13]=0;
            vector1[a-9]=0;
            vector1[a-5]=0;
            vector1[a-1]=a;
        }
    }
    cout<<endl;
    for(i=0;i<16;i++){
            if(i==4||i==8||i==12||i==16)
            {
               cout<<endl;
            }
                cout<<"   "<<vector1[i];
            }
    cout<<endl;
}
    cout<<endl<<endl<<"Si sumas los que seleccionaste, Cual sera el resultado?? "<<endl;
}
int main ()
{
    char r;
    r='s';
    while(r=='s'||r=='S')
    {
        system("cls");
            int z,a;
            z=I(a);
            cout<<"Desea repetir? S/N"<<endl;
            cin>>r;
    }
}
