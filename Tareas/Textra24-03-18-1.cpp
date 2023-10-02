#include <iostream>
#include <vector>
#include <windows.h>
using namespace std;
int  I (int a);
int II (int a);
int I (int a)
{
    int b;
    cout<<"-Suma magica-"<<endl;
    cout<<endl<<"INSTRUCCIONES:"<<endl;
    cout<<endl<<"Selecciona un numero de la tabla, los ceros no se pueden elegir"<<endl;
    cout<<"Solo puedes elegir una sola vez el numero"<<endl;
    cout<<endl<<"Siguiendo estas reglas, al seleccionar 4 numeros, tu suma siempre sera de 34"<<endl;
    cout<<endl<<"A jugar !!!!..... :) "<<endl;
    cout<<"Numeros que puedes seleccionar:"<<endl;
    cout<<endl;
    b=II(a);
    cout<<endl;
}
int II (int a)
{
    vector <int> vector1(4,0);
    vector <int> vector2(4,0);
    vector <int> vector3(4,0);
    vector <int> vector4(4,0);
    vector <int> vector5(4,0);
    int c,d,e,f,g=0,h,i;
    c=1;
    for(i=0;i<=4;i++)
    {
        vector1[i]=c;
        c++;
    }
    for(i=0;i<=4;i++)
    {
        vector2[i]=c-1;
        c++;
    }
    for(i=0;i<=4;i++)
    {
        vector3[i]=c-2;
        c++;
    }
    for(i=0;i<=4;i++)
    {
        vector4[i]=c-3;
        c++;
    }
    for(i=0;i<4;i++){cout<<"   "<<vector1[i];}
    cout<<endl;
    for(i=0;i<4;i++){cout<<"   "<<vector2[i];}
    cout<<endl;
    for(i=0;i<4;i++){cout<<"  "<<vector3[i];}
    cout<<endl;
    for(i=0;i<4;i++){cout<<"  "<<vector4[i];}
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
            for(h=0;h<=4;h++){vector1[h]=0;}
         vector1[a-1]=a;
         vector2[a-1]=0;
         vector3[a-1]=0;
         vector4[a-1]=0;
        }
        if(a>4&&a<=8)
        {
            for(h=0;h<=4;h++)
         {
             if(vector2[h]==a){f=h;}
             vector2[h]=0;
         }
         vector1[f]=0;
         vector2[f]=a;
         vector3[f]=0;
         vector4[f]=0;
        }
        if(a>8&&a<=12)
        {
            for(h=0;h<=4;h++)
         {
             if(vector3[h]==a){f=h;}
             vector3[h]=0;
         }
         vector1[f]=0;
         vector2[f]=0;
         vector3[f]=a;
         vector4[f]=0;
        }
        if(a>12&&a<=16)
        {
            for(h=0;h<=4;h++)
         {
             if(vector4[h]==a){f=h;}
             vector4[h]=0;
         }
         vector1[f]=0;
         vector2[f]=0;
         vector3[f]=0;
         vector4[f]=a;
        }
    }
    cout<<endl;
    for(i=0;i<4;i++){cout<<"   "<<vector1[i];}
    cout<<endl;
    for(i=0;i<4;i++){cout<<"   "<<vector2[i];}
    cout<<endl;
    for(i=0;i<4;i++){cout<<"  "<<vector3[i];}
    cout<<endl;
    for(i=0;i<4;i++){cout<<"  "<<vector4[i];}
    cout<<endl;
    }
    cout<<endl<<endl<<"Si sumas los que seleccionaste, Cual sera el resultado?? "<<endl;
}
int main ()
{
    int z;
    int a;
    z=I(a);
}
