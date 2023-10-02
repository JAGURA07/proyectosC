using namespace std;
#include <conio.h>
#include <iostream>
#include <stdlib.h>
int x[255]{0};
void I(void);
void II(void);

main(void) {
    char r;
    r='s';
    while (r=='s' || r=='S')
    {
        system("CLS");
        I();
        II();
        cout<<"\nQuire mas? s/n"<<endl;
        r=getch();
    }
  getch();
}

void I(){
    cout<<"Ingrese un numero"<<endl;
    cin>>x[255];
}

void II(){
    if (x[255]>0) {
    do {
        if(x[255]%2==0) {
            x[255]/=2;
            }
        else {
            x[255]*=3;
            x[255]+=1;
            }
   cout<<  x[255]<<endl;
   }
    while(x[255]!=1);
    getch();
}
else {
    cout<<"Un numero entero positivo krnal :v"<<endl;
}
}

