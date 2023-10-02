#include<stdio.h>
#include<time.h>
#include<vector>
#include<iostream>
#include<stdlib.h>
using namespace std;
void captura(void);
void imprime(int a[5][5]);

main(void)
{
    char resp;
    resp='s';
    while(resp=='s')
    {
    	system("cls");
        captura();
        cout<<endl<<"otra?"<<endl;
        cin>>resp;
    }
}

void captura(void)
{
    int a[5][5];
    int ini,fin,i,j,n;
    ini=1;
    fin=100;
    srand(time(NULL));
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            n=rand()%100;
            a[i][j]=n;
        }
    }
    imprime(a);

}
void imprime(int a[5][5])
{
    int i,j;
    int x;
    cout<<"matriz original"<<endl;
 for(i=0;i<5;i++){

    for(j=0;j<5;j++){
        cout<<a[i][j]<<"\t";
    }
    cout<<endl;
 }
 cout<<"matriz traspuesta"<<endl;
 for(i=0;i<5;i++){

    for(j=0;j<5;j++){
        cout<<a[j][i]<<"\t";
    }
    cout<<endl;
 }



}
