#include <iostream>//Libreria principal de c++
#include <fstream>//Pa´los archivos
#include <string>//Para los sting
#include <conio.h>//para el getch()
#include <stdio.h>
#include <windows.h>//para los SYSTEM
#include <stdlib.h>
 using namespace std;
 fstream mundi("MUNDIAL.txt");//Declaramos el txt, no sé si sirva de algo que este aqui arriba
 struct partido//La estructura para almacenar todos los datos del partido
 {
    string resultado,nombre,nombre1,campeon1[10],campeon[10],campeonte[10],campeonte1[10],campeonp[10],campeonp1[10],ganador;
    int goles, goles1,goleste,goleste1,golesp,golesp1,minuto1[10],minuto[10];

 };
 void uno (void);
 void dos (void);
 void tres (void);
 void grupos (void);
 void octavos (void);
 void cuartos (void);
 void semi (void);
 void ultima (void);
 char respuesta;
 int main ()
 {
    int x=0;//x inicia en 0 por si las dudas
    char r;//variable de control para repetir el programa
    r='s';//iniciamos r en 's' para que el while se eejecute al menos la primera vez
    while (r=='s'||r=='S')
        {
            system("cls");//Borrar pantalla
            cout<<endl<<"1| Hacer registro (Solo administrador)"<<endl<<"------------------------------"<<endl<<"2| Buscar partido"<<endl<<"------------------------------"<<endl<<"3| Mostrar todos los partidos"<<endl<<"------------------------------"<<endl<<"0| para salirts"<<endl<<"------------------------------"<<endl<<endl;//texto en tabla
            cin>>x;//respuesta almacenada en x
            switch (x)//switch que trabaja con el valor de x
            {
            case 1:
                system("cls");//borra pantalla
                uno();//llama a la funcion uno
                system("cls");//borra pantalla
                cout<<endl<<"Desea regressar a menu? S/N"<<endl;
                cin>>r;//Para repetir el programa
                break;
            case 2:
                system("cls");//borra pantalla
                dos();//Llama a la funcion 2
                cout<<endl<<"Desea regresar a menu? S/N"<<endl;
                cin>>r;//Para repetir el programa
                break;
            case 3:
                system("cls");//Borra pantalla
                tres();//Llama a la funcion 3
                cout<<endl<<"Desea regresar a menu? S/N"<<endl;
                cin>>r;//Para repetir el programa
                break;
            case 0://Para terminar el programa
                system("cls");
                cout<<endl<<"Gracias.Bai.";
                r='n';//Valua r en 'n' para que el while se detenga
                break;
            default://Por si escribe otra cosa que no este en las opciones
                system("cls");
                cout<<endl<<"Elije un numero valido please"<<endl<<endl;
                r='s';
                break;
            }
        }
 }
 void uno (void)
 {
    string nombre;//Para nombre del usuario
    int c,i=0;//variables de control para metodos repetitivos y switch
    char re,res,frase[20];
    cout<<endl<<"Nombre del usuario: ";
    fflush(stdin);//limpia buffer
    getline (cin,nombre);//Almacena en string nombre
    cout<<endl<<"Ingrese password: ";
    cout.flush();//limpia
    do
    {
        frase[i] = (unsigned char)getch();//Almacena pero no muestra en pantalla
        if(frase[i]!=8)
        {
            cout<<'*';//Por cada vez que teclees, muestra un asterisco
            i++;//Contador para el arreglo
        }
        else if(i>0)//Por si el usuario decide borrar
        {
            cout<<(char)8<<(char)32<<(char)8;
            i--;//Para el arreglo
        }
        cout.flush();//limpia
        }
        while(frase[i-1]!=13);
        frase[i-1] = NULL;
        if(frase[0]=='m'&&frase[1]=='a'&&frase[2]=='r'&&frase[3]=='i'&&frase[4]=='m'&&frase[5]=='a'&&frase[6]=='l'&&frase[7]=='i')//contraseña almacenada en el vector frase
        {
            res='s';//Para iniciar el while
            while (res=='s')
            {
                system("cls");//Borra pantalla
                cout<<endl<<"1.- Fase de grupos"<<endl<<"2.- Octavos"<<endl<<"3.- Cuartos"<<endl<<"4.- Semi finales"<<endl<<"5.- Final"<<endl;//texto
                cin>>c;//almacena resouesta en c
                switch (c)//switch trabaja con c
                {
                case 1:
                    grupos ();//Llama al void grupos
                    cout<<endl<<"Desea registrar otro partido? S/N";
                    cin>>res;//Para repetir el programa
                    break;
                case 2:
                    octavos ();//Llama al void octavos
                    cout<<endl<<"Desea registrar otro partido? S/N";
                    cin>>res;//Para repetir el programa
                    break;
                case 3:
                    cuartos ();//Llama al void cuartos
                    cout<<endl<<"Desea registrar otro partido? S/N";
                    cin>>res;//Para repetir el programa
                    break;
                case 4:
                    semi ();//Llama al void semi
                    cout<<endl<<"Desea registrar otro partido? S/N";
                    cin>>res;//Para repetir el programa
                    break;
                case 5:
                    ultima ();//Llama al void ultima
                    cout<<endl<<"Desea registrar otro partido? S/N";
                    cin>>res;//Para repetir el programa
                    break;
                case 6://Para terminar de registrar
                    system ("cls");//Borra pantalla
                    cout<<endl<<"Gracias. Bai";
                    res='n';//Res valuado en 'n' para detener el while
                    break;
                default://Por si elije una opcion que no este
                    res='s';
                    break;
                }
            }
        }
    }
 void dos (void)//Funcion para buscar un partido
 {
    fstream mundi;//Metodo de entrada para el archivo
    char b,respu;
    string na,l1,l2,l3,l4,l5,l6;//variables para lineas a buscar en el archivo
    int res=0;//Variable de control para la busqueda
    system ("cls");//Limpiar pantalla
    cout<<endl<<"Partido: ";
    fflush(stdin);//Limpia buffer
    getline(cin,na);//Almacena la linea completa para buscarla en el txt
    if (!mundi.is_open())//Instruccion para abrir el archivo
    {
        mundi.open("MUNDIAL.txt", ios::in);//Abrir el archivo con instrucciones de lectura
    }
    while (getline(mundi, l1))//Obtiene la linea 1 del archivo
    {
        if(l1.find(na) != string::npos)//Busca y compara con la linea que tengas almacenada en na
            {
                cout<<endl<<l1<<endl;//Imprime la linea que coincida con la linea almacenada en na
                getline(mundi, l2);//Busca la linea de abajo
                cout<<endl<<l2;//La imprime
                getline(mundi, l3);//Busca la linea de abajo
                cout<<endl<<l3;//La imprime
                getline(mundi, l4);
                cout<<endl<<l4;
                getline(mundi, l5);
                cout<<endl<<l5;
                getline(mundi, l6);//Asi 6 veces
                cout<<endl<<l6;//Imprime 6 lineas porque es lo que mide cada registro
                system ("pause");//Para que se vea bonito
                res=1;//Indica que si encontro lo que buscaba
            }
        }
    if (res==0)//Indica que no encontro nada
    {
        cout<<endl<<na<<" no encontrado..."<<endl;//Texto
        cout<<endl<<endl<<"Desea buscar el partido en internet? S/N";
        cin>>respu;//Respuesta del usuario
        if (respu=='s')
        {
            system("start https://www.google.com/");//Abre en tu navegador predeterminado la ventana google.com
            res='s';//Para repetir el programa
        }
    }
 }
 void tres (void)//Imprime todos los registros que haya en el txt
{
    FILE *mundi= fopen("MUNDIAL.txt","r");//Instrucciones generales para imprimir todo el archivo
    int c;
    while ((c=fgetc(mundi))!= EOF)
    {
        putchar(c);
    }
    cout<<endl;
    system("pause");
    cout<<endl<<"Desea salir al menu? S/N"<<endl;
}
 void grupos (void)//Ese void es el unico distinto a los siguientes 4
 {
    ofstream mundi;//Archivo con instrucciones de escritura
    if(!mundi.is_open())//Instruccion para abrir el archivo
            {
                mundi.seekp(0,ios::end);//Lleva el apuntador al final del archivo
                mundi.open("MUNDIAL.txt", ios::app);//Abrir el doc. Con instrucciones de escritura
            }
    int it;
    partido x;
    system("cls");
    cout<<endl<<"Equipo 1: ";
    fflush(stdin);
    getline (cin,x.nombre);//Almacena el nombre del equipo 1
    cout<<endl<<"Equipo 2: ";
    fflush(stdin);
    getline (cin,x.nombre1);//Almacena el nombre del equipo 2
    system ("cls");//borra pantalla
    cout<<"-------------------------------------------------------------------";
    cout<<endl<<x.nombre<<"   vs   "<<x.nombre1;//Muestra ambos nombres
    cout<<endl<<"Cantidad de goles de "<<x.nombre<<": ";
    cin>>x.goles;//Indicar la cantidad de goles para controlar el for
    cout<<endl<<"Cantidad de goles de "<<x.nombre1<<": ";
    cin>>x.goles1;//Indicar la cantidad de goles para controlar el for
    if(x.nombre<x.nombre1)
    {
        x.ganador=x.nombre1;//Asigna ganador
    }
    if(x.nombre>x.nombre1)
    {
        x.ganador=x.nombre;//Asigna ganador
    }
    for (it=0;it<x.goles;it++)//Para registrar los nombres de quienes hayan metido gol y en qué minuto
    {
        cout<<endl<<"Gol "<<it+1<<" de"<<x.nombre<<" de: ";
        fflush(stdin);
        getline (cin,x.campeon[it]);//Campeon es variable para almacenar nombres
        cout<<endl<<"Minuto: ";
        cin>>x.minuto[it];//minuto es variable para almacenar el minuto del gol
    }
    for (it=0;it<x.goles1;it++)//Para registrar los nombres de quienes hayan metido gol y en qué minuto
    {
        cout<<endl<<"Gol "<<it+1<<" de "<<x.nombre1<<"de: ";
        fflush(stdin);
        getline (cin,x.campeon1[it]);//Campeon es variable para almacenar nombres
        cout<<endl<<"Minuto: ";
        cin>>x.minuto1[it];//minuto es variable para almacenar el minuto del gol
    }
    if(x.goles==x.goles1)//Para asignar si fue empate
    {
        cout<<endl<<"Empate!";
        x.ganador="Empate!";
    }
    cout<<endl<<"Resultado final: ";
    fflush(stdin);
    getline (cin,x.resultado);//Almacena el resultado final del partido en un texto breve
    cout<<endl<<"-------------------------------------------------------------------";
    cout<<endl<<"Desea guardar el partido? S/N ";
    cin>>respuesta;//Para guardar el registro
    if (respuesta=='s'||respuesta=='S')
    {
        mundi<<endl<<"************************************************";//Almacena en el archivo para separar entre registros
        mundi<<endl<<x.nombre<<"   VS   "<<x.nombre1;//Almacena ambos nombres con un "VS" en medio
        mundi<<endl<<endl<<"El ganador es: "<<x.ganador;//Almacena quien es el ganador o si es empate
        for (it=0;it<x.goles;it++)//Almacena el nombre y el minuto del gol
        {
            mundi<<endl<<x.nombre<<" Gol "<<it+1<<" de: "<<x.campeon[it];
            mundi<<endl<<"En el minuto: "<<x.minuto[it];
        }
        for (it=0;it<x.goles1;it++)//Almacena el nombre y el minuto del gol del otro equipo
        {
            mundi<<endl<<x.nombre1<<" Gol "<<it+1<<" de: "<<x.campeon[it];
            mundi<<endl<<"En el minuto: "<<x.minuto[it];
        }
        mundi<<endl<<"Resultado final: "<<x.resultado;//Almacena lo que haya escrito en el resultado final
         mundi<<endl<<"************************************************";//Almacena en el archivo para separar entre registros
    }
 }
 void octavos (void)
 {
     ofstream mundi;
    if(!mundi.is_open())
    {
        mundi.seekp(0,ios::end);
        mundi.open("MUNDIAL.txt", ios::app);
    }
    char resp;
    int it,ite,aux,aux1;
    partido x;
    system("cls");
    cout<<endl<<"Equipo 1: ";
    fflush(stdin);
    getline (cin,x.nombre);
    cout<<endl<<"Equipo 2: ";
    fflush(stdin);
    getline (cin,x.nombre1);
    system ("cls");
    cout<<"-------------------------------------------------------------------";
    cout<<endl<<x.nombre<<"   vs   "<<x.nombre1;
    cout<<endl<<"Cantidad de goles de "<<x.nombre<<": ";
    cin>>x.goles;
    cout<<endl<<"Cantidad de goles de "<<x.nombre1<<": ";
    cin>>x.goles1;
    if(x.nombre<x.nombre1)
    {
        x.ganador=x.nombre1;
    }
    if(x.nombre>x.nombre1)
    {
        x.ganador=x.nombre;
    }
    for (it=0;it<x.goles;it++)
    {
        cout<<endl<<"Gol "<<it+1<<" de"<<x.nombre<<" de: ";
        fflush(stdin);
        getline (cin,x.campeon[it]);
        cout<<endl<<"Minuto: ";
        cin>>x.minuto[it];
    }
    for (it=0;it<x.goles1;it++)
    {
        cout<<endl<<"Gol "<<it+1<<" de "<<x.nombre1<<"de: ";
        fflush(stdin);
        getline (cin,x.campeon1[it]);
        cout<<endl<<"Minuto: ";
        cin>>x.minuto1[it];
    }
    if(x.goles==x.goles1)
    {
        cout<<endl<<"Empate!";
        cout<<endl<<"TIEMPOS EXTRA";
        cout<<endl<<"Goles de cada equipo:";
        cout<<endl<<"Goles de "<<x.nombre<<": ";
        cin>>x.goleste;
        cout<<endl<<"Goles de "<<x.nombre1<<": ";
        cin>>x.goleste1;
        for(ite=0;ite<x.goleste;ite++)
        {
            cout<<endl<<"Gol "<<it+1<<" de "<<x.nombre<<" de: ";
            fflush(stdin);
            getline (cin,x.campeonte[ite]);
        }
        for(ite=0;ite<x.goleste1;ite++)
        {
                cout<<endl<<"Gol "<<it+1<<" de "<<x.nombre1<<" de: ";
                fflush(stdin);
                getline (cin,x.campeonte1[ite]);
        }
        resp='s';
        while (resp=='s'){
            if(x.goleste==x.goleste1)
            {
                cout<<endl<<"PENALES";
                cout<<endl<<"Cuantos penales cobro "<<x.nombre<<": ";
                cin>>aux;
                cout<<endl<<"Cuantos penales cobro "<<x.nombre1<<": ";
                cin>>aux1;
                if(aux==aux1)
                {
                    cout<<endl<<"No pueden haber quedado empate!";
                    resp='s';
                }
                else
                {
                    for(ite=0;ite<aux;ite++)
                    {
                        cout<<endl<<x.nombre<<" Cobro el penal "<<ite+1<<": ";
                        fflush(stdin);
                        getline (cin,x.campeonp[ite]);
                    }
                    for(ite=0;ite<aux1;ite++)
                    {
                        cout<<endl<<x.nombre1<<" Cobro el penal "<<ite+1<<": ";
                        fflush(stdin);
                        getline (cin,x.campeonp1[ite]);
                    }
                    if(aux>aux1)
                    {
                        cout<<endl<<endl<<x.nombre<<" ES CAMPEON!";
                        x.ganador=x.nombre;
                        resp='n';
                    }
                    if(aux<aux1)
                    {
                        cout<<endl<<endl<<x.nombre1<<" ES CAMPEON!";
                        x.ganador=x.nombre1;
                        resp='n';
                    }
                }
            }
            else
            {
                if(x.goleste>x.goleste1)
                {
                    cout<<endl<<endl<<x.nombre<<" ES CAMPEON!";
                    x.ganador=x.nombre;
                    resp='n';
                }
                if(x.goleste1>x.goleste)
                {
                    cout<<endl<<endl<<x.nombre1<<" ES CAMPEON!";
                    x.ganador=x.nombre1;
                    resp='n';
                }
            }
        }
        cout<<endl<<"Resultado final: ";
        fflush(stdin);
        getline (cin,x.resultado);
        cout<<endl<<"-------------------------------------------------------------------";
    }
    cout<<endl<<"Desea guardar el partido? S/N "<<endl;
    cin>>respuesta;
    if(respuesta=='s'||respuesta=='S')
    {
        mundi<<endl<<"*****************************************************************";
        mundi<<endl<<x.nombre<<"   VS   "<<x.nombre1;
        mundi<<endl<<"Goles de "<<x.nombre<<": "<<x.goles+x.goleste+aux;
        mundi<<endl<<"Goles de "<<x.nombre1<<": "<<x.goles1+x.goleste1+aux1;
        mundi<<endl<<"El ganador es: "<<x.ganador;
        mundi<<endl<<x.resultado;
        mundi<<endl<<"*****************************************************************";
    }

 }
