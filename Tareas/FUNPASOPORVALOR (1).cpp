/* Autor: Bucio Ibarra Aldo Misael*/
#include<stdio.h>
//int main(int argc, char **argv)


int power(int a,int b); //función prototipo
int multiplicacion(int a,int b); //función prototipo
int main(int argc, char *argv[]){
    printf("Este programa explica porque Jafet es puto y no fue a clase conmigo para aprender funciones\n");
    int a=2;
    int b=5;
    int c;
    c= power(a,b); //llamas función y pasas por parametros por valor
    printf("resultado %d",c);
    return 0;
}
int power(int x, int y){
    int base=x;
    int exponente=y;
    int potencia;
    potencia=multiplicacion(base,exponente);
    return potencia;
}
int multiplicacion(int w, int z){
    int i,aux=1;
    int producto=0;
    for (i=0;i<z;i++){
        aux= w*aux;

    }
    producto=aux;
    return producto;//devuelvo valor a funcion power
}
