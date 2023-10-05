#include<iostream>
#include<algorithm>
#include<string.h>
#include<vector>
using namespace std;

class Arista
{
private:
    int vertice1,vertice2,peso;
public:
    Arista(int,int,int);
    int Getvertice1();
    int Getvertice2();
    int Getpeso();
    bool operator<(const Arista& otro) const;
};

Arista::Arista(int v1,int v2,int p)
{
    vertice1=v1;
    vertice2=v2;
    peso=p;
}

int Arista::Getvertice1()
{
    return vertice1;
}

int Arista::Getvertice2()
{
    return vertice2;
}

int Arista::Getpeso()
{
    return peso;
}

bool Arista::operator<(const Arista& otro) const
{
    return (peso<otro.peso);
}

class Grafo
{
private:
    int V;
    vector<Arista>aristas;
public:
    Grafo(int);
    void IngresarArista(int,int,int);
    int buscar(int subset[],int i);
    void unir(int subset[],int v1, int v2);
    void kruskal();
};

Grafo::Grafo(int v)
{
    V=v;
}

void Grafo::IngresarArista(int v1,int v2,int peso)
{
    Arista aux(v1,v2,peso);
    aristas.push_back(aux);
}

int Grafo::buscar(int subset[],int i)
{
    if(subset[i]==-1)
        return i;
    return buscar(subset,subset[i]);
}

 void Grafo::unir(int subset[],int v1, int v2)
 {
     int v1_set=buscar(subset,v1);
     int v2_set=buscar(subset,v2);
     subset[v1_set]=v2_set;
 }

 void Grafo::kruskal()
 {
     vector<Arista> arbol;
     int size_aristas=aristas.size();
     sort(aristas.begin(),aristas.end());
     int* subset=new int[V];
     memset(subset,-1,sizeof(int)* V);
     for(int i=0;i<size_aristas;i++)
     {
         int v1=buscar(subset,aristas[i].Getvertice1());
         int v2=buscar(subset,aristas[i].Getvertice2());
         if(v1!=v2)
         {
             arbol.push_back(aristas[i]);
             unir(subset,v1,v2);
         }
     }
     int size_arbol=arbol.size();
     for(int i=0;i<size_arbol;i++)
     {
         char v1='A'+arbol[i].Getvertice1();
         char v2='A'+arbol[i].Getvertice2();
         cout<<"("<<v1<<", "<<v2<<") = "<<arbol[i].Getpeso()<<endl;
     }
 }

 int main(int argc, char *argv[])
{
	Grafo g(7); // grafo

	// adiciona as arestas
	g.IngresarArista(0, 1, 7);
	g.IngresarArista(0, 3, 5);
	g.IngresarArista(1, 2, 8);
	g.IngresarArista(1, 3, 9);
	g.IngresarArista(1, 4, 7);
	g.IngresarArista(2, 4, 5);
	g.IngresarArista(3, 4, 15);
	g.IngresarArista(3, 5, 6);
	g.IngresarArista(4, 5, 8);
	g.IngresarArista(4, 6, 9);
	g.IngresarArista(5, 6, 11);

	g.kruskal(); // roda o algoritmo de Kruskal

	return 0;
}
