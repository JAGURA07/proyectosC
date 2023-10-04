#include<iostream>
#include <fstream>

class Pila
{
private:
    std::string dato;
    Pila *ptrSiguiente;
public:
    Pila();

   void deFicheroAPila(Nodo *ptrCima, std::ifstream& in);
    void empujarPila(Nodo *ptrCima, std::string info);
    void imprimePila(Pila x);
    /*void dePilaAVector(ptrNodoPila ptrActual, vector<string>& v);
    void ordenarPorBurbuja(vector<string>& v);
    void imprimeVector(const vector<string>& v);
    void deVectorACola(const vector<string>& v, ptrNodoCola *ptrCabeza, ptrNodoCola *ptrTalon);
    void agregarCola(ptrNodoCola *ptrCabeza, ptrNodoCola *ptrTalon, string valor);
    bool estaVacia(ptrNodoCola ptrCabeza);
    void imprimeCola(ptrNodoCola ptrActual);*/
};

Pila::Pila()
{
    Nodo nodo = NULL;
}

void Pila::deFicheroAPila(Nodo *ptrCima, std::ifstream& in)
{
    std::string nombre;

    for (size_t i = 0; i < 10; i++)
    {
        in>>nombre;
        empujarPila(ptrCima, nombre);
    }
}

void Pila::empujarPila(Nodo *ptrCima, std::string info)
{
    Nodo ptrNuevo;

    ptrNuevo = new Pila;

    if (ptrNuevo != NULL)
    {
        ptrNuevo->dato = info;
        ptrNuevo->ptrSiguiente = *ptrCima;
        *ptrCima = ptrNuevo;
    }
}


void imprimePila(Pila x)
{
    if (x ==  NULL)
        std::cout  << "La pila esta vacia" << std::endl;
    else
    {
        while (x != NULL)
        {
            std::cout << "-> " << x->dato;
            x = x->ptrSiguiente;
        }

        std::cout << "-> NULL\n\n";
    }
}


int main(int argv, char* arcg)
{
    ifstream in("Listar.txt");
    vector<string> vector;

    Pila a;
    a.imprimePila(a);
}
