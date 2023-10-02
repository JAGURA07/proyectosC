#include <iostream>
#include <windows.h>
#include <vector>
using namespace std;
void I (void);
void II (void);
int x,y,z;
vector <int> A (255,0);
int main ()
{
 char r;
 r='s';
 while (r=='s'||r=='S')
 {
     I ();
     II();
     cout<<endl<<"Quiere hacerlo de nuevo? s/n"<<endl;
     cin>>r;
     system ("cls");
 }
}
void I (void)
{
    y=0;
    cout<<"Vote por su candidato (1,2 y 3)"<<endl;
    do
    {
        cin>>A[y];
        cout<<"Va"<<endl;
        y++;
        z=y;
    }
    while (x>=0);

}
void II (void)
{
    int i,a=0,b=0,c=0,d;
    float e,f,g;
    for (i=0;i<=z;i++)
    {
           if (A[i]==1)
        {
            a++;
        }
        if (A[i]==2)
        {
            b++;
        }
        if (A[i]==3)
        {
            c++;
        }
    }
    d=a+b+c;
    e=a/d;
    f=b/d;
    g=c/d;
    system ("cls");
    cout<<endl<<"Votos del primer candidato :"<<a<<endl;
    cout<<"porcentaje "<<e<<endl;
    cout<<endl<<"Votos del segundo candidato :"<<b<<endl;
    cout<<"porcentaje "<<f<<endl;
    cout<<endl<<"Votos del tercer candidato :"<<c<<endl;
    cout<<"porcentaje "<<g<<endl;
}
