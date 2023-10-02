#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
#include <windows.h>
#include <time.h>
using namespace std;
fstream archivo("registroJAGURA.txt");
void I (void);
void II (void);
void III (void);
void IV (void);
void V (void);
void VI (void);
int x;
string nom;
int main ()
{
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
    cout<<endl<<"|1. Encuesta de Rock    |";
    cout<<endl<<"|-----------------------|";
    cout<<endl<<"|2. Encuesta de Xen     | ";
    cout<<endl<<"|-----------------------|";
    cout<<endl<<"|3. Encuesta de Aurora  | ";
    cout<<endl<<"|-----------------------|";
    cout<<endl<<"|4. Encuesta de Natan   |";
    cout<<endl<<"|-----------------------|";
    cout<<endl<<"|5. Salir               |";
    cout<<endl<<"-------------------------";
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
    p[0]="Pregunta 1";
    p[1]="Pregunta 2";
    p[2]="Pregunta 3";
    p[3]="Pregunta 4";
    p[4]="Pregunta 5";
    p[5]="Pregunta 6";
    p[6]="Pregunta 7";
    p[7]="Pregunta 8";
    p[8]="Pregunta 9";
    p[9]="Pregunta 10";
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
            case 2:
                cout<<endl<<p[1];
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
            case 3:
                cout<<endl<<p[2];
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
            case 4:
                cout<<endl<<p[3];
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
            case 5:
                cout<<endl<<p[4];
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
            case 6:
                cout<<endl<<p[5];
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
            case 7:
                cout<<endl<<p[6];
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
            case 8:
                cout<<endl<<p[7];
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
            case 9:
                cout<<endl<<p[8];
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
            case 10:
                cout<<endl<<p[9];
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
        archivo<<"|---Encuesta de Rock---|"<<endl;
        archivo<<"------------------------"<<endl;
        archivo<<endl<<"Resultados de: "<<nom;
        for (i=0;i<10;i++)
        {
            archivo<<endl<<"--Pregunta--"<<endl<<p[arreglo[i]]<<endl<<"--Respuesta--"<<endl<<res[i];
        }
            archivo<<endl<<"Numero de aciertos: "<<ac;
            archivo<<endl<<"Numero de errores: "<<co;
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
    p[0]="Pregunta 1";
    p[1]="Pregunta 2";
    p[2]="Pregunta 3";
    p[3]="Pregunta 4";
    p[4]="Pregunta 5";
    p[5]="Pregunta 6";
    p[6]="Pregunta 7";
    p[7]="Pregunta 8";
    p[8]="Pregunta 9";
    p[9]="Pregunta 10";
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
            case 2:
                cout<<endl<<p[1];
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
            case 3:
                cout<<endl<<p[2];
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
            case 4:
                cout<<endl<<p[3];
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
            case 5:
                cout<<endl<<p[4];
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
            case 6:
                cout<<endl<<p[5];
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
            case 7:
                cout<<endl<<p[6];
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
            case 8:
                cout<<endl<<p[7];
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
            case 9:
                cout<<endl<<p[8];
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
            case 10:
                cout<<endl<<p[9];
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
        archivo<<"|---Encuesta de Xen ---|"<<endl;
        archivo<<"------------------------"<<endl;
        archivo<<endl<<"Resultados de: "<<nom;
        for (i=0;i<10;i++)
        {
            archivo<<endl<<"--Pregunta--"<<endl<<p[arreglo[i]]<<endl<<"--Respuesta--"<<endl<<res[i];
        }
            archivo<<endl<<"Numero de aciertos: "<<ac;
            archivo<<endl<<"Numero de errores: "<<co;
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
    p[0]="Pregunta 1";
    p[1]="Pregunta 2";
    p[2]="Pregunta 3";
    p[3]="Pregunta 4";
    p[4]="Pregunta 5";
    p[5]="Pregunta 6";
    p[6]="Pregunta 7";
    p[7]="Pregunta 8";
    p[8]="Pregunta 9";
    p[9]="Pregunta 10";
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
            case 2:
                cout<<endl<<p[1];
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
            case 3:
                cout<<endl<<p[2];
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
            case 4:
                cout<<endl<<p[3];
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
            case 5:
                cout<<endl<<p[4];
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
            case 6:
                cout<<endl<<p[5];
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
            case 7:
                cout<<endl<<p[6];
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
            case 8:
                cout<<endl<<p[7];
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
            case 9:
                cout<<endl<<p[8];
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
            case 10:
                cout<<endl<<p[9];
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
        archivo<<"|--Encuesta de Aurora--|"<<endl;
        archivo<<"------------------------"<<endl;
        archivo<<endl<<"Resultados de: "<<nom;
        for (i=0;i<10;i++)
        {
            archivo<<endl<<"--Pregunta--"<<endl<<p[arreglo[i]]<<endl<<"--Respuesta--"<<endl<<res[i];
        }
            archivo<<endl<<"Numero de aciertos: "<<ac;
            archivo<<endl<<"Numero de errores: "<<co;
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
    p[0]="Pregunta 1";
    p[1]="Pregunta 2";
    p[2]="Pregunta 3";
    p[3]="Pregunta 4";
    p[4]="Pregunta 5";
    p[5]="Pregunta 6";
    p[6]="Pregunta 7";
    p[7]="Pregunta 8";
    p[8]="Pregunta 9";
    p[9]="Pregunta 10";
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
            case 2:
                cout<<endl<<p[1];
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
            case 3:
                cout<<endl<<p[2];
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
            case 4:
                cout<<endl<<p[3];
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
            case 5:
                cout<<endl<<p[4];
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
            case 6:
                cout<<endl<<p[5];
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
            case 7:
                cout<<endl<<p[6];
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
            case 8:
                cout<<endl<<p[7];
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
            case 9:
                cout<<endl<<p[8];
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
            case 10:
                cout<<endl<<p[9];
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
        archivo<<"|---Encuesta de Natan---|"<<endl;
        archivo<<"------------------------"<<endl;
        archivo<<endl<<"Resultados de: "<<nom;
        for (i=0;i<10;i++)
        {
            archivo<<endl<<"--Pregunta--"<<endl<<p[arreglo[i]]<<endl<<"--Respuesta--"<<endl<<res[i];
        }
            archivo<<endl<<"Numero de aciertos: "<<ac;
            archivo<<endl<<"Numero de errores: "<<co;
            archivo<<endl<<"-----------------------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
    }
}
