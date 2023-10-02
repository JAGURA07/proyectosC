#include<iostream>
#include<time.h>
#include <stdlib.h>
#include<windows.h>
using namespace std;
void almacena (void);
void imprime (int num[5][5]);
void almacena (void){
 int i,j,numeros[5][5],ini,fin,num;
 ini=1;
 fin=100;

 srand(time(NULL));
   for(i=0;i<5;i++){
    for(j=0;j<5;j++){
            num=rand()%100;
        numeros[i][j]=num;
    }
   }
   imprime(numeros);
 }

 void imprime (int num[5][5]){
 int i,j;
 for(i=0;i<5;i++){

    for(j=0;j<5;j++){
        cout<<num[i][j]<<"\t";
    }
    cout<<endl;
 }

 }

 main(void){
 	char resp;
 	resp='s';
 	while(resp=='s')
 	{
 	system("cls");
 almacena();
 cout<<endl;
 cout<<"otra ves? s/n"<<endl;
 cin>>resp;
 }}
