#include <iostream>
#include <vector>
#include <windows.h>
using namespace std;
vector <int> A(255,0);
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
        cout<<endl<<"Desea hacerlo de nuevo? s/n"<<endl;
        cin>>r;
    }
}
void I (void)
{
    int i;
        for(i=0;i<15;i++)
        {
            cout<<"Ingrese el numero "<<i<<" a ordenar"<<endl;
            cin>>A[i];
        }
}
void II (void)
{
    int it,ite,iter,x,a,b;
    for(it=0;it<5;it++)
    {
        for(ite=it+1;ite<5;ite++)
        {
            if(A[ite]<A[it])
            {
                A[ite]=a;
                A[it]=b;
                A[ite]=b;
                A[it]=a;
            }
        }
    }
    for(iter=0;iter<15;iter++)
    {
        cout<<" ,"<<A[iter];
    }
}
