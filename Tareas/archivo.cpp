using namespace std;
#include<iostream>
#include<fstream>

struct persona{
    char nombre[8];
    int edad;
    };


int main()
{
    ofstream salida;
    ifstream entrada;
    persona yz;
    salida.open("C:/Users/Jafet Gutierrez/Downloads/agenda.dat", ios::binary);
    persona y={"zorra",69};
    salida.write((char*)&y,sizeof(persona));
    salida.close();
    entrada.open("C:/Users/Jafet Gutierrez/Downloads/agenda.dat",ios::binary);
    while(entrada.read((char*)&yz,sizeof(persona)))
    {
        cout<<yz.nombre<<endl;
        cout<<yz.edad<<endl;
    }
    entrada.close();
    return 0;

}

