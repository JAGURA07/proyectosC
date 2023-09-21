#include <stdio.h>
#include <iostream>
using namespace std;

#define NODES 6
#define ARISTS 8
#define A 1
#define V 2

//FIND EULERIAN CYCLE.
//Miguel Jiménez Ramos
//Jafet Rangel
//
int graph[NODES][NODES]={
    {0,A,0,A,0,0},
    {A,0,A,0,0,0},
    {0,A,0,A,A,A},
    {A,0,A,0,A,A},
    {0,0,A,A,0,0},
    {0,0,A,A,0,0}
};
int route[ARISTS]={-1,-1,-1,-1,-1,-1,-1,-1};

bool validate_eulerian_cycle(int adyam[NODES][NODES]){
  int cont=0;
  int acum=0;
  for(int i=0; i<NODES; i++){
	for(int j=0; j<NODES; j++){
	  acum=acum+adyam[i][j];
	}
	if(acum%2==0)
	  cont++;
  }
  if(cont==NODES)
	return true;
return false;
}

bool validate_trajectory(int adyam[NODES][NODES]){
  int cont=0;
  int acum=0;
  for(int i=0;i<NODES;i++){
	for(int j=0;j<NODES;j++){
	  acum=acum+adyam[i][j];
	}
	if(acum%2!=0)
	  cont++;
  }
  if(cont==2)
	return true;
  return false;
}

void travel(int node)
{
    printf("\n %s: %d, ",(node==route[ARISTS-1]?"Cycle/trajectory: ":"path: "),node+1);
    int i=0;
    for(i=0;i<ARISTS-1;i++)
        cout<<route[i]+1<<",";
    cout<<route[i]+1<<",";
}

int searchE(int node,int visitados){
	  if(visitados==ARISTS)
		  return visitados;
	  for(int i=0;i<NODES;i++)
	  {
		  if(graph[node][i]==A)
		  {
			  graph[node][i]=graph[i][node]=V;
			  route[visitados]=i;
			  if(searchE(i,visitados+1)==ARISTS)
				  return ARISTS;
			  else
				  graph[node][i]=graph[i][node]=A;
		  }
	  }
	  cout<<endl;
      return visitados;
}

int main()
{
    int initial=0;
    if(validate_eulerian_cycle(graph)==1){ //Euler's 1st theorem (Eulerian cycle) is most
	  //strong than Eulerian trajectory theorem, we use that condition instead of second one.
	  if(searchE(initial,0)==ARISTS)
	  {
		  printf("Euler's %s found! ",(initial==route[ARISTS-1]?"cycle":"path"));
		  travel(initial);
	  }
	}else if(validate_trajectory(graph)==1){
	  if(searchE(initial,0)==ARISTS)
	  {
		  printf("Euler's %s found! ",(initial==route[ARISTS-1]?"trajectory":"path"));
		  travel(initial);
	  }
	}else
	cout<<"Nothing to do here :).";

  return 0;
}
