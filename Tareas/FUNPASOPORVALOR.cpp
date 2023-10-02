/* Autor: Bucio Ibarra Aldo Misael*/
#include<stdio.h>
//int main(int argc, char **argv)


int suma(int a,int b); //función prototipo
int main(int argc, char *argv[]){
    printf("Este programa explica porque Jafet es puto y no fue a clase conmigo para aprender funciones\n");
    int a=1;
    int b=2;
    int c;
    c= suma(a,b); //llamas función y pasas por parametros por valor
    printf("resultado %d",c);
    return 0;
}
int suma(int x, int y){
 return x+y;
}
