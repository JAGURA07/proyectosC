#include <iostream>
#include <windows.h>
using namespace std;
void  uno (void);
void dos (void);
void tres (void);
void cuatro (void);
int tabla[16],a,c,d,f,g=0,h,i,j;
int main ()
{
    char resp;
    resp='s';
    while(resp=='s'||resp=='S')
    {
        system("cls");
            uno();
            cout<<"Desea repetir? S/N"<<endl;
            cin>>resp;
    }
}
void uno (void)
{
    cout<<"-Suma magica-"<<endl<<endl;
    cout<<"INSTRUCCIONES:"<<endl<<endl;
    cout<<"Selecciona un numero de la tabla, los ceros no se pueden elegir"<<endl;
    cout<<"Solo puedes elegir una sola vez el numero"<<endl<<endl;
    cout<<"Siguiendo estas reglas, al seleccionar 4 numeros, tu suma siempre sera de 34"<<endl<<endl;
    cout<<"A jugar !!!!..... :) "<<endl;
    cout<<endl;
    cout<<"Numeros que puedes seleccionar:";
    cout<<endl<<endl;
    dos();
}
void dos (void)
{
    c=1;
    for(i=0;i<=16;i++)
    {
        tabla[i]=c;
        c++;
    }
    for(i=0;i<16;i++){
            if(i==4||i==8||i==12||i==16)
            {
               cout<<endl;
            }
                cout<<"   "<<tabla[i];
            }
    cout<<endl;
    for(g=0;g<=3;g++)
    {
        tres();
    }
     cout<<endl<<endl<<"Si sumas los que seleccionaste, Cual sera el resultado?? "<<endl;
}
void tres (void)
{
        cin>>a;
        cout<<endl<<endl;
        if(a>16){cout<<"Elija un numero valido"<<endl;}
        else
        {
               if(a<=4)
        {
            for(h=0;h<4;h++){tabla[h]=0;}
            tabla[a-1]=a;
            tabla[a+3]=0;
            tabla[a+7]=0;
            tabla[a+11]=0;
        }
        if(a>4&&a<=8)
        {
            for(h=4;h<=7;h++){tabla[h]=0;}
            tabla[a-5]=0;
            tabla[a-1]=a;
            tabla[a+3]=0;
            tabla[a+7]=0;
        }
        if(a>8&&a<=12)
        {
            for(h=8;h<=11;h++){tabla[h]=0;}
            tabla[a-9]=0;
            tabla[a-5]=0;
            tabla[a-1]=a;
            tabla[a+3]=0;
        }
        if(a>12&&a<=16)
        {
            for(h=12;h<=15;h++){tabla[h]=0;}
            tabla[a-13]=0;
            tabla[a-9]=0;
            tabla[a-5]=0;
            tabla[a-1]=a;
        }
        }
        cuatro();
}
void cuatro (void)
{
     cout<<endl;
    for(i=0;i<=15;i++)
    {
        if(i==4||i==8||i==12||i==16)
        {
            cout<<endl;
        }
        cout<<"  "<<tabla[i];
    }
    cout<<endl<<endl;
}
