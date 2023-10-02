#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
#include <windows.h>
#include <time.h>
#include<wchar.h>
#include<locale.h>
using namespace std;
fstream archivo("registroJAGURA.txt");
void I (void);
void II (void);
void III (void);
void IV (void);
void V (void);
void VI (void);
void VII (void);
int x;
string nom;
int main ()
{
    setlocale(LC_ALL, "");
    cout<<endl<<"Nombre: ";
    fflush(stdin);
    getline(cin,nom);
    do
    {
        I();
        cin>>x;
        II();
    }
    while (x!=0);
}
void I (void)
{
    system ("cls");
    cout<<endl<<"|---MENU DE OPCIONES----|";
    cout<<endl<<"|1.Rock                 |";
    cout<<endl<<"|-----------------------|";
    cout<<endl<<"|2. Reggae              |";
    cout<<endl<<"|-----------------------|";
    cout<<endl<<"|3. Pop                 |";
    cout<<endl<<"|-----------------------|";
    cout<<endl<<"|4. Regional Mexicano   |";
    cout<<endl<<"|-----------------------|";
    cout<<endl<<"|5. Salir               |";
    cout<<endl<<"|-----------------------|";
    cout<<endl<<"|6.- Mostrar tabla      |";
    cout<<endl<<"|-----------------------|";
    cout<<endl;
}
void II (void)
{
    switch (x)
        {
            case 1:
                III ();
                system("cls");
                cout<<endl<<"Regresar al menu, pulse 1"<<endl<<"Salir, pulse 0"<<endl;
                cin>>x;
                break;
            case 2:
                IV ();
                system("cls");
                cout<<endl<<"Regresar al menu, pulse 1"<<endl<<"Salir, pulse 0"<<endl;
                cin>>x;
                break;
            case 3:
                V ();
                system("cls");
                cout<<endl<<"Regresar al menu, pulse 1"<<endl<<"Salir, pulse 0"<<endl;
                cin>>x;
                break;
            case 4:
               VI ();
                system("cls");
                cout<<endl<<"Regresar al menu, pulse 1"<<endl<<"Salir, pulse 0"<<endl;
                cin>>x;
                break;
            case 5:
                system ("cls");
                cout<<endl<<"Gracias, bai";
                x=0;
            break;
            case 6:
                system ("cls");
                VII();
				cout<<endl<<"Regresar al menu, pulse 1"<<endl<<"Salir, pulse 0"<<endl;
                cin>>x;
            break;
            default:
                system("cls");
                cout<<endl<<"Elija un numero valido"<<endl;
                system("pause");
                x=1;
                break;
        }
}
void III (void)
{
    ofstream archivo;
    system ("cls");
    char a,res[10];
    int ac,co,i,aux,aux2,arreglo[10],s;
    string p[11];
    p[0]="Que cancion es considerada la primera de la historia del R&R? ";
    p[1]="Cual es el artista o grupo que más ha vendido discos en la historia? ";
    p[2]="Cual es el album mas vendido de la historia? ";
    p[3]="Quien tiene mas numeros uno en la lista de exitos de USA de la historia? ";
    p[4]="En que año se celebro el festival de Woodstock?";
    p[5]="Quien invento la guitarra electrica?";
    p[6]="Cual de estos artistas sigue vivo? ";
    p[7]="Que artista fue el que mas discos vendio en 2014? ";
    p[8]="Cual de estos guitarristas invento el Heavy Metal?";
    p[9]="Que es la British Invasion?";
    p[10]="Que bandas iniciaron el Punk? ";
    if(!archivo.is_open())
    {
        archivo.seekp(0,ios::end);
        archivo.open("registroJAGURA.txt",ios::app);
    }
    srand(time(NULL));
    for(i=0;i<10;i++)
    {
        aux=(1 + rand() % 11-1);
        aux2=0;
        while(aux2 < i)
            {
                if(aux != arreglo[aux2])
                {

                    aux2++;
                }
                else
                {
                    aux=(1 + rand() % 11-1);
                    aux2=0;
                }
            }
        arreglo[i]=aux;
    }
    i=0;
    ac=0;
    co=0;
    while(s!=10)
        {
            switch(arreglo[i])
            {
            case 1:
                cout<<endl<<p[0];
                cout<<endl<<"a)Rock Around The Clock";
                cout<<endl<<"b)Maybelline";
                cout<<endl<<"c)That´s Alright";
                cout<<endl;
                cin>>res[i];
                if(res[i]!='b')
                {
                    co++;
                    cout<<endl<<"Incorrecto!"<<endl;
                }
                if(res[i]=='b')
                {
                    ac++;
                    cout<<endl<<"Correcto!"<<endl;
                }
                s=co+ac;
                break;
            case 2:
                cout<<endl<<p[1];
                cout<<endl<<"a)The Beatles";
                cout<<endl<<"b)Elvis Presley ";
                cout<<endl<<"c)Michael Jackson";
                cout<<endl;
                cin>>res[i];
                if(res[i]!='a')
                {
                    co++;
                    cout<<endl<<"Incorrecto!"<<endl;
                }
                if(res[i]=='a')
                {
                    ac++;
                    cout<<endl<<"Correcto!"<<endl;
                }
                s=co+ac;
                break;
            case 3:
                cout<<endl<<p[2];
                cout<<endl<<"a)Thriller";
                cout<<endl<<"b)21 Adele";
                cout<<endl<<"c)Saturday Night Fever";
                cout<<endl;
                cin>>res[i];
                if(res[i]!='a')
                {
                    co++;
                    cout<<endl<<"Incorrecto!"<<endl;
                }
                if(res[i]=='a')
                {
                    ac++;
                    cout<<endl<<"Correcto!"<<endl;
                }
                s=co+ac;
                break;
            case 4:
                cout<<endl<<p[3];
                cout<<endl<<"a)Led Zeppelin";
                cout<<endl<<"b)Bob Dylan";
                cout<<endl<<"c)Bob Marley";
                cout<<endl;
                cin>>res[i];
                if(res[i]!='b')
                {
                    co++;
                    cout<<endl<<"Incorrecto!"<<endl;
                }
                if(res[i]=='b')
                {
                    ac++;
                    cout<<endl<<"Correcto!"<<endl;
                }
                s=co+ac;
                break;
            case 5:
                cout<<endl<<p[4];
                cout<<endl<<"a)1969";
                cout<<endl<<"b)1973";
                cout<<endl<<"c)1971";
                cout<<endl;
                cin>>res[i];
                if(res[i]!='a')
                {
                    co++;
                    cout<<endl<<"Incorrecto!"<<endl;
                }
                if(res[i]=='a')
                {
                    ac++;
                    cout<<endl<<"Correcto!"<<endl;
                }
                s=co+ac;
                break;
            case 6:
                cout<<endl<<p[5];
                cout<<endl<<"a)Les Paul";
                cout<<endl<<"b)Thomas Edison";
                cout<<endl<<"c)George Beauchamp";
                cout<<endl;
                cin>>res[i];
                if(res[i]!='c')
                {
                    co++;
                    cout<<endl<<"Incorrecto!"<<endl;
                }
                if(res[i]=='c')
                {
                    ac++;
                    cout<<endl<<"Correcto!"<<endl;
                }
                s=co+ac;
                break;
            case 7:
                cout<<endl<<p[6];
                cout<<endl<<"a)Bob Dylan";
                cout<<endl<<"b)Leonard Cohen";
                cout<<endl<<"c)Chuck Berry";
                cout<<endl;
                cin>>res[i];
                if(res[i]!='b')
                {
                    co++;
                    cout<<endl<<"Incorrecto!"<<endl;
                }
                if(res[i]=='b')
                {
                    ac++;
                    cout<<endl<<"Correcto!"<<endl;
                }
                s=co+ac;
                break;
            case 8:
                cout<<endl<<p[7];
                cout<<endl<<"a)Sam Smith";
                cout<<endl<<"b)Tylor Swift";
                cout<<endl<<"c)One Direction";
                cout<<endl;
                cin>>res[i];
                if(res[i]!='b')
                {
                    co++;
                    cout<<endl<<"Incorrecto!"<<endl;
                }
                if(res[i]=='b')
                {
                    ac++;
                    cout<<endl<<"Correcto!"<<endl;
                }
                s=co+ac;
                break;
            case 9:
                cout<<endl<<p[8];
                cout<<endl<<"a)Jimmy Page de Led Zepellin";
                cout<<endl<<"b)Ritchie Blackmore de Deep Pourple";
                cout<<endl<<"c)Tony Lommi de Balck Sabbath";
                cout<<endl;
                cin>>res[i];
                if(res[i]!='c')
                {
                    co++;
                    cout<<endl<<"Incorrecto!"<<endl;
                }
                if(res[i]=='c')
                {
                    ac++;
                    cout<<endl<<"Correcto!"<<endl;
                }
                s=co+ac;
                break;
            case 10:
                cout<<endl<<p[9];
                cout<<endl<<"a)Una revista Britanica de los años 60";
                cout<<endl<<"b)Un disco recopilatorio de The Who";
                cout<<endl<<"c)Una serie de grupos britanicos que triunfaron en los años 60";
                cout<<endl;
                cin>>res[i];
                if(res[i]!='c')
                {
                    co++;
                    cout<<endl<<"Incorrecto!"<<endl;
                }
               if(res[i]=='c')
                {
                    ac++;
                    cout<<endl<<"Correcto!"<<endl;
                }
                s=co+ac;
                break;
            case 11:
                cout<<endl<<p[10];
                cout<<endl<<"a)The Ramones, Sex Pistols, The Clash";
                cout<<endl<<"b)The Ramones, Sex Pistols, Patti Smith";
                cout<<endl<<"c)The Ramones, Sex Pistols, The New York Dolls";
                cout<<endl;
                cin>>res[i];
                if(res[i]!='a')
                {
                    co++;
                    cout<<endl<<"Incorrecto!"<<endl;
                }
                if(res[i]=='a')
                {
                    ac++;
                    cout<<endl<<"Correcto!"<<endl;
                }
                s=co+ac;
                break;
            }
            i++;
        }
        if(ac>5)
        {
            system("cls");
            cout<<endl<<"------------PASASTE!!-----------"<<endl;
            cout<<endl<<"Resultados:"<<endl;
            cout<<endl<<"Correctas: "<<ac;
            cout<<endl<<"incorrectas: "<<co;
        }
        if(ac<=5)
        {
            system("cls");
            cout<<endl<<"------------REPROBAO!!-----------"<<endl;
            cout<<endl<<"Resultados="<<endl;
            cout<<endl<<"Correctas: "<<ac;
            cout<<endl<<"incorrectas: "<<co;
        }
    cout<<endl<<"Guardar resultados? S/N"<<endl;
    cin>>a;
    if(a=='s'||a=='S')
    {
        archivo<<"------------------------"<<endl;
        archivo<<"|---Rock---|"<<endl;
        archivo<<"------------------------"<<endl;
        archivo<<endl<<"Resultados de: "<<nom;
        archivo<<endl<<"Numero de aciertos: "<<ac;
        archivo<<endl<<"-----------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
    }
}
void IV (void)
{
    ofstream archivo;
    system ("cls");
    char a,res[10];
    int ac,co,i,aux,aux2,arreglo[10],s;
    string p[11];
    p[0]="En que pais surgio por primera vez el reggae?";
    p[1]="Con que colores se identifica al reggae?";
    p[2]="En que decada surge el reggae?";
    p[3]="Banda muy famosa de origen chileno?";
    p[4]="Primera banda de reggae que gano un Grammy en 1985?";
    p[5]="Grupo que acuño por primera vez el termino 'reggae' en una de sus canciones?";
    p[6]="A quien se le atribuye el album 'Vivi En Do'?";
    p[7]="Quien es considerado el 'Padre del reggae'?";
    p[8]="Banda de origen ingles precursora del considerado 'pop reggae'?";
    p[9]="Cantante y compositor reconocido por componer bandas sonoras de peliculas, entre las que se destaca Hakuna Matata del filme 'Rey Leon'...";
    p[10]="Pregunta 11";
    if(!archivo.is_open())
    {
        archivo.seekp(0,ios::end);
        archivo.open("registroJAGURA.txt",ios::app);
    }
    srand(time(NULL));
    for(i=0;i<10;i++)
    {
        aux=(1 + rand() % 11-1);
        aux2=0;
        while(aux2 < i)
            {
                if(aux != arreglo[aux2])
                {
                    aux2++;
                }
                else
                {
                    aux=(1 + rand() % 11-1);
                    aux2=0;
                }
            }
        arreglo[i]=aux;
    }
    i=0;
    ac=0;
    co=0;
    while(s!=10)
        {
            switch(arreglo[i])
            {
            case 1:
                cout<<endl<<p[0];
                cout<<endl<<"a) EE.UU";
                cout<<endl<<"b) Jamaica";
                cout<<endl<<"c) Argentina";
                cout<<endl;
                cin>>res[i];
                if(res[i]!='b')
                {
                    co++;
                    cout<<endl<<"Incorrecto!"<<endl;
                }
                if(res[i]=='b')
                {
                    ac++;
                    cout<<endl<<"Correcto!"<<endl;
                }
                s=co+ac;
                break;
            case 2:
                cout<<endl<<p[1];
                cout<<endl<<"a) Verde, amarillo y rojo";
                cout<<endl<<"b) Negro, azul y verde";
                cout<<endl<<"c) Verde, anaranjado y rojo";
                cout<<endl;
                cin>>res[i];
                if(res[i]!='a')
                {
                    co++;
                    cout<<endl<<"Incorrecto!"<<endl;
                }
                if(res[i]=='a')
                {
                    ac++;
                    cout<<endl<<"Correcto!"<<endl;
                }
                s=co+ac;
                break;
            case 3:
                cout<<endl<<p[2];
                cout<<endl<<"a) 70's";
                cout<<endl<<"b) 80's";
                cout<<endl<<"c) 60's";
                cout<<endl;
                cin>>res[i];
                if(res[i]!='c')
                {
                    co++;
                    cout<<endl<<"Incorrecto!"<<endl;
                }
                if(res[i]=='c')
                {
                    ac++;
                    cout<<endl<<"Correcto!"<<endl;
                }
                s=co+ac;
                break;
            case 4:
                cout<<endl<<p[3];
                cout<<endl<<"a) Cultura Profetica";
                cout<<endl<<"b) Los pericos";
                cout<<endl<<"c) Gondwana";
                cout<<endl;
                cin>>res[i];
                if(res[i]!='c')
                {
                    co++;
                    cout<<endl<<"Incorrecto!"<<endl;
                }
                if(res[i]=='c')
                {
                    ac++;
                    cout<<endl<<"Correcto!"<<endl;
                }
                s=co+ac;
                break;
            case 5:
                cout<<endl<<p[4];
                cout<<endl<<"a) Black Uhuru";
                cout<<endl<<"b) Zona Ganjah";
                cout<<endl<<"c) The Wailers";
                cout<<endl;
                cin>>res[i];
                if(res[i]!='a')
                {
                    co++;
                    cout<<endl<<"Incorrecto!"<<endl;
                }
                if(res[i]=='a')
                {
                    ac++;
                    cout<<endl<<"Correcto!"<<endl;
                }
                s=co+ac;
                break;
            case 6:
                cout<<endl<<p[5];
                cout<<endl<<"a) The Wailers";
                cout<<endl<<"b) Los pericos";
                cout<<endl<<"c) Toots & The Maytals";
                cout<<endl;
                cin>>res[i];
                if(res[i]!='c')
                {
                    co++;
                    cout<<endl<<"Incorrecto!"<<endl;
                }
                if(res[i]=='c')
                {
                    ac++;
                    cout<<endl<<"Correcto!"<<endl;
                }
                s=co+ac;
                break;
            case 7:
                cout<<endl<<p[6];
                cout<<endl<<"a) Los Cafres";
                cout<<endl<<"b) Desorden Publico";
                cout<<endl<<"c) Dread Mar I";
                cout<<endl;
                cin>>res[i];
                if(res[i]!='c')
                {
                    co++;
                    cout<<endl<<"Incorrecto!"<<endl;
                }
                if(res[i]=='c')
                {
                    ac++;
                    cout<<endl<<"Correcto!"<<endl;
                }
                s=co+ac;
                break;
            case 8:
                cout<<endl<<p[7];
                cout<<endl<<"a) Dread Mar I";
                cout<<endl<<"b) Bob Marley";
                cout<<endl<<"c) Alika";
                cout<<endl;
                cin>>res[i];
                if(res[i]!='b')
                {
                    co++;
                    cout<<endl<<"Incorrecto!"<<endl;
                }
                if(res[i]=='b')
                {
                    ac++;
                    cout<<endl<<"Correcto!"<<endl;
                }
                s=co+ac;
                break;
            case 9:
                cout<<endl<<p[8];
                cout<<endl<<"a) Inner Circle";
                cout<<endl<<"b) UB40";
                cout<<endl<<"c) Culture";
                cout<<endl;
                cin>>res[i];
                if(res[i]!='b')
                {
                    co++;
                    cout<<endl<<"Incorrecto!"<<endl;
                }
                if(res[i]=='b')
                {
                    ac++;
                    cout<<endl<<"Correcto!"<<endl;
                }
                s=co+ac;
                break;
            case 10:
                cout<<endl<<p[9];
                cout<<endl<<"a) Jimmy Cliff";
                cout<<endl<<"b) Peter Tosh";
                cout<<endl<<"c) Bunny Wailer";
                cout<<endl;
                cin>>res[i];
                if(res[i]!='a')
                {
                    co++;
                    cout<<endl<<"Incorrecto!"<<endl;
                }
               if(res[i]=='a')
                {
                    ac++;
                    cout<<endl<<"Correcto!"<<endl;
                }
                s=co+ac;
                break;
            case 11:
                cout<<endl<<p[10];
                cout<<endl<<"a)";
                cout<<endl<<"b)";
                cout<<endl<<"c)";
                cout<<endl;
                cin>>res[i];
                if(res[i]!='a')
                {
                    co++;
                    cout<<endl<<"Incorrecto!"<<endl;
                }
                if(res[i]=='a')
                {
                    ac++;
                    cout<<endl<<"Correcto!"<<endl;
                }
                s=co+ac;
                break;
            }
            i++;
        }
        if(ac>5)
        {
            system("cls");
            cout<<endl<<"-----------　PASASTE!!-----------"<<endl;
            cout<<endl<<"Resultados:"<<endl;
            cout<<endl<<"Correctas: "<<ac;
            cout<<endl<<"incorrectas: "<<co;
        }
        if(ac<=5)
        {
            system("cls");
            cout<<endl<<"-----------　REPROBAO!!-----------"<<endl;
            cout<<endl<<"Resultados="<<endl;
            cout<<endl<<"Correctas: "<<ac;
            cout<<endl<<"incorrectas: "<<co;
        }
    cout<<endl<<"Guardar resultados? S/N"<<endl;
    cin>>a;
    if(a=='s'||a=='S')
    {
        archivo<<"------------------------"<<endl;
        archivo<<"|---Reggae---|"<<endl;
        archivo<<"------------------------"<<endl;
        archivo<<endl<<"Resultados de: "<<nom;
        archivo<<endl<<"Numero de aciertos: "<<ac;
        archivo<<endl<<"-----------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
    }
}
void V (void)
{
    ofstream archivo;
    system ("cls");
    char a,res[10];
    int ac,co,i,aux,aux2,arreglo[10],s;
    string p[11];
    p[0]="Quien es considerado como 'King of Pop'?";
    p[1]="'Grenade' es un hit mundial del 2011 de...? ";
    p[2]="'Back In Time' es un single del 2012 de...?";
    p[3]="Cual es el titulo del album posterior a la muerte de Michael Jackson lanzado en diciembre de 2012?";
    p[4]="En que single esta la participacion de David Guetta presentado por Chris Willis y LMFAO? ";
    p[5]="Cual es el nombre del album 2016 de Ariana Grande?";
    p[6]="Cual es el nombre del album 2017 de Katy Perry?";
    p[7]="BoyBand que se popularizo por el ano 2010 y actualmente esta separada:";
    p[8]="No es una cancion de Lady Gaga:";
    p[9]="Debut mundialmente popular de Dua Lipa:";
    p[10]="Pregunta 11";
    if(!archivo.is_open())
    {
        archivo.seekp(0,ios::end);
        archivo.open("registroJAGURA.txt",ios::app);
    }
    srand(time(NULL));
    for(i=0;i<10;i++)
    {
        aux=(1 + rand() % 11-1);
        aux2=0;
        while(aux2 < i)
            {
                if(aux != arreglo[aux2])
                {
                    aux2++;
                }
                else
                {
                    aux=(1 + rand() % 11-1);
                    aux2=0;
                }
            }
        arreglo[i]=aux;
    }
    i=0;
    ac=0;
    co=0;
    while(s!=10)
        {
            switch(arreglo[i])
            {
            case 1:
                cout<<endl<<p[0];
                cout<<endl<<"a) Justin Bieber";
                cout<<endl<<"b) Ed Sheeran";
                cout<<endl<<"c) Michael Jackson";
                cout<<endl;
                cin>>res[i];
                if(res[i]!='c')
                {
                    co++;
                    cout<<endl<<"Incorrecto!"<<endl;
                }
                if(res[i]=='c')
                {
                    ac++;
                    cout<<endl<<"Correcto!"<<endl;
                }
                s=co+ac;
                break;
            case 2:
                cout<<endl<<p[1];
                cout<<endl<<"a) Bruno Mars";
                cout<<endl<<"b) Usher";
                cout<<endl<<"c) Enrique Iglesias";
                cout<<endl;
                cin>>res[i];
                if(res[i]!='a')
                {
                    co++;
                    cout<<endl<<"Incorrecto!"<<endl;
                }
                if(res[i]=='a')
                {
                    ac++;
                    cout<<endl<<"Correcto!"<<endl;
                }
                s=co+ac;
                break;
            case 3:
                cout<<endl<<p[2];
                cout<<endl<<"a) Ed Sheeran";
                cout<<endl<<"b) Justin Bieber";
                cout<<endl<<"c) Pitbull";
                cout<<endl;
                cin>>res[i];
                if(res[i]!='c')
                {
                    co++;
                    cout<<endl<<"Incorrecto!"<<endl;
                }
                if(res[i]=='c')
                {
                    ac++;
                    cout<<endl<<"Correcto!"<<endl;
                }
                s=co+ac;
                break;
            case 4:
                cout<<endl<<p[3];
                cout<<endl<<"a) Michael";
                cout<<endl<<"b) King Of Pop";
                cout<<endl<<"c) Legend";
                cout<<endl;
                cin>>res[i];
                if(res[i]!='a')
                {
                    co++;
                    cout<<endl<<"Incorrecto!"<<endl;
                }
                if(res[i]=='a')
                {
                    ac++;
                    cout<<endl<<"Correcto!"<<endl;
                }
                s=co+ac;
                break;
            case 5:
                cout<<endl<<p[4];
                cout<<endl<<"a) One Love";
                cout<<endl<<"b) Gettin’ Over You";
                cout<<endl<<"c) Memories";
                cout<<endl;
                cin>>res[i];
                if(res[i]!='b')
                {
                    co++;
                    cout<<endl<<"Incorrecto!"<<endl;
                }
                if(res[i]=='b')
                {
                    ac++;
                    cout<<endl<<"Correcto!"<<endl;
                }
                s=co+ac;
                break;
            case 6:
                cout<<endl<<p[5];
                cout<<endl<<"a) Dangerous Woman";
                cout<<endl<<"b) My Everything";
                cout<<endl<<"c) Yours Truly";
                cout<<endl;
                cin>>res[i];
                if(res[i]!='a')
                {
                    co++;
                    cout<<endl<<"Incorrecto!"<<endl;
                }
                if(res[i]=='a')
                {
                    ac++;
                    cout<<endl<<"Correcto!"<<endl;
                }
                s=co+ac;
                break;
            case 7:
                cout<<endl<<p[6];
                cout<<endl<<"a) Witness";
                cout<<endl<<"b) Prism";
                cout<<endl<<"c) Teenage Dream";
                cout<<endl;
                cin>>res[i];
                if(res[i]!='a')
                {
                    co++;
                    cout<<endl<<"Incorrecto!"<<endl;
                }
                if(res[i]=='a')
                {
                    ac++;
                    cout<<endl<<"Correcto!"<<endl;
                }
                s=co+ac;
                break;
            case 8:
                cout<<endl<<p[7];
                cout<<endl<<"a) Jonas Brothers";
                cout<<endl<<"b) One direction";
                cout<<endl<<"c) DNCE";
                cout<<endl;
                cin>>res[i];
                if(res[i]!='b')
                {
                    co++;
                    cout<<endl<<"Incorrecto!"<<endl;
                }
                if(res[i]=='b')
                {
                    ac++;
                    cout<<endl<<"Correcto!"<<endl;
                }
                s=co+ac;
                break;
            case 9:
                cout<<endl<<p[8];
                cout<<endl<<"a) Applause";
                cout<<endl<<"b) Poker Face";
                cout<<endl<<"c) One Kiss";
                cout<<endl;
                cin>>res[i];
                if(res[i]!='c')
                {
                    co++;
                    cout<<endl<<"Incorrecto!"<<endl;
                }
                if(res[i]=='c')
                {
                    ac++;
                    cout<<endl<<"Correcto!"<<endl;
                }
                s=co+ac;
                break;
            case 10:
                cout<<endl<<p[9];
                cout<<endl<<"a) Homestick";
                cout<<endl<<"b) Be the One";
                cout<<endl<<"c) New Rules";
                cout<<endl;
                cin>>res[i];
                if(res[i]!='c')
                {
                    co++;
                    cout<<endl<<"Incorrecto!"<<endl;
                }
               if(res[i]=='c')
                {
                    ac++;
                    cout<<endl<<"Correcto!"<<endl;
                }
                s=co+ac;
                break;
            case 11:
                cout<<endl<<p[10];
                cout<<endl<<"a)";
                cout<<endl<<"b)";
                cout<<endl<<"c)";
                cout<<endl;
                cin>>res[i];
                if(res[i]!='a')
                {
                    co++;
                    cout<<endl<<"Incorrecto!"<<endl;
                }
                if(res[i]=='a')
                {
                    ac++;
                    cout<<endl<<"Correcto!"<<endl;
                }
                s=co+ac;
                break;
            }
            i++;
        }
        if(ac>5)
        {
            system("cls");
            cout<<endl<<"-----------　PASASTE!!-----------"<<endl;
            cout<<endl<<"Resultados:"<<endl;
            cout<<endl<<"Correctas: "<<ac;
            cout<<endl<<"incorrectas: "<<co;
        }
        if(ac<=5)
        {
            system("cls");
            cout<<endl<<"-----------　REPROBAO!!-----------"<<endl;
            cout<<endl<<"Resultados="<<endl;
            cout<<endl<<"Correctas: "<<ac;
            cout<<endl<<"incorrectas: "<<co;
        }
    cout<<endl<<"Guardar resultados? S/N"<<endl;
    cin>>a;
    if(a=='s'||a=='S')
    {
        archivo<<"------------------------"<<endl;
        archivo<<"|--Pop--|"<<endl;
        archivo<<"------------------------"<<endl;
        archivo<<endl<<"Resultados de: "<<nom;
        archivo<<endl<<"Numero de aciertos: "<<ac;
        archivo<<endl<<"-----------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
    }
}
void VI (void)
{
    ofstream archivo;
    system ("cls");
    char a,res[10];
    int ac,co,i,aux,aux2,arreglo[10],s;
    string p[11];
    p[0]="Que es el regional mexicano?";
    p[1]="Genero musical que impuso una moda y popularizo las botas con largas puntas curvas de hasta 90 centimetros:";
    p[2]="Cuantos integrantes tiene una agrupacion del genero banda?";
    p[3]="Que artista popularizo el tex-mex alrededor del mundo tras su fallecimiento?";
    p[4]="Que instrumentos no pueden faltar en la musica norteña?";
    p[5]="Categoria eliminada y considerada 'desierta' en los Premios Grammy por tener pocos exponentes actualmente:";
    p[6]="Movimiento que surge a partir de una ola de 'narcocorridos' extremadamente violentos; su nombre surge de la relacion con el consumo de cocaina:";
    p[7]="Tipo de guitarra que se usa en el genero sierreño:";
    p[8]="De donde viene el nombre de 'rancheras'?";
    p[9]="Subgenero en el regional mexicano cuyos integrantes por lo general no usan sombrero:";
    p[10]="Pregunta 11";
    if(!archivo.is_open())
    {
        archivo.seekp(0,ios::end);
        archivo.open("registroJAGURA.txt",ios::app);
    }
    srand(time(NULL));
    for(i=0;i<10;i++)
    {
        aux=(1 + rand()%11-1);
        aux2=0;
        while(aux2 < i)
            {
                if(aux != arreglo[aux2])
                {
                    aux2++;
                }
                else
                {
                    aux=(1 + rand()%11-1);
                    aux2=0;
                }
            }
        arreglo[i]=aux;
    }
    i=0;
    ac=0;
    co=0;
    while(s!=10)
        {
            switch(arreglo[i])
            {
            case 1:
                cout<<endl<<p[0];
                cout<<endl<<"a) Genero musical que incluye musica de banda, norteño, 	ranchero, grupero, tex-mex, sierreño y duranguense entre otros";
                cout<<endl<<"b) La musica de corridos y narcos";
                cout<<endl<<"c) Musica representativa de cada estado mexicano";
                cout<<endl;
                cin>>res[i];
                if(res[i]!='a')
                {
                    co++;
                    cout<<endl<<"Incorrecto!"<<endl;
                }
                if(res[i]=='a')
                {
                    ac++;
                    cout<<endl<<"Correcto!"<<endl;
                }
                s=co+ac;
                break;
            case 2:
                cout<<endl<<p[1];
                cout<<endl<<"a) Sierreño";
                cout<<endl<<"b) Tribal";
                cout<<endl<<"c) Grupero";
                cout<<endl;
                cin>>res[i];
                if(res[i]!='b')
                {
                    co++;
                    cout<<endl<<"Incorrecto!"<<endl;
                }
                if(res[i]=='b')
                {
                    ac++;
                    cout<<endl<<"Correcto!"<<endl;
                }
                s=co+ac;
                break;
            case 3:
                cout<<endl<<p[2];
                cout<<endl<<"a) 6 integrantes";
                cout<<endl<<"b) Son un monton que pierdo la cuenta";
                cout<<endl<<"c) 16 o 17 integrantes";
                cout<<endl;
                cin>>res[i];
                if(res[i]!='c')
                {
                    co++;
                    cout<<endl<<"Incorrecto!"<<endl;
                }
                if(res[i]=='c')
                {
                    ac++;
                    cout<<endl<<"Correcto!"<<endl;
                }
                s=co+ac;
                break;
            case 4:
                cout<<endl<<p[3];
                cout<<endl<<"a) Juan Gabriel";
                cout<<endl<<"b) Emilio Navaira";
                cout<<endl<<"c) Selena";
                cout<<endl;
                cin>>res[i];
                if(res[i]!='c')
                {
                    co++;
                    cout<<endl<<"Incorrecto!"<<endl;
                }
                if(res[i]=='c')
                {
                    ac++;
                    cout<<endl<<"Correcto!"<<endl;
                }
                s=co+ac;
                break;
            case 5:
                cout<<endl<<p[4];
                cout<<endl<<"a) Tuba";
                cout<<endl<<"b) Acordeon y bajo sexto";
                cout<<endl<<"c) Piano";
                cout<<endl;
                cin>>res[i];
                if(res[i]!='b')
                {
                    co++;
                    cout<<endl<<"Incorrecto!"<<endl;
                }
                if(res[i]=='b')
                {
                    ac++;
                    cout<<endl<<"Correcto!"<<endl;
                }
                s=co+ac;
                break;
            case 6:
                cout<<endl<<p[5];
                cout<<endl<<"a) Ranchera";
                cout<<endl<<"b) Banda";
                cout<<endl<<"c) Norteño";
                cout<<endl;
                cin>>res[i];
                if(res[i]!='a')
                {
                    co++;
                    cout<<endl<<"Incorrecto!"<<endl;
                }
                if(res[i]=='a')
                {
                    ac++;
                    cout<<endl<<"Correcto!"<<endl;
                }
                s=co+ac;
                break;
            case 7:
                cout<<endl<<p[6];
                cout<<endl<<"a) Movimiento alterado";
                cout<<endl<<"b) Movimiento tribal";
                cout<<endl<<"c) Movimiento de narcos";
                cout<<endl;
                cin>>res[i];
                if(res[i]!='a')
                {
                    co++;
                    cout<<endl<<"Incorrecto!"<<endl;
                }
                if(res[i]=='a')
                {
                    ac++;
                    cout<<endl<<"Correcto!"<<endl;
                }
                s=co+ac;
                break;
            case 8:
                cout<<endl<<p[7];
                cout<<endl<<"a) Requinto";
                cout<<endl<<"b) Bajo sexto";
                cout<<endl<<"c) Guitarra electrica";
                cout<<endl;
                cin>>res[i];
                if(res[i]!='a')
                {
                    co++;
                    cout<<endl<<"Incorrecto!"<<endl;
                }
                if(res[i]=='a')
                {
                    ac++;
                    cout<<endl<<"Correcto!"<<endl;
                }
                s=co+ac;
                break;
            case 9:
                cout<<endl<<p[8];
                cout<<endl<<"a) Del mariachi";
                cout<<endl<<"b) De un pueblo mexicano";
                cout<<endl<<"c) De la palabra rancho, que significa finca grande";
                cout<<endl;
                cin>>res[i];
                if(res[i]!='c')
                {
                    co++;
                    cout<<endl<<"Incorrecto!"<<endl;
                }
                if(res[i]=='c')
                {
                    ac++;
                    cout<<endl<<"Correcto!"<<endl;
                }
                s=co+ac;
                break;
            case 10:
                cout<<endl<<p[9];
                cout<<endl<<"a) Norteño";
                cout<<endl<<"b) Banda sinaloense";
                cout<<endl<<"c) Ranchero";
                cout<<endl;
                cin>>res[i];
                if(res[i]!='b')
                {
                    co++;
                    cout<<endl<<"Incorrecto!"<<endl;
                }
               if(res[i]=='b')
                {
                    ac++;
                    cout<<endl<<"Correcto!"<<endl;
                }
                s=co+ac;
                break;
            case 11:
                cout<<endl<<p[10];
                cout<<endl<<"a)";
                cout<<endl<<"b)";
                cout<<endl<<"c)";
                cout<<endl;
                cin>>res[i];
                if(res[i]!='a')
                {
                    co++;
                    cout<<endl<<"Incorrecto!"<<endl;
                }
                if(res[i]=='a')
                {
                    ac++;
                    cout<<endl<<"Correcto!"<<endl;
                }
                s=co+ac;
                break;
            }
            i++;
        }
        if(ac>5)
        {
            system("cls");
            cout<<endl<<"-----------　PASASTE!!-----------"<<endl;
            cout<<endl<<"Resultados:"<<endl;
            cout<<endl<<"Correctas: "<<ac;
            cout<<endl<<"incorrectas: "<<co;
        }
        if(ac<=5)
        {
            system("cls");
            cout<<endl<<"-----------　REPROBAO!!-----------"<<endl;
            cout<<endl<<"Resultados="<<endl;
            cout<<endl<<"Correctas: "<<ac;
            cout<<endl<<"incorrectas: "<<co;
        }
    cout<<endl<<"Guardar resultados? S/N"<<endl;
    cin>>a;
    if(a=='s'||a=='S')
    {
        archivo<<"------------------------"<<endl;
        archivo<<"|---Regional Mexicano---|"<<endl;
        archivo<<"------------------------"<<endl;
        archivo<<endl<<"Resultados de: "<<nom;
        archivo<<endl<<"Numero de aciertos: "<<ac;
        archivo<<endl<<"-----------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
    }
}
void VII (void)
{
	FILE *archivo= fopen("registroJAGURA.txt","r");
    int c;
    while ((c=fgetc(archivo))!= EOF)
    {
        putchar(c);
    }
    cout<<endl;
    system("pause");
}
