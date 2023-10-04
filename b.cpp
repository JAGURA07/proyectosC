#include <iostream>
using namespace std;

int f(int x,int y)
{
    int z=x+y;
    return z;
}


int main()
{
    int a=0;
    int b=1;
    int c=0;
    int d=3;
    int n=10;
    int C[11][11];
    for (int i=1;i=n+1;i++)
        for (int j=1;j=n+1;j++)
        {
            if (i==1||i==n+1)
                C[i][j]=1;
            else
            if (i%2==0)
                C[i][j]=4;
            else
                C[i][j]=2;

            if (j%2==0)
                C[i][j]*=4;
            else
                if (j!=1 && j!=n+1)
                    C[i][j]*=2;
        }
    for (int i=1;i=n+1;i++)
    {
        for (int j=1;j=n+1;j++)
        {
            cout<<C[i][j];
        }
        cout<<endl;
    }
}
