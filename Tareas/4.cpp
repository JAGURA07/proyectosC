 #include <iostream>
#include <vector>
#include <time.h>
#include <stdlib.h>

using namespace std;

int suma (vector<int>&A);
vector <int> almacena (void);


vector <int> almacena(void){
int i,n,ini,fin;
vector <int> A(100,0);
cout<<"cuantos numeros deseas"<<endl;
cin>>n;
A.resize(n);
ini=1;
fin=100;
srand(time(NULL));
for (i=0;i<A.size();i++){
    A[i]=rand()%100;
}
int k,j;

for(int w=1;w<n;w++)
    {
        for(j=0;j<n-w;j++)
        {
            if(A[j]>A[j+1])
            {k=A[j+1]; A[j+1]=A[j]; A[j]=k;}
        }
    }



return (A);

}


int suma (vector<int> &A){

int i,sum;
sum=0;
for(i=0;i<A.size();i++){
    sum=sum+A[i];
}
return (sum);
}



main(void){
	char resp;
	resp='s';
	while(resp=='s')
	{
		system("cls");
int i;
int p,j,n,aux;
vector<int>B(100,0);
B=almacena();
cout<<"los numeros aleatorios son: "<<endl;





for (i=0;i<B.size();i++){
    cout<<B[i]<<" ";
}
cout<<endl<<endl;
cout<<"La suma de los numeros es: "<<suma(B);

cout<<endl;
cout<<"otra ves? s/n"<<endl;
cin>>resp;

}
}

