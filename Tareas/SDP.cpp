#include <iostream>
#include <time.h>
#include <windows.h>
using namespace std;
void I (void);
void II (void);
void III (void);
int a[1000000];
char b[1000][1000];
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
        cout<<endl<<"Desea repetirlo? S/N ";
        cin>>r;
  }
}
void I (void)
{
    cout<<endl<<"Sopa de letras";
}
void II (void)
{
    int i,it,ite,c,n,m;
    m=1000000;
    srand(time(NULL));
    for (i=0;i<m;i++)
    {
        n=97+rand()%(126-1);
        a[i]=n;
    }
    c=0;
    for(it=0;it<1000;it++)
    {
        for(ite=0;ite<1000;ite++)
        {
            b[it][ite]=a[c];
            c++;
        }
    }

}
void III (void)
{
    int it,ite;
    cout<<endl<<endl;
    for(it=0;it<1000;it++)
    {
        for(ite=0;ite<1000;ite++)
        {
            cout<<b[it][ite];;
        }
    }
}
