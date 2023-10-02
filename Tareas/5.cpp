#include <iostream>
#include<vector>
#include<stdio.h>
#include<windows.h>
using namespace std;
vector<string>captura(void);
vector<string>burbuja(vector<string>&a);
void imprimir(vector<string>&a);
int main ()
{
    char resp;
    resp='s';
    while(resp=='s')
    {
    	system("cls");
        vector<string>a;
     a=captura();
     a=burbuja(a);
     imprimir(a);

     cout<<"otra ves? s/n"<<endl;
     cin>>resp;
     cout<<endl;
    }
}
vector<string>captura(void)
{
    int x,i;
    vector <string>a(10);
    cout<<endl<<"Cuantos nombres: "<<endl;
    cin>>x;

    a.resize(x);
    for(i=0;i<a.size();i++)
    {
        cout<<"Introduzca el nombre "<<i<<endl;
        fflush(stdin);
        getline(cin,a[i]);
    }
    return(a);
}
vector<string>burbuja(vector<string>&a)
{

    int i,j;
    string aux;
    for(j=0;j<a.size()-1;j++)
    {
        for(i=0;i<a.size()-1;i++)
        {
            if(a[i]>a[i+1])
            {
                aux=a[i];
                a[i]=a[i+1];
                a[i+1]=aux;
            }
        }
    }
    return(a);
}
void imprimir(vector<string>&a)
{
    int i;
    cout<<endl<<"ordenados:"<<endl;
    for(i=0;i<a.size();i++)
    {
        cout<<a[i]<<endl;;
    }
}
