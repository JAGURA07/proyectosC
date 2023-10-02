#include<stdio.h>
#include<time.h>
#include<vector>
#include<iostream>
#include<stdlib.h>
#include<windows.h>
using namespace std;
void captura(void);
void imprime(int a[3][3]);

main(void)
{
    char resp;
    resp='s';
    while(resp=='s')
    {
    	system("cls");
        captura();
        cout<<endl<<"otra?"<<endl;
        cin>>resp;
    }
}
void captura(void)
{
    int a[3][3];
    int ini,fin,i,j,n;
    ini=1;
    fin=9;
    srand(time(NULL));
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            n=rand()%10;
            a[i][j]=n;
        }
    }
    imprime(a);

}
void imprime(int a[3][3])
{
    int i,j,x=0;
    int y=0,z=0,e=0,f=0,g=0,h=0,l=0;

 for(i=0;i<3;i++){

    for(j=0;j<3;j++)
        {
        cout<<a[i][j]<<"\t";

    if(j==0)
    {
        x=x+a[i][j];
    }
    if(j==1)
    {
        y=y+a[i][j];

    }
    if(j==2)
    {
        z=z+a[i][j];

    }
       if(i==0)
    {
        e=e+a[i][j];

    }
       if(i==1)
    {
        f=f+a[i][j];

    }
       if(i==2)
    {
        g=g+a[i][j];

    }
    if(i==j)
 {
    h=h+a[i][j];
 }
  if(i!=j)
 {
    l=l+a[i][j];
 }

    }
    cout<<endl;
}
cout<<endl;
 cout<<"suma de la columna 0: "<<x<<endl;
 cout<<"suma de la columna 1: "<<y<<endl;
 cout<<"suma de la columna 2: "<<z<<endl;
 cout<<"suma de la fila 0: "<<e<<endl;
 cout<<"suma de la fila 1: "<<f<<endl;
 cout<<"suma de la fila 2: "<<g<<endl;
 cout<<"suma de la diagonal: "<<h<<endl;

}
