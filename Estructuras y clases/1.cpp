#inlclude <iostream>
#include <fstream>
using namespace std;

struct informacion
{
    string nombre;
    int edad;
};

informacion operator<<(informacion &nombre, informacion &edad)

int main()
{
    ofstream archivo;
    archivo("BaseDeDatos.txt",ios::app);

}

informacion operator<<(informacion &nombre, informacion &edad)
{
    informacion r;
}
