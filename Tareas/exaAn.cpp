#include <iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;
int I (int A[2]);
int IV (int B);
int II (int a4[2]);
int III (int a2);
int main (int a4[2], int a5, int a2, int A, int B)
{
    int a1;
    system("cls");
    a4[2]=I(A[2]);
    a2= II(a4);
    a1= III(a2);
}
int I (int A[2])
{
    int i;
    cout<<endl<<"Ingrese 2 numeros"<<endl;
    for (i=0;i<2;i++)
    {
        cin>>A[i];
        cout<<endl;
    }
    return A[2];
}
int II (int A[2])
{
    return A[0]+A[1];
}
int III (int a2)
{
    cout<<endl<<"El resultado es: "<<a2;
}
