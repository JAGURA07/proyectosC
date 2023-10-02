using namespace std;
#include<iostream>
#include<fstream>
#include<string>
#include<conio.h>
#include<vector>
char memo[50];
void fmemo(void);
void abrir(void);
void editar(void);
void nuevo(void);
bool salir(void);
bool menu(void);

int registros(void)
{
    ifstream entrada;
    entrada.open("memo",ios::binary|ios::in);
    int i;
    char x[7][7];
    for(i=0;entrada.read((char*)&x,sizeof(char[7][7]));i++);
    cout<<"Existen "<<i<<" registros"<<endl;
    entrada.close();
    return i;
}
void abrir()
{
    int opt;
    registros();
    cout<<"Introduzca el numero del registro que desea mostrar. Presione 0 para mostrar todos los registros"<<endl;
    cin>>opt;
    ifstream entrada;
    char x[7][7];
    if(opt==0)
    {
        entrada.seekg(0,ios::beg);
        entrada.open("memo",ios::binary|ios::in);
        while(entrada.read((char*)&x,sizeof(char[7][7])))
        {
            for(int i=0;i<7;i++)
            {
                for(int c=0;c<7;c++)
                {
                    cout<<x[i][c];
                }
                cout<<endl;
            }
            cout<<endl;
        }
        entrada.close();
    }
    else
    {
        entrada.open("memo",ios::binary);
        entrada.seekg((opt-1)* sizeof(char[7][7]),ios::beg);
        entrada.read((char*)&x,sizeof(char[7][7]));
        entrada.close();
        for(int i=0;i<7;i++)
        {
            for(int c=0;c<7;c++)
            {
                cout<<x[i][c];
            }
            cout<<endl;
        }
        cout<<endl;
    }
}
void fmemo(void)
{
    string ffg;
    ffg="e:/Programacion_modular/Tercer_parcial/26_05_18.dat";
    cout<<"Ingrese la unidad de memoria"<<endl;
    ffg[0]=getch();
    for(int z=0;z<50;z++)
    memo[z]=ffg[z];
    cout<<memo<<'*'<<endl;
}
void editar(void)
{
    char mat[7][7],q;
    int ind,col,fil,regis;
    regis=registros();
    cout<<"Seleccione el archivo que desea editar"<<endl;
    cin>>ind;
    ifstream ensa;
    ofstream ensa1;
    ensa.open("memo",ios::binary|ios::in);
    ensa.seekg((ind-1)* sizeof(char[7][7]),ios::beg);
    ensa.read((char*)&mat,sizeof(char[7][7]));
    ensa.close();
    for(int i=0;i<7;i++)
    {
        for(int c=0;c<7;c++)
        {
            cout<<mat[i][c];
        }
        cout<<endl;
    }
    do
    {
        cout<<"Introduzca el valor de la columna que desea cambiar"<<endl;
        cin>>fil;
        cout<<"Introduzca el valor de la fila que desea cambiar"<<endl;
        cin>>col;
        col--;fil--;
        cout<<"1 para cuadro oscuro. 0 para cuadro claro"<<endl;
        bool k;
        cin>>k;
        if(k)//█
        mat[col][fil]=219;//░
        else
        mat[col][fil]=176;
        for(int i=0;i<7;i++)
        {
            for(int c=0;c<7;c++)
            {
                cout<<mat[i][c];
            }
            cout<<endl;
        }
        cout<<"Presione espacio si desea realizar otro cambio en el mismo archivo"<<endl;
        q=getch();
    }
    while(q==32);
    ensa.open("memo",ios::binary|ios::in);
    vector<vector<vector<char> > >aux(1);
    for(int i=0;i<regis;i++)
    {
        aux.resize(i+1);
        for(int c=0;c<7;c++)
        {
            aux[i].resize(7);
            for(int z=0;z<7;z++)
            aux[i][c].resize(7);
        }
    }
    char mat_aux[7][7];
    for(int i=0;ensa.read((char*)&mat_aux,sizeof(char[7][7]));i++)
    {
        for(int c=0;c<7;c++)
        {
            for(int z=0;z<7;z++)
            {
                aux[i][c][z]=mat_aux[c][z];
            }
        }
    }
    ensa.close();
    ensa1.seekp(0,ios::beg);
    ensa1.open("memo",ios::binary|ios::out);
    for(int i=0;i<aux.size();i++)
    {
        for(int c=0;c<7;c++)
        {
            for(int z=0;z<7;z++)
            {
                if(i!=ind-1)
                    mat_aux[c][z]=aux[i][c][z];
                else
                    mat_aux[c][z]=mat[c][z];
            }
        }

        ensa1.write((char*)&mat_aux,sizeof(char[7][7]));
    }
    ensa1.close();
}
void nuevo()
{
    char m[7][7],z;
    ofstream salida;
    salida.seekp(0,ios::end);
    salida.open("memo",ios::binary|ios::app);
    cout<<"Introduce 0 (cuadro claro) o 1 (cuadro oscuro) para llenar progresivamente la imagen"<<endl;
    for(int i=0;i<7;i++)
    {
        for(int c=0;c<7;c++)
        {
            z=getch();
            if(z=='1')
                m[i][c]=219;
            else
                m[i][c]=176;
            cout<<m[i][c];
        }
        cout<<endl;
    }
    salida.write((char*)&m,sizeof(char[7][7]));
    salida.close();
    ifstream entrada;
    entrada.open("memo",ios::binary|ios::in);
    char y[7][7];
    entrada.read((char*)&y,sizeof(char[7][7]));
    entrada.close();
    bool b=1;
    for(int i=0;i<7;i++)
        for(int g=0;g<7;g++)
            if(m[i][g]!=y[i][g])
                b=0;
    registros();
    if(b)
    cout<<"Se ha ingresado correctamente su nueva figura con el siguiente id"<<endl;
}
bool salir()
{
    bool b;
    cout<<"Gracias por utilizar un programa elaborado por Angel Mares. Coautor: Angel Nunez"<<endl;
    b=0;
    return b;
}
bool menu()
{
    bool o=1;
    int m;
    cout<<"Seleccione una opcion"<<endl<<"1 Abrir"<<endl<<"2 Editar"<<endl<<"3 Nuevo"<<endl<<"4 Salir"<<endl;
    cin>>m;
    switch(m)
    {
        case 1:abrir();
        break;
        case 2:editar();
        break;
        case 3:nuevo();
        break;
        case 4:o=salir();
        break;
        default:cout<<"Error. El programa cerrara en breve"; o=0;
        break;
    }
    return o;
}
int main()
{
    bool s;
    fmemo();
    do{
        s=menu();
    }
    while(s);
}
