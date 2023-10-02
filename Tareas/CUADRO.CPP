using namespace std;
#include<iostream>
#include<windows.h>
int numero[16],seleccion,suma=0,intentos{4},seleccionados[4],aux,i,c;
char running{'S'};
void inicializacion(void);
void tabla(void);
void input(void);
void cases(void);
void selecciones(void);
void inicializacion(void)
{
    cout<<"******Suma magica******"<<endl;
    cout<<"Intrucciones:\nSelecciona un numero de la tabla, los ceros no se pueden elegir\nsolo puede elegir una sola vez el numero\n";
    cout<<"\nSiguiendo estas reglas, seleccionar 4 nuemros, tu suma siempre sera de 34\n";
    cout<<"\nA jugar!!!!\n";

}
void tabla(void)
{
    c=1;
    for(i=0;i<=15;i++)
    {
        numero[i]=c;
        c++;
    }
    cout<<"\nNumeros que puedes seleccionar:"<<endl;
    cout<<numero[0]<<"         "<<numero[1]<<"         "<<numero[2]<<"         "<<numero[3]<<endl;
    cout<<numero[4]<<"         "<<numero[5]<<"         "<<numero[6]<<"         "<<numero[7]<<endl;
    cout<<numero[8]<<"         "<<numero[9]<<"        "<<numero[10]<<"        "<<numero[11]<<endl;
    cout<<numero[12]<<"        "<<numero[13]<<"        "<<numero[14]<<"        "<<numero[15]<<endl;
}
void cases(void)
{
    switch(seleccion)
    {
    case 1: seleccion==numero[0];
            if(seleccion!=0)
            {
                seleccionados[intentos]=seleccion;
                suma=suma+seleccion;
                numero[1]=0; numero[2]=0; numero[3]=0; numero[4]=0; numero[8]=0; numero[12]=0;
            }
        break;
    case 2: seleccion==numero[1];
            if(seleccion!=0)
            {
                seleccionados[intentos]=seleccion;
                suma=suma+seleccion;
                numero[0]=0; numero[2]=0; numero[3]=0; numero[5]=0; numero[9]=0; numero[13]=0;
            }
        break;
    case 3: seleccion==numero[2];
            if(seleccion!=0)
            {
                seleccionados[intentos]=seleccion;
                suma=suma+seleccion;
                numero[0]=0; numero[1]=0; numero[3]=0; numero[6]=0; numero[10]=0; numero[14]=0;
            }
        break;
    case 4: seleccion==numero[3];
            if(seleccion!=0)
            {
                seleccionados[intentos]=seleccion;
                suma=suma+seleccion;
                numero[1]=0; numero[2]=0; numero[0]=0; numero[7]=0; numero[11]=0; numero[15]=0;
            }
        break;
    case 5: seleccion==numero[4];
            if(seleccion!=0)
            {
                seleccionados[intentos]=seleccion;
                suma=suma+seleccion;
                numero[5]=0; numero[6]=0; numero[7]=0; numero[0]=0; numero[8]=0; numero[12]=0;
            }
        break;
    case 6: seleccion==numero[5];
            if(seleccion!=0)
            {
                seleccionados[intentos]=seleccion;
                suma=suma+seleccion;
                numero[1]=0; numero[4]=0; numero[6]=0; numero[7]=0; numero[9]=0; numero[13]=0;
            }
        break;
    case 7: seleccion==numero[6];
            if(seleccion!=0)
            {
                seleccionados[intentos]=seleccion;
                suma=suma+seleccion;
                numero[2]=0; numero[4]=0; numero[5]=0; numero[7]=0; numero[10]=0; numero[14]=0;
            }
        break;
    case 8: seleccion==numero[7];
            if(seleccion!=0)
            {
                seleccionados[intentos]=seleccion;
                suma=suma+seleccion;
                numero[3]=0; numero[4]=0; numero[5]=0; numero[6]=0; numero[11]=0; numero[15]=0;
            }
        break;
    case 9: seleccion==numero[8];
            if(seleccion!=0)
            {
                seleccionados[intentos]=seleccion;
                suma=suma+seleccion;
                numero[0]=0; numero[4]=0; numero[9]=0; numero[10]=0; numero[13]=0; numero[14]=0;
            }
        break;
    case 10: seleccion==numero[9];
            if(seleccion!=0)
            {
                seleccionados[intentos]=seleccion;
                suma=suma+seleccion;
                numero[1]=0; numero[5]=0; numero[8]=0; numero[10]=0; numero[11]=0; numero[13]=0;
            }
        break;
    case 11: seleccion==numero[10];
            if(seleccion!=0)
            {
                seleccionados[intentos]=seleccion;
                suma=suma+seleccion;
                numero[2]=0; numero[6]=0; numero[8]=0; numero[9]=0; numero[11]=0; numero[14]=0;
            }
        break;
    case 12: seleccion==numero[11];
            if(seleccion!=0)
            {
                seleccionados[intentos]=seleccion;
                suma=suma+seleccion;
                numero[3]=0; numero[7]=0; numero[8]=0; numero[9]=0; numero[10]=0; numero[15]=0;
            }
        break;
    case 13: seleccion==numero[12];
            if(seleccion!=0)
            {
                seleccionados[intentos]=seleccion;
                suma=suma+seleccion;
                numero[0]=0; numero[4]=0; numero[8]=0; numero[13]=0; numero[14]=0; numero[15]=0;
            }
        break;
    case 14: seleccion==numero[13];
            if(seleccion!=0)
            {
                seleccionados[intentos]=seleccion;
                suma=suma+seleccion;
                numero[1]=0; numero[5]=0; numero[9]=0; numero[12]=0; numero[14]=0; numero[15]=0;
            }
        break;
    case 15: seleccion==numero[14];
            if(seleccion!=0)
            {
                seleccionados[intentos]=seleccion;
                suma=suma+seleccion;
                numero[2]=0; numero[6]=0; numero[10]=0; numero[12]=0; numero[13]=0; numero[15]=0;
            }
        break;
    case 16: seleccion==numero[15];
            if(seleccion!=0)
            {
                seleccionados[intentos]=seleccion;
                suma=suma+seleccion;
                numero[3]=0; numero[7]=0; numero[11]=0; numero[12]=0; numero[13]=0; numero[14]=0;
            }
        break;
  default: cout<<"Numero invalido\n";
        break;
    }
}
void input(void)
{
    cout<<"Numero:";
    cin>>seleccion;
}
void selecciones(void)
{
    switch(intentos)
    {
        case 3: cout<<"\nSeleccion 1:"<<seleccionados[4]<<endl;
        break;
        case 2: cout<<"\nSeleccion 1:"<<seleccionados[4]<<endl;
                cout<<"Seleccion 2:"<<seleccionados[3]<<endl;
        break;
        case 1: cout<<"\nSeleccion 1:"<<seleccionados[4]<<endl;
                cout<<"Seleccion 2:"<<seleccionados[3]<<endl;
                cout<<"Seleccion 3:"<<seleccionados[2]<<endl;
        break;
        case 0: cout<<"\nSeleccion 1:"<<seleccionados[4]<<endl;
                cout<<"Seleccion 2:"<<seleccionados[3]<<endl;
                cout<<"Seleccion 3:"<<seleccionados[2]<<endl;
                cout<<"Seleccion 4:"<<seleccionados[1]<<endl;

        break;

    }
}
main(void)
{
    while(running=='s'||running=='S')
    {

        intentos=4;
        for(intentos=4;intentos!=0;intentos--)
        {
            system("cls");
            inicializacion();
            tabla();
            selecciones();
            input();
            cases();
            cout<<"Si sumas lo que seleccionaste, Cuanto da???";
        }
        cout<<"\nDesea Continuar? S/N ";
        cin>>running;
        if(running=='S'||running=='s')
        {
            for(aux=0;aux<=16;aux++)
            {
                numero[aux]=aux+1;
            }
        }
    }
}
