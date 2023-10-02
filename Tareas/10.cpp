#include<iostream>
#include<time.h>
#include<windows.h>
#include<stdlib.h>
using namespace std;
int x,y,a,z[100][100];
void I (void);
void II (void);
void III (void);
int main ()
{
    char r;
    r='s';
    while (r=='s'||r=='S')
    {
        system("cls");
        I();
        II();
        III();
        cout<<endl<<"Desea repetir? S/N"<<endl;
        cin>>r;
        cout<<endl;
    }
}
void I (void)
{
    cout<<endl<<"Numero de filas: ";
    cin>>x;
    cout<<endl<<"Numero de ileras: ";
    cin>>y;
}
void II (void)
{
    int i,it;
   srand(time(NULL));
   for (i=0;i<x;i++)
   {
       for (it=0;it<y;it++)
       {
           z[i][it]=rand()%100;
       }
   }
   for (i=0;i<x;i++)
   {
       for (it=0;it<y;it++)
       {
           cout<<z[i][it]<<"\t";
       }
       cout<<endl;
   }
}
void III (void)
{
    int c,ite,iter;
        cout<<endl<<"Numero a contar: ";
    cin>>a;
    c=0;
    for (ite=0;ite<x;ite++)
   {
       for (iter=0;iter<y;iter++)
       {
          if (z[ite][iter]==a)
          {
              c=c+1;
          }
       }
   }
   cout<<endl<<"La cuenta es: "<<c;
}
