using namespace std;
#include<iostream>
#include<stdlib.h>

int numeros[4][4];
int validacion[4][4]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
void imprime(void);
void revisa(int res);
void presentacion(void);
int suma=0,nums[3],aux_nums=0;
main(void){
    char re;
    re='s';
    while (re=='s'||re=='S')
    {
        system("cls");
     presentacion();
     imprime();
    int r;
    while(suma<34){
    cout<<"\nselecciona un numero"<<endl;
    cin>>r;

    revisa(r);
    system("cls");
    imprime();
}
cout<<"Los numeros que escogiste fueron:"<<endl;
nums[3]=nums[3]-1;
for(int y=0;y<4;y++){
cout<<nums[y]<<endl;
}
cout<<"La suma de estos numeros es: "<<suma<<endl;
cout<<endl<<"Quiere repetir? S/N?"<<endl;
cin>>re;
    }
}
void presentacion(void){
    int i,it,c=1;
cout<<"\t \t \t Bienvenido"<<endl;
cout<<"Este juego se llama =La suma magica de 34= \n \n "<<endl;
cout<<"Instrucciones: \nDeberas escoger 4 numeros de los que se mostraran a continuacion \nlos cuales al final siempre sumaran 34,sin importar que numeros escogas.\n!!!No debes repetir numeros!!! \n \n"<<endl;
for(i=0;i<=3;i++)
{
    for(it=0;it<=3;it++)
    {
        numeros[i][it]=c;
        c++;
    }
}
}


void imprime (void){

cout<<numeros[0][0]<<" |"<<numeros[0][1]<<" |"<<numeros[0][2]<<" |"<<numeros[0][3]<<endl;
cout<<"-----------"<<endl;
cout<<numeros[1][0]<<" |"<<numeros[1][1]<<" |"<<numeros[1][2]<<" |"<<numeros[1][3]<<endl;
cout<<"-----------"<<endl;
cout<<numeros[2][0]<<" |"<<numeros[2][1]<<"|"<<numeros[2][2]<<"|"<<numeros[2][3]<<endl;
cout<<"-----------"<<endl;
cout<<numeros[3][0]<<"|"<<numeros[3][1]<<"|"<<numeros[3][2]<<"|"<<numeros[3][3]<<endl;
}

void revisa(int res){
int x;
if(res==numeros[0][0] && validacion[0][0]!=1){
for(x=0;x<4;x++){
    numeros[0][x]=0;
    numeros[x][0]=0; }
    numeros[0][0]=res;

    validacion[0][0]=1;

    suma += res;
    nums[aux_nums] = res;
    aux_nums++;

    }

if(res==numeros[0][1] && validacion[0][1]!=1){
    for(x=0;x<4;x++){
    numeros[0][x]=0;
    numeros[x][1]=0; }
    numeros[0][1]=res;

    validacion[0][1]=1;

    suma += res;
    nums[aux_nums] = res;
    aux_nums++;
}

if(res==numeros[0][2] && validacion[0][2]!=1){
    for(x=0;x<4;x++){
    numeros[0][x]=0;
    numeros[x][2]=0; }
    numeros[0][2]=res;

    validacion[0][2]=1;

    suma += res;
    nums[aux_nums] = res;
    aux_nums++;
}

if(res==numeros[0][3] && validacion[0][3]!=1){
    for(x=0;x<4;x++){
    numeros[0][x]=0;
    numeros[x][3]=0; }
    numeros[0][3]=res;

    validacion[0][3]=1;

    suma += res;
    nums[aux_nums] = res;
    aux_nums++;
}


if(res==numeros[1][0] && validacion[1][0]!=1){
    for(x=0;x<4;x++){
    numeros[1][x]=0;
    numeros[x][0]=0; }
    numeros[1][0]=res;

    validacion[1][0]=1;

    suma += res;
    nums[aux_nums] = res;
    aux_nums++;
}

if(res==numeros[1][1] && validacion[1][1]!=1){
    for(x=0;x<4;x++){
    numeros[1][x]=0;
    numeros[x][1]=0; }
    numeros[1][1]=res;

    validacion[1][1]=1;

    suma += res;
    nums[aux_nums] = res;
    aux_nums++;
}

if(res==numeros[1][2] && validacion[1][2]!=1){
    for(x=0;x<4;x++){
    numeros[1][x]=0;
    numeros[x][2]=0; }
    numeros[1][2]=res;

    validacion[1][2]=1;

    suma += res;
    nums[aux_nums] = res;
    aux_nums++;
}

if(res==numeros[1][3] && validacion[1][3]!=1){
    for(x=0;x<4;x++){
    numeros[1][x]=0;
    numeros[x][3]=0; }
    numeros[1][3]=res;

    validacion[1][3]=1;

    suma += res;
    nums[aux_nums] = res;
    aux_nums++;
}

if(res==numeros[2][0] && validacion[2][0]!=1){
    for(x=0;x<4;x++){
    numeros[2][x]=0;
    numeros[x][0]=0; }
    numeros[2][0]=res;

    validacion[2][0]=1;

    suma += res;
    nums[aux_nums] = res;
    aux_nums++;
}

if(res==numeros[2][1] && validacion[2][1]!=1){
    for(x=0;x<4;x++){
    numeros[2][x]=0;
    numeros[x][1]=0; }
    numeros[2][1]=res;

    validacion[2][1]=1;

    suma += res;
    nums[aux_nums] = res;
    aux_nums++;
}

if(res==numeros[2][2] && validacion[2][2]!=1){
    for(x=0;x<4;x++){
    numeros[2][x]=0;
    numeros[x][2]=0; }
    numeros[2][2]=res;

    validacion[2][2]=1;

    suma += res;
    nums[aux_nums] = res;
    aux_nums++;
}

if(res==numeros[2][3] && validacion[2][3]!=1){
    for(x=0;x<4;x++){
    numeros[2][x]=0;
    numeros[x][3]=0; }
    numeros[2][3]=res;

    validacion[2][3]=1;

    suma += res;
    nums[aux_nums] = res;
    aux_nums++;
}

if(res==numeros[3][0] && validacion[3][0]!=1){
    for(x=0;x<4;x++){
    numeros[3][x]=0;
    numeros[x][0]=0; }
    numeros[3][0]=res;

    validacion[3][0]=1;

    suma += res;
    nums[aux_nums] = res;
    aux_nums++;
}

if(res==numeros[3][1] && validacion[3][1]!=1){
    for(x=0;x<4;x++){
    numeros[3][x]=0;
    numeros[x][1]=0; }
    numeros[3][1]=res;

    validacion[3][1]=1;

    suma += res;
    nums[aux_nums] = res;
    aux_nums++;
}

if(res==numeros[3][2] && validacion[3][2]!=1){
    for(x=0;x<4;x++){
    numeros[3][x]=0;
    numeros[x][2]=0; }
    numeros[3][2]=res;

    validacion[3][2]=1;

    suma += res;
    nums[aux_nums] = res;
    aux_nums++;
}

if(res==numeros[3][3] && validacion[3][3]!=1){
    for(x=0;x<4;x++){
    numeros[3][x]=0;
    numeros[x][3]=0; }
    numeros[3][3]=res;

    validacion[3][3]=1;

    suma += res;
    nums[aux_nums] = res;
    aux_nums++;
}
}
