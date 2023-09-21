#include<bits/stdc++.h>
using namespace std;

#define INF 999         //Infinito definido cómo 999

int N;                  //Variable de cantidad de nodos
int src;                //Variable de inicio de ruta
int cost[100][100];     //Representa la grafica
int dist[100];          //Array distancia para N cantidad de nodos
bool visited[100]={0};  //Array para mantener los nodos ya visitados, inicializamos en 0
int parent[100];        //Array para mantener los nodos padre

void init()             //Funcion inicializadora de arreglos parent y dist
{
    for(int i=0;i<N;i++)
    {
        parent[i]=i;    //Inicializamos el array
        dist[i]=INF;    //Inicializamos con distancia infinita para todos los nodos
    }
    dist[src]=0;        //Inicializamos la posición de partida en 0
}

int getNearest()        //Esta función calcula la distancia minima y regresa el nodo correspondiente que no haya sido evaluado anteriormente
{
    int minvalue=INF;   //Iniciamos el valor minimo en infinito
    int minnode=0;      //Iniciamos el nodo minimo en 0
    for(int i=0;i<N;i++)        //Recorre todos las vertices
        if(!visited[i]&&dist[i]<minvalue)      //Si la distancia del vertice es menos que el valor minimo y si ese nodo ya fue evaluado o no
        {
            minvalue=dist[i];                  //El valor minimo es la distancia más corta
            minnode=i;                         //EL nodo minimo es el nodo correspondiente a la distancia minima
        }
    return minnode;             //Regresamos el nodo minimo
}

void dijkstra()                     //Algoritmo de Dijsktra
{
    for(int i=0;i<N;i++)            //
    {
        int nearest=getNearest();   //Llamamos a la funcion para obtener el más cercano no visitado
        visited[nearest]=true;      //Marcamos el nodo minimo cómo ya visitado
        for(int adj=0;adj<N;adj++)  //Evaluar nodos adyacentes, dónde adj es el nodo adyacente a nuestro nodo más cercano
        {
            if(cost[nearest][adj]!=INF && dist[adj]>dist[nearest]+cost[nearest][adj])       //Si la matriz de costo corresponde con el el nodo más cercano
            {                                                                               //no es infinito y si la distancia nueva es menor a la anterior
                dist[adj]=dist[nearest]+cost[nearest][adj];                         //Si se cumple, igualamos la distancia a la nueva
                parent[adj]=nearest;                                                //Guardamos el nodo
            }
        }
    }
}

void show()                     //Muestra en pantalla los caminos
{
    cout<<"Node:\t\tCost:\t\t\tPath:";
    for(int i=0;i<N;i++)
    {
        cout<<i<<"\t\t\t"<<dist[i]<<"\t\t\t"<<" ";
        cout<<i<<" ";
        int parnode=parent[i];
        while(parnode!=src)
        {
            cout<<" <-- "<<parnode<<" ";
            parnode=parent[parnode];
        }
        cout<<endl;
    }
}

int main()
{

    cout<<"Nodes: ";
    cin>>V;                             //Ingresar numero de nodos
    for(int i=0;i<N;i++)                //Rellenar la matriz, los valores 999 son considerados cómo infinito
        for(int it=0;it<N;it++)
            cin>>cost[i][it];
    cout<<endl<<"Src node: ";
    cin>>src;                          //Ingresar inicio del camino
    init();                            //Inicializar arreglos
    dijkstra();                        //Algoritmo de Dijsktra
    show();                            //Imprimir resultados
}

/*       Entrada propuesta
0 4 999 999 999 999 999 8 9999
4 0 8 999 999 999 999 8 999
999 8 0 7 999 4 999 999 2
999 999 7 0 9 14 999 999 999
999 999 999 9 0 10 999 999 999
999 999 4 14 10 0 2 999 999
999 999 999 999 999 2 0 1 6
8 11 999 999 999 999 1 0 7
999 999 2 999 999 999 6 7 0
*/

/*      Output correcto

*/