void cuartos (void)
{
    ofstream mundi;
    if(!mundi.is_open())
    {
        mundi.seekp(0,ios::end);
        mundi.open("MUNDIAL.txt", ios::app);
    }
    char resp;
    int it,ite,aux,aux1;
    partido x;
    system("cls");
    cout<<endl<<"Equipo 1: ";
    fflush(stdin);
    getline (cin,x.nombre);
    cout<<endl<<"Equipo 2: ";
    fflush(stdin);
    getline (cin,x.nombre1);
    system ("cls");
    cout<<"-------------------------------------------------------------------";
    cout<<endl<<x.nombre<<"   vs   "<<x.nombre1;
    cout<<endl<<"Cantidad de goles de "<<x.nombre<<": ";
    cin>>x.goles;
    cout<<endl<<"Cantidad de goles de "<<x.nombre1<<": ";
    cin>>x.goles1;
    if(x.nombre<x.nombre1)
    {
        x.ganador=x.nombre1;
    }
    if(x.nombre>x.nombre1)
    {
        x.ganador=x.nombre;
    }
    for (it=0;it<x.goles;it++)
    {
        cout<<endl<<"Gol "<<it+1<<" de"<<x.nombre<<" de: ";
        fflush(stdin);
        getline (cin,x.campeon[it]);
        cout<<endl<<"Minuto: ";
        cin>>x.minuto[it];
    }
    for (it=0;it<x.goles1;it++)
    {
        cout<<endl<<"Gol "<<it+1<<" de "<<x.nombre1<<"de: ";
        fflush(stdin);
        getline (cin,x.campeon1[it]);
        cout<<endl<<"Minuto: ";
        cin>>x.minuto1[it];
    }
    if(x.goles==x.goles1)
    {
        cout<<endl<<"Empate!";
        cout<<endl<<"TIEMPOS EXTRA";
        cout<<endl<<"Goles de cada equipo:";
        cout<<endl<<"Goles de "<<x.nombre<<": ";
        cin>>x.goleste;
        cout<<endl<<"Goles de "<<x.nombre1<<": ";
        cin>>x.goleste1;
        for(ite=0;ite<x.goleste;ite++)
        {
            cout<<endl<<"Gol "<<it+1<<" de "<<x.nombre<<" de: ";
            fflush(stdin);
            getline (cin,x.campeonte[ite]);
        }
        for(ite=0;ite<x.goleste1;ite++)
        {
                cout<<endl<<"Gol "<<it+1<<" de "<<x.nombre1<<" de: ";
                fflush(stdin);
                getline (cin,x.campeonte1[ite]);
        }
        resp='s';
        while (resp=='s'){
            if(x.goleste==x.goleste1)
            {
                cout<<endl<<"PENALES";
                cout<<endl<<"Cuantos penales cobro "<<x.nombre<<": ";
                cin>>aux;
                cout<<endl<<"Cuantos penales cobro "<<x.nombre1<<": ";
                cin>>aux1;
                if(aux==aux1)
                {
                    cout<<endl<<"No pueden haber quedado empate!";
                    resp='s';
                }
                else
                {
                    for(ite=0;ite<aux;ite++)
                    {
                        cout<<endl<<x.nombre<<" Cobro el penal "<<ite+1<<": ";
                        fflush(stdin);
                        getline (cin,x.campeonp[ite]);
                    }
                    for(ite=0;ite<aux1;ite++)
                    {
                        cout<<endl<<x.nombre1<<" Cobro el penal "<<ite+1<<": ";
                        fflush(stdin);
                        getline (cin,x.campeonp1[ite]);
                    }
                    if(aux>aux1)
                    {
                        cout<<endl<<endl<<x.nombre<<" ES CAMPEON!";
                        x.ganador=x.nombre;
                        resp='n';
                    }
                    if(aux<aux1)
                    {
                        cout<<endl<<endl<<x.nombre1<<" ES CAMPEON!";
                        x.ganador=x.nombre1;
                        resp='n';
                    }
                }
            }
            else
            {
                if(x.goleste>x.goleste1)
                {
                    cout<<endl<<endl<<x.nombre<<" ES CAMPEON!";
                    x.ganador=x.nombre;
                    resp='n';
                }
                if(x.goleste1>x.goleste)
                {
                    cout<<endl<<endl<<x.nombre1<<" ES CAMPEON!";
                    x.ganador=x.nombre1;
                    resp='n';
                }
            }
        }
        cout<<endl<<"Resultado final: ";
        fflush(stdin);
        getline (cin,x.resultado);
        cout<<endl<<"-------------------------------------------------------------------";
    }
    cout<<endl<<"Desea guardar el partido? S/N "<<endl;
    cin>>respuesta;
    if(respuesta=='s'||respuesta=='S')
    {
        mundi<<endl<<"*****************************************************************";
        mundi<<endl<<x.nombre<<"   VS   "<<x.nombre1;
        mundi<<endl<<"Goles de "<<x.nombre<<": "<<x.goles+x.goleste+aux;
        mundi<<endl<<"Goles de "<<x.nombre1<<": "<<x.goles1+x.goleste1+aux1;
        mundi<<endl<<"El ganador es: "<<x.ganador;
        mundi<<endl<<x.resultado;
        mundi<<endl<<"*****************************************************************";
    }

}
void semi (void)
{
    ofstream mundi;
    if(!mundi.is_open())
    {
        mundi.seekp(0,ios::end);
        mundi.open("MUNDIAL.txt", ios::app);
    }
    char resp;
    int it,ite,aux,aux1;
    partido x;
    system("cls");
    cout<<endl<<"Equipo 1: ";
    fflush(stdin);
    getline (cin,x.nombre);
    cout<<endl<<"Equipo 2: ";
    fflush(stdin);
    getline (cin,x.nombre1);
    system ("cls");
    cout<<"-------------------------------------------------------------------";
    cout<<endl<<x.nombre<<"   vs   "<<x.nombre1;
    cout<<endl<<"Cantidad de goles de "<<x.nombre<<": ";
    cin>>x.goles;
    cout<<endl<<"Cantidad de goles de "<<x.nombre1<<": ";
    cin>>x.goles1;
    if(x.nombre<x.nombre1)
    {
        x.ganador=x.nombre1;
    }
    if(x.nombre>x.nombre1)
    {
        x.ganador=x.nombre;
    }
    for (it=0;it<x.goles;it++)
    {
        cout<<endl<<"Gol "<<it+1<<" de"<<x.nombre<<" de: ";
        fflush(stdin);
        getline (cin,x.campeon[it]);
        cout<<endl<<"Minuto: ";
        cin>>x.minuto[it];
    }
    for (it=0;it<x.goles1;it++)
    {
        cout<<endl<<"Gol "<<it+1<<" de "<<x.nombre1<<"de: ";
        fflush(stdin);
        getline (cin,x.campeon1[it]);
        cout<<endl<<"Minuto: ";
        cin>>x.minuto1[it];
    }
    if(x.goles==x.goles1)
    {
        cout<<endl<<"Empate!";
        cout<<endl<<"TIEMPOS EXTRA";
        cout<<endl<<"Goles de cada equipo:";
        cout<<endl<<"Goles de "<<x.nombre<<": ";
        cin>>x.goleste;
        cout<<endl<<"Goles de "<<x.nombre1<<": ";
        cin>>x.goleste1;
        for(ite=0;ite<x.goleste;ite++)
        {
            cout<<endl<<"Gol "<<it+1<<" de "<<x.nombre<<" de: ";
            fflush(stdin);
            getline (cin,x.campeonte[ite]);
        }
        for(ite=0;ite<x.goleste1;ite++)
        {
                cout<<endl<<"Gol "<<it+1<<" de "<<x.nombre1<<" de: ";
                fflush(stdin);
                getline (cin,x.campeonte1[ite]);
        }
        resp='s';
        while (resp=='s'){
            if(x.goleste==x.goleste1)
            {
                cout<<endl<<"PENALES";
                cout<<endl<<"Cuantos penales cobro "<<x.nombre<<": ";
                cin>>aux;
                cout<<endl<<"Cuantos penales cobro "<<x.nombre1<<": ";
                cin>>aux1;
                if(aux==aux1)
                {
                    cout<<endl<<"No pueden haber quedado empate!";
                    resp='s';
                }
                else
                {
                    for(ite=0;ite<aux;ite++)
                    {
                        cout<<endl<<x.nombre<<" Cobro el penal "<<ite+1<<": ";
                        fflush(stdin);
                        getline (cin,x.campeonp[ite]);
                    }
                    for(ite=0;ite<aux1;ite++)
                    {
                        cout<<endl<<x.nombre1<<" Cobro el penal "<<ite+1<<": ";
                        fflush(stdin);
                        getline (cin,x.campeonp1[ite]);
                    }
                    if(aux>aux1)
                    {
                        cout<<endl<<endl<<x.nombre<<" ES CAMPEON!";
                        x.ganador=x.nombre;
                        resp='n';
                    }
                    if(aux<aux1)
                    {
                        cout<<endl<<endl<<x.nombre1<<" ES CAMPEON!";
                        x.ganador=x.nombre1;
                        resp='n';
                    }
                }
            }
            else
            {
                if(x.goleste>x.goleste1)
                {
                    cout<<endl<<endl<<x.nombre<<" ES CAMPEON!";
                    x.ganador=x.nombre;
                    resp='n';
                }
                if(x.goleste1>x.goleste)
                {
                    cout<<endl<<endl<<x.nombre1<<" ES CAMPEON!";
                    x.ganador=x.nombre1;
                    resp='n';
                }
            }
        }
        cout<<endl<<"Resultado final: ";
        fflush(stdin);
        getline (cin,x.resultado);
        cout<<endl<<"-------------------------------------------------------------------";
    }
    cout<<endl<<"Desea guardar el partido? S/N "<<endl;
    cin>>respuesta;
    if(respuesta=='s'||respuesta=='S')
    {
        mundi<<endl<<"*****************************************************************";
        mundi<<endl<<x.nombre<<"   VS   "<<x.nombre1;
        mundi<<endl<<"Goles de "<<x.nombre<<": "<<x.goles+x.goleste+aux;
        mundi<<endl<<"Goles de "<<x.nombre1<<": "<<x.goles1+x.goleste1+aux1;
        mundi<<endl<<"El ganador es: "<<x.ganador;
        mundi<<endl<<x.resultado;
        mundi<<endl<<"*****************************************************************";
    }
}
void ultima (void)
{
    ofstream mundi;
    if(!mundi.is_open())
    {
        mundi.seekp(0,ios::end);
        mundi.open("MUNDIAL.txt", ios::app);
    }
    char resp;
    int it,ite,aux,aux1;
    partido x;
    system("cls");
    cout<<endl<<"Equipo 1: ";
    fflush(stdin);
    getline (cin,x.nombre);
    cout<<endl<<"Equipo 2: ";
    fflush(stdin);
    getline (cin,x.nombre1);
    system ("cls");
    cout<<"-------------------------------------------------------------------";
    cout<<endl<<x.nombre<<"   vs   "<<x.nombre1;
    cout<<endl<<"Cantidad de goles de "<<x.nombre<<": ";
    cin>>x.goles;
    cout<<endl<<"Cantidad de goles de "<<x.nombre1<<": ";
    cin>>x.goles1;
    if(x.nombre<x.nombre1)
    {
        x.ganador=x.nombre1;
    }
    if(x.nombre>x.nombre1)
    {
        x.ganador=x.nombre;
    }
    for (it=0;it<x.goles;it++)
    {
        cout<<endl<<"Gol "<<it+1<<" de"<<x.nombre<<" de: ";
        fflush(stdin);
        getline (cin,x.campeon[it]);
        cout<<endl<<"Minuto: ";
        cin>>x.minuto[it];
    }
    for (it=0;it<x.goles1;it++)
    {
        cout<<endl<<"Gol "<<it+1<<" de "<<x.nombre1<<"de: ";
        fflush(stdin);
        getline (cin,x.campeon1[it]);
        cout<<endl<<"Minuto: ";
        cin>>x.minuto1[it];
    }
    if(x.goles==x.goles1)
    {
        cout<<endl<<"Empate!";
        cout<<endl<<"TIEMPOS EXTRA";
        cout<<endl<<"Goles de cada equipo:";
        cout<<endl<<"Goles de "<<x.nombre<<": ";
        cin>>x.goleste;
        cout<<endl<<"Goles de "<<x.nombre1<<": ";
        cin>>x.goleste1;
        for(ite=0;ite<x.goleste;ite++)
        {
            cout<<endl<<"Gol "<<it+1<<" de "<<x.nombre<<" de: ";
            fflush(stdin);
            getline (cin,x.campeonte[ite]);
        }
        for(ite=0;ite<x.goleste1;ite++)
        {
                cout<<endl<<"Gol "<<it+1<<" de "<<x.nombre1<<" de: ";
                fflush(stdin);
                getline (cin,x.campeonte1[ite]);
        }
        resp='s';
        while (resp=='s'){
            if(x.goleste==x.goleste1)
            {
                cout<<endl<<"PENALES";
                cout<<endl<<"Cuantos penales cobro "<<x.nombre<<": ";
                cin>>aux;
                cout<<endl<<"Cuantos penales cobro "<<x.nombre1<<": ";
                cin>>aux1;
                if(aux==aux1)
                {
                    cout<<endl<<"No pueden haber quedado empate!";
                    resp='s';
                }
                else
                {
                    for(ite=0;ite<aux;ite++)
                    {
                        cout<<endl<<x.nombre<<" Cobro el penal "<<ite+1<<": ";
                        fflush(stdin);
                        getline (cin,x.campeonp[ite]);
                    }
                    for(ite=0;ite<aux1;ite++)
                    {
                        cout<<endl<<x.nombre1<<" Cobro el penal "<<ite+1<<": ";
                        fflush(stdin);
                        getline (cin,x.campeonp1[ite]);
                    }
                    if(aux>aux1)
                    {
                        cout<<endl<<endl<<x.nombre<<" ES CAMPEON!";
                        x.ganador=x.nombre;
                        resp='n';
                    }
                    if(aux<aux1)
                    {
                        cout<<endl<<endl<<x.nombre1<<" ES CAMPEON!";
                        x.ganador=x.nombre1;
                        resp='n';
                    }
                }
            }
            else
            {
                if(x.goleste>x.goleste1)
                {
                    cout<<endl<<endl<<x.nombre<<" ES CAMPEON!";
                    x.ganador=x.nombre;
                    resp='n';
                }
                if(x.goleste1>x.goleste)
                {
                    cout<<endl<<endl<<x.nombre1<<" ES CAMPEON!";
                    x.ganador=x.nombre1;
                    resp='n';
                }
            }
        }
        cout<<endl<<"Resultado final: ";
        fflush(stdin);
        getline (cin,x.resultado);
        cout<<endl<<"-------------------------------------------------------------------";
    }
    cout<<endl<<"Desea guardar el partido? S/N "<<endl;
    cin>>respuesta;
    if(respuesta=='s'||respuesta=='S')
    {
        mundi<<endl<<"*****************************************************************";
        mundi<<endl<<x.nombre<<"   VS   "<<x.nombre1;
        mundi<<endl<<"Goles de "<<x.nombre<<": "<<x.goles+x.goleste+aux;
        mundi<<endl<<"Goles de "<<x.nombre1<<": "<<x.goles1+x.goleste1+aux1;
        mundi<<endl<<"El ganador es: "<<x.ganador;
        mundi<<endl<<x.resultado;
        mundi<<endl<<"*****************************************************************";
    }
}
