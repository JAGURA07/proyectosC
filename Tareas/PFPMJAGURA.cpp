#include <iostream>
#include <string>
#include <time.h>
#include <stdio.h>
#include <windows.h>
#include<vector>
#include<cstdlib>
using namespace std;
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
       cout<<endl<<"Desea repetir el programa? S/N"<<endl;
       cin>>r;
   }
}
void I (void)
{
    int x,y,i,j,z=0,a;
    cout<<"introduzca cuantos numeros quiere: ";
    cin>>y;
    vector<int>v(y);
    vector<int>n(y);
    for(i=0;i<y;i++)
    {
        cout<<"Ingrese el numero"<<i+1<<": ";
        cin>>v[i];
        for(j=i-1;j>=0;j--)
        {
            if(v[i]==v[j])
            {
                n[j]++;
                if(n[j]>z)
                {
                  z=i;a=n[j];
                }
            }
        }
    }
    cout<<endl<<"La moda es: "<<v[z]<<endl;
}
