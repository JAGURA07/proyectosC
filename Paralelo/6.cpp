#include <iostream>
#include <omp.h>

using namespace std;

int main(){
  int N = 100;   // tamaño de los vectores

  // Vectores
  double *vectorA = new double[N];
  double *vectorB = new double[N];
  double producto_punto = 0;

  int i,p,np=100;    // para los ciclos for

  for(i = 0; i<N; i++){
    vectorA[i] = i;
    vectorB[i] = 1.0;
  }

  for(p=0; p<3; p++){
    #pragma omp parallel shared(producto_punto)
    {
      #pragma omp for private(i) schedule(static,1)
      for(i = 0; i<N; i++){
        producto_punto += vectorA[i] * vectorB[i];
      }
    }

    if(producto_punto != N*(N-1)/2){
      cout << "Los resultados difieren en la prueba numero " << p+1 << endl;
      cout << "\t" << producto_punto << "\t" << N*(N-1)/2 << endl;
      return 0;
    }

    producto_punto = 0;
  }

  cout << "En " << np << " pruebas, las sumas siempre coincidieron." << endl;

  delete[] vectorA;
  delete[] vectorB;
}
