#include <iostream>
#include <windows.h>
using namespace std;
void  texto (void);
void proceso (void);
void texto (void)
{
    cout<<"-Suma magica-";
    cout<<endl;
    cout<<endl;
    cout<<"INSTRUCCIONES:"<<endl;
    cout<<endl;
    cout<<"Selecciona un numero de la tabla, los ceros no se pueden elegir"<<endl;
    cout<<"Solo puedes elegir una sola vez el numero"<<endl;
    cout<<endl;
    cout<<"Siguiendo estas reglas, al seleccionar 4 numeros, tu suma siempre sera de 34"<<endl;
    cout<<endl;
    cout<<"A jugar !!!!..... :) "<<endl;
    cout<<"Numeros que puedes seleccionar:"<<endl;
    cout<<endl;
}
void proceso (void)
{
    int x,c,g,i,i2,v[4][4],v2[3];
    c=1;
    for(i=0;i<=3;i++)
    {
        for(i2=0;i2<=3;i2++)
        {
            v[i][i2]=c;
            c++;
        }
    }
    for(i=0;i<=3;i++)
    {
        cout<<endl;
        for(i2=0;i2<=3;i2++)
        {
            cout<<"  "<<v[i][i2];
        }
    }
    cout<<endl;
    cout<<endl;
    g=0;
    while(g<=3)
    {
        cin>>x;
        v2[g]=x;
        if(x>16){cout<<"Elija un numero valido"<<endl;}
        else
        {
            g++;
    switch(x)
    {
    case 1:
        v[1][0]=0;
        v[2][0]=0;
        v[3][0]=0;
        v[0][1]=0;
        v[0][2]=0;
        v[0][3]=0;
        break;
    case 2:
        v[1][1]=0;
        v[2][1]=0;
        v[3][1]=0;
        v[0][0]=0;
        v[0][2]=0;
        v[0][3]=0;
        break;
    case 3:
        v[1][2]=0;
        v[2][2]=0;
        v[3][2]=0;
        v[0][0]=0;
        v[0][1]=0;
        v[0][3]=0;
        break;
    case 4:
        v[1][3]=0;
        v[2][3]=0;
        v[3][3]=0;
        v[0][0]=0;
        v[0][1]=0;
        v[0][2]=0;
        break;
    case 5:
        v[0][0]=0;
        v[2][0]=0;
        v[3][0]=0;
        v[1][1]=0;
        v[1][2]=0;
        v[1][3]=0;
        break;
    case 6:
        v[0][1]=0;
        v[2][1]=0;
        v[3][1]=0;
        v[1][0]=0;
        v[1][2]=0;
        v[1][3]=0;
        break;
    case 7:
        v[0][2]=0;
        v[2][2]=0;
        v[3][2]=0;
        v[1][0]=0;
        v[1][1]=0;
        v[1][3]=0;
        break;
    case 8:
        v[0][3]=0;
        v[2][3]=0;
        v[3][3]=0;
        v[1][0]=0;
        v[1][1]=0;
        v[1][2]=0;
        break;
    case 9:
        v[0][0]=0;
        v[1][0]=0;
        v[3][0]=0;
        v[2][1]=0;
        v[2][2]=0;
        v[2][3]=0;
        break;
    case 10:
        v[0][1]=0;
        v[1][1]=0;
        v[3][1]=0;
        v[2][0]=0;
        v[2][2]=0;
        v[2][3]=0;
        break;
    case 11:
        v[0][2]=0;
        v[1][2]=0;
        v[3][2]=0;
        v[2][0]=0;
        v[2][1]=0;
        v[2][3]=0;
        break;
    case 12:
        v[0][3]=0;
        v[1][3]=0;
        v[3][3]=0;
        v[2][0]=0;
        v[2][1]=0;
        v[2][2]=0;
        break;
    case 13:
        v[0][0]=0;
        v[1][0]=0;
        v[2][0]=0;
        v[3][1]=0;
        v[3][2]=0;
        v[3][3]=0;
        break;
    case 14:
        v[0][1]=0;
        v[1][1]=0;
        v[2][1]=0;
        v[3][0]=0;
        v[3][2]=0;
        v[3][3]=0;
        break;
    case 15:
        v[0][2]=0;
        v[1][2]=0;
        v[2][2]=0;
        v[3][0]=0;
        v[3][1]=0;
        v[3][3]=0;
        break;
    case 16:
        v[0][3]=0;
        v[1][3]=0;
        v[2][3]=0;
        v[3][0]=0;
        v[3][1]=0;
        v[3][2]=0;
        break;
        }
    cout<<endl;
    for(i=0;i<=3;i++)
    {
        cout<<endl;
        for(i2=0;i2<=3;i2++)
        {
            cout<<"  "<<v[i][i2];
        }
    }
    cout<<endl;
    cout<<endl;
}
}
  cout<<endl;
  cout<<endl;
  cout<<"Si sumas los que seleccionaste, Cual sera el resultado?? "<<endl;
}
int main ()
{
    char resp;
    resp='s';
    while(resp=='s'||resp=='S')
    {
        system("cls");
            texto();
            proceso();
            cout<<"Desea repetir? S/N"<<endl;
            cin>>resp;
    }
}
