#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <windows.h>
#include <conio.h>
using namespace std;
fstream placa("E:/RPLACAS.txt");
struct placas
{
    string placa;
    int r1,r2,r3,r4,r5,r6;
void texto (void);
void menu (char x);
void a (void);
void registro (void);
void modificacion (void);
void consulta (void);
int main (char x)
{
    char r;
    r='s';
    while (r=='s'||r=='S')
    {
    texto();
    cin>>x;
    if(x=='0')
    {
        r='x';
    }
    menu(x);
    }
}
void texto (void)
{
    system("cls");
    cout<<endl<<"a) Registrar"<<endl;
    cout<<endl<<"b) consultar placa"<<endl;
    cout<<endl<<"Presione 0 para salir"<<endl;
}
void menu (char x)
{
    switch (x)
    {
    case 'a':
        a();
        break;
    case 'b':
        consulta();
        break;
    }
}
void a (void)
{
    system("cls");
    char r;
    cout<<"Desea registrar una placa? S/N ";
    cin>>r;
    if (r=='s')
    {
        registro();
    }
}
void modificacion (void)
{
}
void consulta (void)
{
    fstream mundi;
    string na,l1,l2,l3,l4,l5,l6,l7;
    int res=0;
    system ("cls");
    cout<<endl<<"Placa: ";
    fflush(stdin);
    getline(cin,na);
    if (!mundi.is_open())
    {
        mundi.open("E:/RPLACAS.txt", ios::in);
    }
    while (getline(mundi, l1))
    {
        if(l1.find(na) != string::npos)
            {
                cout<<endl<<l1<<endl;
                getline(mundi, l2);
                cout<<endl<<l2;
                getline(mundi, l3);
                cout<<endl<<l3;
                getline(mundi, l4);
                cout<<endl<<l4;
                getline(mundi, l5);
                cout<<endl<<l5;
                getline(mundi, l6);
                cout<<endl<<l6;
                 getline(mundi, l7);
                cout<<endl<<l7;
                system ("pause");
                res==1;
            }
        }
    if (res==0)//Indica que no se encontro la placa que se pidio
    {
        cout<<endl<<na<<" no encontrado..."<<endl;//Para que se vea chido
        system("pause");//Para que se vea chido x2
    }
}
void registro (void)//Camara, aqui empieza lo chido
{
    ofstream placa;//Para meter datos
    placas y;//Para controlar la estructura
    system("cls");//Limpia pantalla
    string nombre;//Para el usuario que este usando el programa
    int i=0;//Variable de control para metodos repetitivos
    char re,res,resp,respu,cont[20];//Muchas char para controlar respuestas del usuario
    cout<<endl<<"Nombre del usuario: ";
    fflush(stdin);//Limpia buffer
    getline (cin,nombre);//Almacena en la string nombre
    cout<<endl<<"Ingrese password: ";
    cout.flush();//Limpia
    do//Para almacenar en arreglo
    {
        cont[i] = (unsigned char)getch();//Para que no muestre nada en pantalla
        if(cont[i]!=8)//Controlador
        {
            cout<<'$';//Cada vez que tecleees algo, aparece un simbolo
            i++;//Contador
        }
        else if(i>0)//Por si el usuario decide borrar
        {
            cout<<(char)8<<(char)32<<(char)8;
            i--;//Para restar, por si borro
        }
        cout.flush();//Limpia
        }
        while(cont[i-1]!=13);
        cont[i-1] = NULL;
        if(cont[0]=='c'&&cont[1]=='o'&&cont[2]=='n'&&cont[3]=='t'&&cont[4]=='r'&&cont[5]=='a'&&cont[6]=='s'&&cont[7]=='e'&&cont[8]=='n'&&cont[9]=='a')//Su contraseña
        {
            system("cls");//Borrar pantalla
            cout<<"Introduzca la placa: ";
            cin>>y.placa;//Almacena la placa
            re='s';//Para iniciar una vez el while
            while (re=='s'||re=='S')
            {
                system("cls");//Borra pantalla
                cout<<endl<<endl<<"a) Sin verificar"<<endl<<"b) Sin tenencia"<<endl<<"c) Reporte de robo!"<<endl<<"d) Sin placas"<<endl<<"e) Reporte de choque"<<endl<<"f) Sin problemas!"<<endl<<"g) Salir"<<endl;
                cin>>resp;//regresar al menu de reportes
                switch (resp)//while que trabaja con resp
                {
                case 'a':
                    system ("cls");
                    cout<<endl<<"Desea reportar a "<<y.placa<<" por no estar verificado? S/N ";
                    cin>>res;//regresar al menu de reportes
                    if (res=='s')
                    {
                        y.r1=1;//Contador para almacenar en el txt
                    }
                    cout<<endl<<"Desea registrar mas a "<<y.placa<<"? S/N ";
                    cin>>re;
                    break;
                case 'b':
                    system ("cls");
                    cout<<endl<<"Desea reportar a "<<y.placa<<" por no pagar tenencia? S/N ";
                    cin>>res;//regresar al menu de reportes
                    if (res=='s')
                    {
                        y.r2=1;//Contador para almacenar en el txt
                    }
                    cout<<endl<<"Desea registrar mas a "<<y.placa<<"?  S/N ";
                    cin>>re;
                    break;
                case 'c':
                    system ("cls");
                    cout<<endl<<"Desea reportar a "<<y.placa<<" por robo? S/N ";
                    cin>>res;//regresar al menu de reportes
                    if (res=='s')
                    {
                        y.r3=1;//Contador para almacenar en el txt
                    }
                    cout<<endl<<"Desea registrar mas a "<<y.placa<<"? S/N ";
                    cin>>re;
                    break;
                case 'd':
                    system ("cls");
                    cout<<endl<<"Desea reportar a "<<y.placa<<" por no estar verificado? S/N ";
                    cin>>res;
                    if (res=='s')
                    {
                        y.r4=1;//Contador para almacenar en el txt
                    }
                    cout<<endl<<"Desea registrar mas a "<<y.placa<<"? S/N ";
                    cin>>re;
                    break;
                case 'e':
                    system ("cls");
                    cout<<endl<<"Desea reportar a "<<y.placa<<" por no tener placas? S/N ";
                    cin>>res;//regresar al menu de reportes
                    if (res=='s')
                    {
                        y.r5=1;//Contador para almacenar en el txt
                    }
                    cout<<endl<<"Desea registrar mas a "<<y.placa<<"? S/N ";
                    cin>>re;
                    break;
                case 'f':
                    system("cls");
                    if(y.r1==1||y.r2==1||y.r3==1||y.r4==1||y.r5==1)//Condicion para que no se pueda decir que el coche esta limpio si tiene un reporte anterior
                    {
                        cout<<endl<<"Placa con reportes anteriores!";
                        system("pause");
                        y.r6=0;//Contador valuado en 0
                    }
                    else //Por si no tiene reporte, funcione con normalidad
                    {
                        cout<<endl<<"Ningun problema con "<<y.placa<<"!!";
                        y.r6=1;//Contador para escribir en el txt
                        cout<<endl<<"Desea registrar mas a "<<y.placa<<"? S/N ";
                        cin>>re;//regresar al menu de reportes
                    }
                    break;
                case 'g'://Para terminar el programa
                    system("cls");//limpiar pantalla
                    re='n';//Para que se detenga el while
                    break;
                }
            }
            system("cls");//Borrar pantalla
            cout<<endl<<"Desea guardar los registros de la placa "<<y.placa<<"? S/N";
            cin>>respu;//Respuesta del usuario
            if(respu=='s'||respu=='S')//Si decide si
            {
                if(!placa.is_open())//Condicion para abrir el doc. txt
                {
                    placa.seekp(0,ios::end);//Apuntador dirigido al final del programa
                    placa.open("E:/RPLACAS.txt", ios::app);//Indicador de que se agregaran datos
                }
            placa<<endl<<"Placa: "<<y.placa;//almacena en el txt lo que haya en la variable placa
            if(y.r1==1)//Si hay registro en r1
            {
                placa<<endl<<y.placa<<" con reporte por no estar verificado";//almacena este texto
            }
            else//Si no hay registro en r1
            {
                placa<<endl<<"Reporte de verificacion= No";//Almacena este textp
            }
            if(y.r2==1)//Si hay registro en r2
            {
                placa<<endl<<y.placa<<" no ha pagado tenencia";//Almacena este textp
            }
            else//Si no hay registro en r2
            {
                placa<<endl<<"Reporte por no pagar tenencia= No";//Almacena este textp
            }
            if(y.r3==1)//Si hay registro en r3
            {
                placa<<endl<<y.placa<<" auto robado!";
            }
            else
            {
                placa<<endl<<"Reporte de robo= No";
            }
            if(y.r4==1)
            {
                placa<<endl<<y.placa<<" Automovil sin placas";
            }
            else
            {
                placa<<endl<<"Reporte por no tener placas= No";
            }
            if(y.r5==1)
            {
                placa<<endl<<y.placa<<" reporte por choque fuerte";
            }
            else
            {
                placa<<endl<<"Reporte de choque fuerte= No";
            }
            if(y.r6==1)
            {
                placa<<endl<<"Automovil sin problemas!";
            }
            placa<<endl<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
            }
        }
}
