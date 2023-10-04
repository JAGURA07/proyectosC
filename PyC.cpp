#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <utility>  // swap

using namespace std;

struct Cola
{
    string dato;
    Cola *ptrSiguiente;
};

struct Pila
{
    string dato;
    Pila *ptrSiguiente;
};

typedef Cola *ptrNodoCola;
typedef Pila *ptrNodoPila;

void deFicheroAPila(ptrNodoPila *ptrCima, ifstream& in);
void empujarPila(ptrNodoPila *ptrCima, string info);
void imprimePila(ptrNodoPila ptrActual);
void dePilaAVector(ptrNodoPila ptrActual, vector<string>& v);
void ordenarPorBurbuja(vector<string>& v);
void imprimeVector(const vector<string>& v);
void deVectorACola(const vector<string>& v, ptrNodoCola *ptrCabeza, ptrNodoCola *ptrTalon);
void agregarCola(ptrNodoCola *ptrCabeza, ptrNodoCola *ptrTalon, string valor);
bool estaVacia(ptrNodoCola ptrCabeza);
void imprimeCola(ptrNodoCola ptrActual);

int main()
{
    ifstream in("Listar.txt");
    vector<string> vector;

    ptrNodoCola ptrCabeza = NULL;
    ptrNodoCola ptrTalon = NULL;

    ptrNodoPila ptrPila1 = NULL;
    ptrNodoPila ptrPila2 = NULL;


    deFicheroAPila(&ptrPila1, in);
    deFicheroAPila(&ptrPila2, in);

    cout << "\nPila 1: ";
    imprimePila(ptrPila1);
    cout << "\nPila 2: ";
    imprimePila(ptrPila2);

    dePilaAVector(ptrPila1, vector);
    dePilaAVector(ptrPila2, vector);

    ordenarPorBurbuja(vector);

    cout << "\nVector ordenado: ";
    imprimeVector(vector);

    deVectorACola(vector, &ptrCabeza, &ptrTalon);

    cout << "\nCola: ";
    imprimeCola(ptrCabeza);

    return EXIT_SUCCESS;
}

void deFicheroAPila(ptrNodoPila *ptrCima, ifstream& in)
{
    string nombre;

    for (size_t i = 0; i < 10; i++)
    {
        in >> nombre;
        empujarPila(ptrCima, nombre);
    }
}

void empujarPila(ptrNodoPila *ptrCima, string info)
{
    ptrNodoPila ptrNuevo;

    ptrNuevo = new Pila;
|
    if (ptrNuevo != NULL)
    {
        ptrNuevo->dato = info;
        ptrNuevo->ptrSiguiente = *ptrCima;
        *ptrCima = ptrNuevo;
    }
}

void imprimePila(ptrNodoPila ptrActual)
{
    if (ptrActual ==  NULL)
        cout  << "La pila esta vacia" << endl;

    else
    {
        while (ptrActual != NULL)
        {
            cout << "-> " << ptrActual->dato;
            ptrActual = ptrActual->ptrSiguiente;
        }

        cout << "-> NULL\n\n";
    }
}

void dePilaAVector(ptrNodoPila ptrActual, vector<string>& v)
{
    while (ptrActual != NULL)
        {
            v.push_back(ptrActual->dato);
            ptrActual = ptrActual->ptrSiguiente;
        }
}

void ordenarPorBurbuja(vector<string>& v)
{
    for (size_t i = 0; i < v.size() - 1; i++)
        for (size_t j = 0; j < v.size() - i - 1; j++)
            if (v[j] > v[j + 1])
                swap(v[j], v[j+1]);
}

void imprimeVector(const vector<string>& v)
{
    for (size_t i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    cout << endl;
}

void deVectorACola(const vector<string>& v, ptrNodoCola *ptrCabeza, ptrNodoCola *ptrTalon)
{
    for (size_t i = 0; i < v.size(); i++)
        agregarCola(ptrCabeza, ptrTalon, v[i]);
}

void agregarCola(ptrNodoCola *ptrCabeza, ptrNodoCola *ptrTalon, string valor)
{
    ptrNodoCola ptrNuevo;

    ptrNuevo = new Cola;

    ptrNuevo->dato = valor;
    ptrNuevo->ptrSiguiente = NULL;

    if (estaVacia(*ptrCabeza))
        *ptrCabeza = ptrNuevo;

    else
        (*ptrTalon)->ptrSiguiente = ptrNuevo;

    *ptrTalon = ptrNuevo;
}

bool estaVacia(ptrNodoCola ptrCabeza)
{
    return ptrCabeza == NULL;
}

void imprimeCola(ptrNodoCola ptrActual)
{
    if (ptrActual ==  NULL)
        cout  << "La pila esta vacia" << endl;

    else
    {
        while (ptrActual != NULL)
        {
            cout << "-> " << ptrActual->dato;
            ptrActual = ptrActual->ptrSiguiente;
        }

        cout << "-> NULL\n\n";
    }
}
