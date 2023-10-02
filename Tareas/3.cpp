#include<iostream>
#include<vector>
#include <windows.h>
using namespace std;
int captura (void);
vector<int> convierte(int n);
int captura (void){
int n;
cout<<"Introduce el numero decimal "<<endl;
cin>>n;
return (n);
}
vector<int> convierte(int n){
    vector<int>A(100,1);
int t=n;
    int i=0;
    while(t/2>=1){
        A[i]=t%2;
        t=t/2;
        i++;
    }
 A[i]=1;
A.resize(i);
return (A);
    }

main(void){
	char resp;
	resp='s';
	while(resp=='s')
	{
	system("cls");
    int r;
    vector<int>B(100,1);
    r=captura();
B=convierte(r);
cout<<"Binario: "<<endl;
for(int o=B.size();o>=0;o--){
    cout<<B[o];
}
    cout<<endl<<"otra ves? s/n"<<endl;
    cin>>resp;
    cout<<endl;
	}
}
