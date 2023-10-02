#include <iostream>
#include <windows.h>
#include <vector>
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
     I();
     II();
     III();
     cout<<endl<<"Desea hacerlo de nuevo?"<<endl;
     cin>>r;
     system ("cls");
    }
}
void I (void)
{
    vector <int> A(255,0);
    int y.x;
    y=0;
    while (x!=-1)
    {
         cout<<"Introduzca el valor "<<y<<endl;
         cin>>A[y];
         x=A[y];
         y=y+1;
    }
}
void II (void)
{
    int i,it,z,a;
    for(i=0;i<=y-1;i++)
    {
        for(it=0;it<=y-2;it++)
        {
            if (A[i]>A[i+1])
            {
                a=A[i];
                z=A[i+1];
                A[i+1]=a;
                A[i]=z;
            }
        }
    }
}
void III (void)
{
    int ite;
    for (ite=0;ite<=y-1;ite++)
    {
        cout<<" "<<A[ite];
    }
}
