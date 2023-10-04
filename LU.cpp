#include<iostream>
#include <iomanip>

using namespace std;

void LU(int n)
{
    double A[n][n]={0},L[n][n]={0},U[n][n]={0},aux;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>A[i][j];
            if(i>j)
              U[i][j]=0;
            else
                if(i==j)
                    L[i][j]=1;
            else
              L[i][j]=0;
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            aux=0;
            if(i<=j)
            {
                for(int k=0;k<n;k++)
                {
                    if(k!=i)
                        aux=aux+L[i][k]*U[k][j];
                    else
                        U[i][j]=A[i][j]-aux;
                }
            }
        }
    }

    cout<<"\nL=\n\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<setprecision(2)<<L[i][j]<<"    ";
        cout<<endl;
    }

    cout<<"\nU=\n\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<setprecision(2)<<U[i][j]<<"    ";
        cout<<endl;
    }
}

int main()
{
    int n;
    cin>>n;

    LU(n);
}
