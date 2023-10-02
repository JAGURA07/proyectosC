#include<iostream>
#include<windows.h>
using namespace std;
void uno(void);
void dos(void);
void tres(void);
void cuatro (void);
void cinco (void);
int numeros[16],suma=0,nums[4],x,contador;
void uno(void)
{
    cout<<"-Suma magica-"<<endl<<endl;
    cout<<"INSTRUCCIONES:"<<endl<<endl;
    cout<<"Selecciona un numero de la tabla, los ceros no se pueden elegir"<<endl;
    cout<<"Solo puedes elegir una sola vez el numero"<<endl<<endl;
    cout<<"Siguiendo estas reglas, al seleccionar 4 numeros, tu suma siempre sera de 34"<<endl<<endl;
    cout<<"A jugar !!!!..... :) "<<endl;
    cout<<endl;
    dos();
    cout<<"Numeros que puedes seleccionar:";
    cout<<endl<<endl;
    tres();
    cinco();
}
void dos (void)
{
    int i,c;
    c=1;
    for(i=0;i<=15;i++)
    {
        numeros[i]=c;
        c++;
    }
}
void tres (void)
{
    int i;
    for(i=0;i<=15;i++)
    {
        if(i%4==0)
        {
            cout<<endl;
        }
        cout<<"   "<<numeros[i];
    }
    cout<<endl;
}
void cuatro (void)
{
    int i2,y;
    cin>>x;
    suma=suma+x;
    nums[contador]=x;
    if(x<=4)
    {
       for(i2=0;i2<4;i2++)
        {
            if(numeros[i2]==x)
            {
                y=i2;
            }
            numeros[i2]=0;
        }
        numeros[y]=x;
        numeros[y+4]=0;
        numeros[y+8]=0;
        numeros[y+12]=0;
    }
    if(x>4&&x<=8)
    {
        for(i2=4;i2<8;i2++)
        {
            if(numeros[i2]==x)
            {
                y=i2;
            }
            numeros[i2]=0;
        }
        numeros[y]=x;
        numeros[y-4]=0;
        numeros[y+4]=0;
        numeros[y+8]=0;
    }
    if(x>8&&x<=12)
    {
    for(i2=8;i2<12;i2++)
        {
            if(numeros[i2]==x)
            {
                y=i2;
            }
            numeros[i2]=0;
        }
        numeros[y]=x;
        numeros[y-4]=0;
        numeros[y-8]=0;
        numeros[y+4]=0;
    }
    if(x>12&&x<=16)
    {
        for(i2=12;i2<16;i2++)
        {
            if(numeros[i2]==x)
            {
                y=i2;
            }
            numeros[i2]=0;
        }
        numeros[y]=x;
        numeros[y-4]=0;
        numeros[y-8]=0;
        numeros[y-12]=0;
    }
    tres();
}
void cinco (void)
{
    int c;
    contador=0;
    while(contador<4)
    {
            cuatro();
            contador++;
    }
    cout<<"Usted eligio estos numeros"<<endl;
    for(c=0;c<4;c++)
    {
        cout<<"  "<<nums[c]<<endl;
    }
    cout<<"La suma da: "<<suma<<endl;
}
main (void)
{
    char resp;
    resp='s';
    while (resp=='s'||resp=='S')
    {
        system("cls");
        uno();
        cout<<endl<<"Desea hacerlo de nuevo?"<<endl;
        cin>>resp;
    }
}
