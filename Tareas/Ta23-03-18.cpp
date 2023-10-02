#include <iostream>
#include <windows.h>
#include <vector>
using namespace std;
int I (void);
int x,y,z;
int main ()
{
    char r;
    r='s';
    while (r=='s'||r=='S')
    {
        I();
        cout<<endl<<"Quiere hacerlo de nuevo? s/n"<<endl;
        cin>>r;
    }
}
    int I (void)
{
     int x,i=0,j=0;
    vector <int> bin(100,0);
      cout<<"dame un numero: "<<endl;
      cin>>x;
    for(i=100;i>0;i--)
      {
           bin[i]=x%2;
           x=x/2;
      }
     for(i=1;i<=100;i++)
      {
           if(bin[i]==1)
           {
                for(j=i;j<=100;j++)
                {
                     cout<<bin[j];
                }
           }
      }
}
