#include <iostream>
#include <omp.h>
#include <time.h>       /* time */
#include <stdlib.h>

using namespace std;


int main(int argc, char const *argv[])
{
    int exitos,i;
    double esperado, x, y;
    int N = 3000000;
    int id;
    int nH[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15}; // numero de hilos
    double tiempo;        // tiempo de ejecucion
    unsigned int semilla;

    for (int h=0; h<16; h++)
    {
        omp_set_num_threads(nH[h]);
        tiempo = omp_get_wtime();
        #pragma omp parallel private(semilla, id) shared(exitos)
        {
            semilla = 2021;
            srand(semilla);
            #pragma omp for private(i) reduction(+:exitos)
            for (i = 0; i < N; i++)
            {
                x = 2* ( rand() / ( (double) RAND_MAX ) ) -1;
                y = 2* ( rand() / ( (double) RAND_MAX ) ) -1;
                if( x*x + y*y < 1.0)
                {
                    exitos += 1;
                }
            }
        }
        tiempo = omp_get_wtime()-tiempo;
        #pragma omp parallel private(id)
        {
            id = omp_get_thread_num();
            if(id == 0)
            {
                cout << "Se usaron: " << omp_get_num_threads() << " de " << omp_get_num_procs() << " procesadores disponibles" << endl;
            }

        }
        cout << "El valor esperado de la suma de los dados es: ";
        cout << 4.0*exitos/(double) N<< endl;
        cout << "Tiempo de ejecucion: " << tiempo << endl << endl;
  }
}
/*
#pragma omp parallel private(semilla, id)
    {
      exitos = 0;

     // id = omp_get_thread_num();
     // semilla = id+1;

      semilla = (id+1)*10;
      srand(semilla);

      #pragma omp for reduction(+:exitos) schedule(static,1)
        for (int i = 0; i < N; i++){
      x = 2* ( rand() / ( (double) RAND_MAX ) ) -1;
      y = 2* ( rand() / ( (double) RAND_MAX ) ) -1;
      if( x*x + y*y < 1.0){
        exitos += 1;
        }
    }

    }
    esperado = 4.0*exitos/(double) N;
    tiempo = omp_get_wtime()-tiempo;

    #pragma omp parallel private(id)
    {
      id = omp_get_thread_num();
      if(id == 0){
        cout << "Se usaron: " << omp_get_num_threads() << " de " << omp_get_num_procs() << " procesadores disponibles" << endl;
      }
    }
    */
