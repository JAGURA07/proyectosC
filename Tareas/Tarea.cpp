using namespace std;
#include <iostream>
#include <stdio.h>
#include <math.h>
void I (void);
void II (void);
void III (void);
void IV (void);
void V (void);
int x,y,z,b[255];
main (void)
{
    char r;
    r='s';
    while (r=='s'||r=='S')
    {
        I();
        II();
        //III();
        IV();
        //V();
        cout<<"Quiere hacerlo de nuevo?"<<endl;
        cin>>r;
    }
    return 0;
}
void I (void)
{
    cout<<"Elije el inicio"<<endl;
    cin>>x;
    cout<<"Elije el final"<<endl;
    cin>>y;
    cout<<"Elija la secuencia"<<endl;
    cin>>z;
}
void II (void)
{
    int i;
    for (i=x;i<=y; i=i+z)
    {
        b[i]=i;
    }
}
void III (void)
{
    int it;
    for (it=x; it<=y; it++)
    {
        if (b[it]>0)
        {
                   cout<<" "<<b[it]<<endl;
        }
    }
}
void IV (void)
{
 int ite,iter,p,a,b,c;
    for (ite=x; ite<=y; ite++)
    {
        b[ite]=a;
        if (a>0)
        {
            for (iter=1;iter<=y;iter++)
            {
                b=a%iter;
                cout<<" "<<b<<endl;
                if (c==0)
                {
                    p++;
                }
            }
            if(p==2)
            {
                cout<<" "<<a<<endl;
            }
        }
    }
}
/*void V (void)
{
    cout<<"sup, tho"<<endl;
}
*/
