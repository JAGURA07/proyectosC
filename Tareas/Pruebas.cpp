#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void I (void);
void II (void);
void III (void);
int x[9],a[3][3];
int main()
{
    char r;
    r='s';
    while (r=='s'||r=='S')
    {
        III();
        cout<<endl<<"Desea repetir? s/n"<<endl;
        cin>>r;
    }
}
void I (void)
{
    int y,z,i,it,c=0;
    srand(time(NULL));
        for(i=0;i<9;i++)
        {
            y=(1+rand()%9);
            z=0;
            while(z<i)
            {
                if(y!=x[z])
            {
                z++;
            }
            else
            {
                y=(1+rand()%9);
                z=0;
            }
        }
        x[i]=y;
    }
        for(i=0;i<3;i++)
    {
        for(it=0;it<3;it++)
        {
            a[i][it]=x[c];
            c++;
        }
    }
}
void II (void)
{
    int it,ite;
    for(it=0;it<3;it++)
    {
        for(ite=0;ite<3;ite++)
        {
            if(ite%3==0)
            {
                cout<<endl;
            }
            cout<<" "<<a[it][ite];
        }
    }
}
void III (void)
{
        do
        {
            I();
        }
        while (a[0][0]+a[1][0]+a[2][0]==15);
        II();
}
