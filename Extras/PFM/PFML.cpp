#include<iostream>
#include <fstream>
#include <string>
#include<windows.h>
#include<math.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include <cmath>
using namespace std;
fstream arch("PFMarcos.txt");
void hidrostatica(void);
void menu(void);
void fisica1 (void);
void uno (void);
char resp;
int boleta,tema,opc,running,aux,atm,aux2;
float f1,f2,a1,a2,p,h1,h2,p1,ph,v1,vo,pt,pr;
char contra,aux4,x{'s'},y{'s'};
string nomb,grupo;
int main ()
{
    ofstream arch;
    if(!arch.is_open())
    {
        arch.seekp(0,ios::end);
        arch.open("PFMarcos.txt", ios::app);
    }
    int elec;
    cout<<endl<<"Nombre: ";
    fflush(stdin);
    getline (cin, nomb);
    cout<<endl<<"Numero de boleta: ";
    cin>>boleta;
    cout<<endl<<"Grupo: ";
    fflush(stdin);
    getline (cin,grupo);
    arch<<endl<<"Nombre: "<<nomb;
    arch<<endl<<"Grupo: "<<grupo;
    arch<<endl<<"Boleta: "<<boleta;
    system ("cls");
    resp='s';
    while (resp=='s'||resp=='S')
    {
        system("cls");
    cout<<endl<<"Presiona 1 para Fisica 1 \n 2 para Fisica 2 \n 3 Para mostrar registros \nPrecione 0 para salir\n"<<endl;
    cin>>elec;
    system("cls");
    switch (elec)
    {
    case 1:
        arch<<endl<<"Ingreso  a Fisica 1";
        fisica1();
        system ("cls");
        cout<<endl<<"Desea regresar al menu inicial? S/N"<<endl;
        cin>>resp;
        break;
    case 2:
        arch<<endl<<"Ingreso  a Fisica 2";
        menu();
        system ("cls");
        cout<<endl<<"Desea regresar al menu inicial? S/N"<<endl;
        cin>>resp;
        break;
    case 3:
        uno();
        cin>>resp;
        break;
    case 0:
        resp='n';
        break;
     default:
        system("cls");
        cout<<endl<<"Elija un numero valido!";
        resp='s';
        break;
    }
    }
    arch<<endl<<"-------------------------------------------";
}
void menu(void)
{
    ofstream arch;
    if(!arch.is_open())
    {
        arch.seekp(0,ios::end);
        arch.open("PFMarcos.txt", ios::app);
    }
    char respu;
    respu='s';
    while (respu=='s'||respu=='S'){
            system("cls");
	cout << "******************************\n";
	cout << "********** FISICA II *********\n";
	cout << "******************************\n";
	cout << "Bienvenido! El siguiente programa te ayudara a resolver problemas e investigar acerca de Hisdrostatica y Cambios de temperatura\n";
	cout << "1.-Hidrostatica\n0.- Para salir\n";
	cout << "Porfavor introduce el numero del tema que desees: ";
	cin >> tema;
	system("cls");
	switch (tema)
	{
	case 1: cout << "Seleccionaste Hidrostatica!\n";
		system("pause");
		system("cls");
		hidrostatica();
		system("cls");
		cout<<endl<<"Regresar a menu? S/N"<<endl;
		cin>>respu;
		break;
    case 0:
            system("cls");
            respu='n';
        break;
	}
	if(tema==1)
    {
        arch<<endl<<"Ingreso a Hidroestatica";
    }
    }
}
void hidrostatica(void)
{
    ofstream arch;
    if(!arch.is_open())
    {
        arch.seekp(0,ios::end);
        arch.open("PFMarcos.txt", ios::app);
    }
    char respue;
    respue='s';
    while (respue=='s'||respue=='S'){
    system("cls");
    cout << "******************************\n";
    cout << "********* HIDROSTATICA *******\n";
    cout << "******************************\n";
    cout << "1.-Problemas\n2.-Diccionario\n3.-Salir\n";
    cout << "Introduce el numero de la opcion que desees: \n";
    cin >> opc;
    if(opc==1)
    {
        arch<<endl<<"Ingreso a problemas";
    }
    if(opc==2)
    {
        arch<<endl<<"Ingreso al diccionario";
    }
    switch(opc)
    {
    case 3:
        respue='n';
        break;
        case 1: cout << "Seleccionaste Problemas de Hidrostatica!\n";
                system("pause");
                while(x=='S'||x=='s')
                {
                system("cls");
                cout << "******************************\n";
                cout << "********* HIDROSTATICA *******\n";
                cout << "******************************\n";
                cout << "1.-Principio de Pascal\n2.-Presion\n";
                cout << "Introduce el numero del tipo de problema que deseas resolver:";
                cin >> opc;
                switch(opc)
                {
                case 1: system("cls");
                        cout << "\tSeleccionaste Principio de Pascal!\n\n";
                        cout << "Recuerda tener las unidades en el Sistema Internacional ;)\n";
                        system("pause");
                        system("cls");
                        cout << "Introduce el Valor en caso de contar con el dato y 0 si no\n";
                        cout << "Fuerza 1:";
                        cin >> f1;
                        cout << endl;
                        cout << "Area 1:";
                        cin >> a1;
                        cout << endl;
                        cout << "Fuerza 2:";
                        cin >> f2;
                        cout << endl;
                        cout << "Area 2:";
                        cin >> a2;
                        cout << endl;
                        cout << "Altura 1:";
                        cin >> h1;
                        cout << endl;
                        cout << "Altura 2:";
                        cin >> h2;
                        cout << endl;

                        for(aux=0;aux<=1;aux++)
                        {
                        if(f1==0)
                        {
                            f1=(f2*a1)/a2;

                        }
                        if(f2==0)
                        {
                            f2=(f1*a2)/a1;
                        }
                        if(a1==0)
                        {
                            a1=(f1*a2)/f2;
                        }
                        if(a2==0)
                        {
                            a2=(f2*a1)/f1;
                        }
                        if(h1==0)
                        {
                            h1=(a2*h2)/a1;
                        }
                        if(h2==0)
                        {
                            h2=(a1*h1)/a2;
                        }
                        }
                        cout << "Los resultados son:\n";
                        cout << "Fuerza 1: "<<f1<<endl;
                        cout << "Area 1: "<<a1<<endl;;
                        cout << "Fuerza 2: "<<f2<<endl;;
                        cout << "Area 2: "<<a2<<endl;;
                        cout << "Altura 1: "<<h1<<endl;;
                        cout << "Altura 2: "<<h2<<endl;;
                    break;
                case 2: system("cls");
                        cout << "\tSeleccionaste Presion!\n\n";
                        cout << "Recuerda tener las unidades en el Sistema Internacional ;)\n";
                        system("pause");
                        system("cls");
                        cout << "Introduce el Valor en caso de contar con el dato y 0 si no\n";
                        cout << endl;
                        cout << "Densidad del Liquido:";
                        cin >> p;
                        cout << endl;
                        cout << "Altura:";
                        cin >> h1;
                        cout << endl;
                        cout << "Area (En caso de tener):";
                        cin >> a1;
                        cout << endl;
                        cout << "Fuerza (En caso de tener):";
                        cin >> f1;
                        cout << endl;
                        cout << "Usar la Presion Hirostatica como presion? 0=No 1=Si";
                        cin >> aux2;
                        cout << endl;
                        if(aux2<=0)
                        {
                        cout << "Presion (En caso de tener):";
                        cin >> p1;
                        cout << endl;
                        }
                        cout << "Tomar en cuanta la presion Atmosferica? 0=No 1=Si";
                        cin >> atm ;
                        cout << endl;
                        ph=p*9.81*h1;
                        for(aux=0;aux<=1;aux++)
                        {
                            if(a1>0&&p1>0)
                            {
                                f1=p*a1;
                            }
                            if(aux2<=1)
                            {
                                f1=ph*a1;
                            }
                            if(a1>0&&f1>0)
                            {
                                p1=f1/a1;
                            }
                            if(atm>=1)
                            {
                                pt=ph+101325;
                            }
                            else
                            {
                                pt=ph;
                            }
                        }
                        cout << "Los resultados son:\n";
                        cout << "Densidad del Liquido: "<<p<<endl;
                        cout << "Altura: "<<h1<<endl;
                        cout << "Area: "<<a1<<endl;
                        cout << "Fuerza: "<<f1<<endl;
                        cout << "Presion: "<<p1<<endl;
                        cout << "Presion Hidrostatica: "<<ph<<endl;
                        cout << "Presion total: "<<pt<<endl;
                    break;
                }
                break;

        case 2: cout << "Seleccionaste Diccionario de Hidrostatica!\n";
                system("pause");
                while(x=='S'||x=='s')
                {
                system("cls");
                cout << "******************************\n";
                cout << "********* HIDROSTATICA *******\n";
                cout << "******************************\n";
                cout << "1.-Que es Hidrostatica?\n2.-Que es Viscosidad?\n3.-Que es Cohesion?\n4.-Que es Tension Superficial?\n5.-Que es Capilaridad?\n";
                cout << "6.-Que es Densidad?\n7.-Que es Densidad Relativa?\n8.-Que es Peso Especifico\n9.-Que es Presion Hidrostatica?\n";
                cout << "10.-Que es Presion Atmosferica?\n11.-Que es el Principio de Pascal?\n12.-Que es el Principio de Arquimides?\n13.-Que es Empuje?\n14.Salir\n";
                cout << "Introduce el numero de la opcion que desees: \n";
                cin >> opc;
                system("cls");
                switch(opc)
                {
                case 1: cout << "\n\t\tQue es Hidrostatica?\n\n";
                        cout << "La hidrostatica es la rama de la hidraulica que estudia los fenomenos asociados a los fluidos que se encuentran confinados en algun tipo de contenedor.\n";
                        system("pause");
                    break;
                case 2: cout << "\n\t\tQue es Viscosidad?\n\n";
                        cout << "La viscosidad de un fluido es una medida de su resistencia a las deformaciones graduales producidas por tensiones cortantes o tensiones de traccion.\nLa viscosidad se corresponde con el concepto informal de 'espesor'. Por ejemplo, la miel tiene una viscosidad mucho mayor que el agua.\n";
                        system("pause");
                    break;
                case 3: cout << "\n\t\tQue es Cohesion?\n\n";
                        cout << "Fuerza intermolecular se refiere a las interacciones que existen entre las moleculas conforme a su naturaleza.\nGeneralmente, la clasificación es hecha de acuerdo a la polaridad de las moléculas que están interaccionando, o sobre la base de la naturaleza de las moléculas,\nde los elementos que la conforman.\n";
                        system("pause");
                    break;
                case 4: cout << "\n\t\tQue es Tension Superficial?\n\n";
                        cout << "Se denomina tension superficial de un liquido a la cantidad de energia necesaria para aumentar su superficie por unidad de area.\nEsta definicion implica que el liquido presenta una resistencia al aumentar su superficie, lo que de efecto permite a algunos insectos,\ncomo el zapatero, poder desplazarse por la superficie del agua sin hundirse.\n";
                        system("pause");
                    break;
                case 5: cout << "\n\t\tQue es Capilaridad?\n\n";
                        cout << "La capilaridad es una propiedad de los fluidos que depende de su tension superficial la cual, a su vez,\ndepende de la cohesion del fluido y que le confiere la capacidad de subir o bajar por un tubo capilar.\n";
                        system("pause");
                    break;
                case 6: cout << "\n\t\tQue es Densidad?\n\n";
                        cout << "La densidad es una magnitud escalar referida a la cantidad de masa en un determinado volumen de una sustancia.\n";
                        system("pause");
                    break;
                case 7: cout << "\n\t\tQue es Densidad Relativa?\n\n";
                        cout << "La densidad relativa es una comparacion de la densidad de una sustancia con la densidad de otra que se toma como referencia:\nAmbas densidades se expresan en las mismas unidades y en iguales condiciones de temperatura y presion.\nLa densidad relativa es adimensional (sin unidades), ya que queda definida como el cociente de dos densidades.\n";
                        system("pause");
                    break;
                case 8: cout << "\n\t\tQue es Peso Especifico?\n\n";
                        cout << "Peso Especifico es una terminologia que se utiliza en quimica y fisica para describir a aquella relacion existente entre el peso y el volumen que ocupa una sustancia.\nLa unidad de medida que se utiliza para medir este peso especifico más comun es el Newton sobre metro cubico.\n";
                        system("pause");
                    break;
                case 9: cout << "\n\t\tQue es Presion Hidrostatica?\n\n";
                        cout << "La presion hidrostatica es la parte de la presion debida al peso de un fluido en reposo.\nEn un fluido en reposo la unica presion existente es la presion hidrostatica, en un fluido en movimiento puede aparecer una presion hidrodinamica adicional relacionada con la velocidad del fluido.\nEs la presion que sufren los cuerpos sumergidos en un liquido o fluido por el simple y sencillo hecho de sumergirse dentro de este.\n";
                        system("pause");
                    break;
                case 10:cout << "\n\t\tQue es Presion Atmosferica?\n\n";
                        cout << "La presion atmosferica en un punto coincide numericamente con el peso de una columna estatica de aire de seccion recta unitaria que se extiende desde ese punto hasta el limite superior de la atmosfera.\nComo la densidad del aire disminuye conforme aumenta la altura, no se puede calcular ese peso a menos que pudiera expresarse la variacion de la densidad del aire en funcion de la altitud o de la presion,\npor lo que no resulta facil hacer un calculo exacto de la presion atmosferica sobre un lugar de la superficie terrestre.\n";
                        system("pause");
                    break;
                case 11:cout << "\n\t\tQue es el Principio de Pascal?\n\n";
                        cout << "La presion ejercida sobre un fluido incompresible y en equilibrio dentro de un recipiente de paredes indeformables se transmite con igual intensidad en todas las direcciones y en todos los puntos del fluido.\n";
                        system("pause");
                    break;
                case 12:cout << "\n\t\tQue es el Principio de Arquimides?\n\n";
                        cout << "El principio de Arquimedes es un principio fisico que afirma:Un cuerpo total o parcialmente sumergido en un fluido en reposo, experimenta un empuje vertical y hacia arriba igual al peso de la masa del volumen del fluido que desaloja.\nEsta fuerza recibe el nombre de empuje hidrostatico o de Arquimedes, y se mide en newtons (en el SI).\n";
                        system("pause");
                    break;
                case 13:cout << "\n\t\tQue es Empuje?\n\n";
                        cout << "El empuje es una fuerza de reaccion descrita cuantitativamente por la tercera ley de Newton. Cuando un sistema expele o acelera masa en una direccion (accion), la masa acelerada causara una fuerza igual en direccion contraria (reaccion).\n";
                        system("pause");
                    break;
                case 14:
                    x='n';
                    break;
                }}
                break;
    }
}}
}
void fisica1 (void)
{
    ofstream arch;
    if(!arch.is_open())
    {
        arch.seekp(0,ios::end);
        arch.open("PFMarcos.txt", ios::app);
    }
    char running,again;
    int opc,co,ve,i;
    float velocidad,distancia,tiempo,v1,v2,aceleracion,fx,fy,vr,ar,fuerza[10],angulo[10],aux,aux1;
    fx=0;
    fy=0;
    aux1=0;
    running='s';
    again='s';
    while(running=='s'||running=='S')
    {
    system("cls");
    cout<<"Instrucciones:\nPara seleccionar una opcion introduce el numero de la opcion y presiona ENTER"<<endl;
    cout<<"1.-Movimiento Rectilineo Uniforme\n2.-Movimiento Rectilineo Uniformemente Variado\n3.-Suma o Resta de Vectores\n4.-Salir a menu"<<endl;
    cin>>opc;
    if(opc==1)
    {
        arch<<endl<<"Ingreso a MRU (Movimiento Rectilinio Uniforme)";
    }
    if(opc==2)
    {
        arch<<endl<<"Ingreso a MRUV (Movimiento Rectilinio Uniformemente Variado)";
    }
    if(opc==3)
    {
        arch<<endl<<"Ingreso a Suma y resta de vectores";
    }
    switch(opc)
    {
    case 1: system("cls");
            cout<<"Usted ha seleccionado Movimiento Rectilineo Uniforme"<<endl;
            system("pause");
            system("cls");
            again='s';
            while(again=='s'||again=='S')
            {
            system("cls");
            cout<<"Seleccione la incognita"<<endl;
            cout<<"1.-Distancia\n2.-Velocidad\n3.-Tiempo"<<endl;
            cin>>opc;
            switch(opc)
                {
                case 1: system("cls");
                        cout<<"Usted ha seleccionado Distancia"<<endl;
                        system("pause");
                        system("cls");
//**************************                       *****************************//
//**************************Introduccion de Valores*****************************//
//**************************                       *****************************//
                        cout<<"Introduzca el valor de la Velocidad y presiona ENTER:  ";
                        cin>>velocidad;
                        cout<<endl;
                        cout<<"Introduzca el valor de la Tiempo y presiona ENTER:  ";
                        cin>>tiempo;
//**************************                       *****************************//
//**************************Realizacion de Opreacion*****************************//
//**************************                       *****************************//
                        distancia=velocidad*tiempo;
                        system("cls");
                        cout<<"Distancia = Velocidad * Tiempo"<<endl;
                        cout<<"Distancia = "<<velocidad<<" * "<<tiempo<<endl;
                        cout<<"Distancia = "<<distancia<<endl;
                break;
                case 2: system("cls");
                        cout<<"Usted ha seleccionado Velocidad"<<endl;
                        system("pause");
                        system("cls");
//**************************                       *****************************//
//**************************Introduccion de Valores*****************************//
//**************************                       *****************************//
                        cout<<"Introduzca el valor de la Distancia y presiona ENTER:  ";
                        cin>>distancia;
                        cout<<endl;
                        cout<<"Introduzca el valor de la Tiempo y presiona ENTER:  ";
                        cin>>tiempo;
//**************************                       *****************************//
//**************************Realizacion de Opreacion*****************************//
//**************************                       *****************************//
                        velocidad=distancia/tiempo;
                        system("cls");
                        cout<<"Velocidad = Distancia / Tiempo"<<endl;
                        cout<<"Velocidad = "<<distancia<<" / "<<tiempo<<endl;
                        cout<<"Velocidad = "<<velocidad<<endl;
                break;
                case 3: system("cls");
                        cout<<"Usted ha seleccionado Tiempo"<<endl;
                        system("pause");
                        system("cls");
//**************************                       *****************************//
//**************************Introduccion de Valores*****************************//
//**************************                       *****************************//
                        cout<<"Introduzca el valor de la Distancia y presiona ENTER:  ";
                        cin>>distancia;
                        cout<<endl;
                        cout<<"Introduzca el valor de la velocidad y presiona ENTER:  ";
                        cin>>velocidad;
//**************************                       *****************************//
//**************************Realizacion de Opreacion*****************************//
//**************************                       *****************************//
                        tiempo=distancia/velocidad;
                        system("cls");
                        cout<<"Tiempo = Distancia / Velocidad"<<endl;
                        cout<<"Tiempo = "<<distancia<<" / "<<velocidad<<endl;
                        cout<<"Tiempo = "<<tiempo<<endl;
                break;
                }
                cout<<"\n¿Desea Realizar Otra Operacion de Movimiento Rectilineo Uniforme?\n"<<endl<<"Presiona S para continuar y N para volver al menu principal"<<endl;
                again=getch();
                }
    break;


            //**************************                       *****************************//
            //*****************Movimiento Rectilineo Uniformemente Variado******************//
            //**************************                       *****************************//


    case 2: system("cls");
            cout<<"Usted ha seleccionado Movimiento Rectilineo Uniformemente Variado"<<endl;
            system("pause");
            system("cls");
             again='s';
            while(again=='s'||again=='S')
            {
            system("cls");
            cout<<"Introduzca un '1' y presione ENTER si cuenta con el dato solicitado\n En caso de no contar con algun dato introduzca un '0' y presione ENTER"<<endl;
            cout<<"Se necesita un minimo de 3 datos"<<endl;
            cout<<"Distancia: ";
            cin>>distancia;
            cout<<endl;
            cout<<"Velocidad Inicial: ";
            cin>>v1;
            cout<<endl;
            cout<<"Velocidad Final: ";
            cin>>v2;
            cout<<endl;
            cout<<"Aceleracion: ";
            cin>>aceleracion;
            cout<<endl;
            cout<<"Tiempo: ";
            cin>>tiempo;
            cout<<endl;
            ve=distancia+v1+v2+aceleracion+tiempo;
            if(ve<3)
            {
                again='n';
                cout<<"Se necesitan minimo 3 Datos"<<endl;
                system("pause");
            }
            else
            {


if(distancia==0&&v1==0)
            {
            cout<<"Introduce los datos solicitados"<<endl;
            cout<<"Velocidad Final: ";
            cin>>v2;
            cout<<endl;
            cout<<"Aceleracion: ";
            cin>>aceleracion;
            cout<<endl;
            cout<<"Tiempo: ";
            cin>>tiempo;
            cout<<endl;
            v1= (aceleracion*tiempo-v2)*-1;
            distancia=v1*tiempo+(aceleracion*(tiempo*tiempo)/2);

            system("cls");
            cout<<"La Distnacia es de: "<<distancia<<endl;
            cout<<"La velocidad Inicial es de: "<<v1<<endl;
            }

if(distancia==0&&v2==0)

            {
            cout<<"Introduce los datos solicitados"<<endl;
            cout<<"Velocidad Inicial: ";
            cin>>v1;
            cout<<endl;
            cout<<"Aceleracion: ";
            cin>>aceleracion;
            cout<<endl;
            cout<<"Tiempo: ";
            cin>>tiempo;
            cout<<endl;
            v2= v1+(aceleracion*tiempo);
            distancia=v1*tiempo+(aceleracion*(tiempo*tiempo)/2);

            system("cls");
            cout<<"La Distnacia es de: "<<distancia<<endl;
            cout<<"La velocidad Final es de: "<<v2<<endl;
            }
if(distancia==0&&aceleracion==0)
            {
            cout<<"Introduce los datos solicitados"<<endl;
            cout<<"Velocidad Inicial: ";
            cin>>v1;
            cout<<endl;
            cout<<"Velocidad Final: ";
            cin>>v2;
            cout<<endl;
            cout<<"Tiempo: ";
            cin>>tiempo;
            cout<<endl;
            aceleracion=(v2-v1)/tiempo;
            distancia=v1*tiempo+(aceleracion*(tiempo*tiempo)/2);

            system("cls");
            cout<<"La Distnacia es de: "<<distancia<<endl;
            cout<<"La aceleracion es de: "<<aceleracion<<endl;
            }

if(distancia==0&&tiempo==0)
            {
            cout<<"Introduce los datos solicitados"<<endl;
            cout<<"Velocidad Inicial: ";
            cin>>v1;
            cout<<endl;
            cout<<"Velocidad Final: ";
            cin>>v2;
            cout<<endl;
            cout<<"Aceleracion: ";
            cin>>aceleracion;
            cout<<endl;
            tiempo=(v2-v1)/aceleracion;
            distancia=v1*tiempo+(aceleracion*(tiempo*tiempo)/2);

            system("cls");
            cout<<"La Distnacia es de: "<<distancia<<endl;
            cout<<"La Tiempo es de: "<<tiempo<<endl;
            }
if(v1==0&&aceleracion==0)
            {
            cout<<"Introduce los datos solicitados"<<endl;
            cout<<"Distancia: ";
            cin>>distancia;
            cout<<endl;
            cout<<"Velocidad Final: ";
            cin>>v2;
            cout<<endl;
            cout<<"Tiempo: ";
            cin>>tiempo;
            cout<<endl;
            v1=((distancia/tiempo)*2)-v2;
            aceleracion=(v2-v1)/tiempo;

            system("cls");
            cout<<"La Velocidad Inicial es de: "<<v1<<endl;
            cout<<"La Aceleracion es de: "<<aceleracion<<endl;
            }
if(v1==0&&tiempo==0)
            {
            cout<<"Introduce los datos solicitados"<<endl;
            cout<<"Distancia: ";
            cin>>distancia;
            cout<<endl;
            cout<<"Velocidad Final: ";
            cin>>v2;
            cout<<endl;
            cout<<"Aceleracion: ";
            cin>>aceleracion;
            cout<<endl;
            v1=	sqrt((v2*v2)-(2*aceleracion*distancia));
            tiempo=(v2-v1)/aceleracion;


            system("cls");
            cout<<"La Velocidad Inicial es de: "<<v1<<endl;
            cout<<"El Tiempo es de: "<<tiempo<<endl;
            }
if(v2==0&&aceleracion==0)
            {
            cout<<"Introduce los datos solicitados"<<endl;
            cout<<"Distancia: ";
            cin>>distancia;
            cout<<endl;
            cout<<"Velocidad Inicial: ";
            cin>>v1;
            cout<<endl;
            cout<<"Tiempo: ";
            cin>>tiempo;
            cout<<endl;
            v2=2*(distancia/tiempo)-v1;
            aceleracion=(v2-v1)/tiempo;


            system("cls");
            cout<<"La Velocidad Final es de: "<<v2<<endl;
            cout<<"La aceleracion es de : "<<aceleracion<<endl;
            }
if(v2==0&&tiempo==0)
            {
            cout<<"Introduce los datos solicitados"<<endl;
            cout<<"Distancia: ";
            cin>>distancia;
            cout<<endl;
            cout<<"Velocidad Inicial: ";
            cin>>v1;
            cout<<endl;
            cout<<"Aceleracion: ";
            cin>>aceleracion;
            cout<<endl;
            v2=sqrt((v1*v1)+(2*aceleracion*distancia));
            tiempo=(v2-v1)/aceleracion;;


            system("cls");
            cout<<"La Velocidad Final es de: "<<v2<<endl;
            cout<<"El Tiempo es de : "<<tiempo<<endl;
            }
if(aceleracion==0&&tiempo==0)
            {
            cout<<"Introduce los datos solicitados"<<endl;
            cout<<"Distancia: ";
            cin>>distancia;
            cout<<endl;
            cout<<"Velocidad Inicial: ";
            cin>>v1;
            cout<<endl;
            cout<<"Velocidad Final: ";
            cin>>v2;
            cout<<endl;
            aceleracion=(v2-v1)/tiempo;
            tiempo=(v2-v1)/aceleracion;;


            system("cls");
            cout<<"La Aceleracion es de: "<<aceleracion<<endl;
            cout<<"El Tiempo es de : "<<tiempo<<endl;
            }

            }



                cout<<"\n¿Desea Realizar Otra Operacion de Movimiento Rectilineo Uniformemente Variado?\n"<<endl<<"Presiona S para continuar y N para volver al menu principal"<<endl;
                again=getch();
                }
    break;
    case 3: system("cls");
            cout<<"Usted ha seleccionado Suma y Resta de Vectores"<<endl;
            system("pause");
            system("cls");
             again='s';
            while(again=='s'||again=='S')
            {
                cout<<"Antes de Introducir los datos asegurese que los angulos sean modificados en caso de ser resta o suma"<<endl;
                cout<<"Introduce el numero de Vectores\nComo minimo 3"<<endl;
                cout<<"Numero de Vecotres: ";
                cin>>i;
                if(i<3)
                {
                    again='n';
                cout<<"Se necesitan minimo 3 Vectores"<<endl;
                system("pause");
                }
                else
                {
                        for(co=0;co<i;co++)
                        {
                            cout<<"Introduce la Fuerza del Vector numero "<<co+1<<": ";
                            cin>>fuerza[co];
                            cout<<endl;
                            cout<<"Introduce el Angulo del Vector numero "<<co+1<<": ";
                            cin>>angulo[co];
                            cout<<endl;
                            aux=fuerza[co]*cos(angulo[co]*3.14159265/180);
                            fx=fx+aux;
                            aux=fuerza[co]*sin(angulo[co]*3.14159265/180);
                            fy=fy+aux;



                        }
                        cout<<"Introduce el cuadrante en el que se encuentra el Vector Resultante: "<<endl;
                        cin>>co;
                        switch(co)
                        {
                        case 1: aux1=fx/fy;
                                aux=atan(aux1);
                                aux=aux*57.2958;
                                if(aux<0)
                                {
                                    aux=aux*-1;
                                }
                                ar=90-aux;
                        break;
                        case 2: aux1=fx/fy;
                                aux=atan(aux1);
                                aux=aux*57.2958;
                                if(aux<0)
                                {
                                    aux=aux*-1;
                                }
                                ar=90+aux;
                        break;
                        case 3: aux1=fx/fy;
                                aux=atan(aux1);
                                aux=aux*57.2958;
                                if(aux<0)
                                {
                                    aux=aux*-1;
                                }
                                ar=270-aux;
                        break;
                        case 4: aux1=fx/fy;
                                aux=atan(aux1);
                                aux=aux*57.2958;
                                if(aux<0)
                                {
                                    aux=aux*-1;
                                }
                                ar=270+aux;
                        break;
                        }
                        system("cls");
                        vr=sqrt((fx*fx)+(fy*fy));
                        cout<<"Fuerzas resultantes en X: "<<fx<<endl;
                        cout<<"Fuerzas resultantes en Y: "<<fy<<endl;
                        cout<<"El Vector resultante es igual a: "<<vr<<endl;
                        cout<<"El valor de el Angulo resultante es igual a: "<<ar<<endl;
                }
                 cout<<"\n¿Desea Realizar Otra Operacion de Suma y Resta de Vectores?\n"<<endl<<"Presiona S para continuar y N para volver al menu principal"<<endl;
                again=getch();
            }
    break;
    case 4:
                            system("cls");
                            running='n';
                            break;
    }
    }
}
void uno (void)
{
    system("cls");
    cout<<"Contra: ";
    fflush(stdin);
    cin>>contra;
    if(contra=='c')
    {
        FILE *arch= fopen("PFMarcos.txt","r");
        int c;
        while ((c=fgetc(arch))!= EOF)
        {
            putchar(c);
        }
        cout<<endl;
        system("pause");
            cout<<endl<<"Desea salir al menu? S/N"<<endl;
    }
    else
    {
        system("cls");
        cout<<endl<<"Contra incorrecta"<<endl;
    }
}
