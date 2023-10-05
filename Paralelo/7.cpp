#include <iostream>
#include <omp.h>
#include <time.h>
#include <stdlib.h>
using namespace std;


int main(int argc, char const *argv[])
{

    int exitos,id,N=90000000;
    unsigned int seed;
    int nH[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    double pi,x,tiempo,y;

    for (int h=0; h<15; h++)
    {
        omp_set_num_threads(nH[h]);
        tiempo=omp_get_wtime();

        #pragma omp parallel private(seed, id)
        {
            exitos=0;
            seed=(id+1)*10;
            srand(seed);

            #pragma omp for reduction(+:exitos) schedule(static,1)
                for (int i=0;i<N;i++)
                {
                    x=2*(rand_r(&seed)/((double)RAND_MAX))-1;
                    y=2*(rand_r(&seed)/((double)RAND_MAX))-1;
                    if(x*x+y*y<1.0)
                    {
                        exitos += 1;
                    }
                }
        }

        pi=4.0*exitos/(double)N;
        tiempo=omp_get_wtime()-tiempo;

        #pragma omp parallel private(id)
        {
            id=omp_get_thread_num();
            if(id==0)
            {
                cout<<"Se usaron: "<<omp_get_num_threads()<<" de "<<omp_get_num_procs()<<" procesadores disponibles"<<endl;
            }
        }
        cout<<"El valor esperado de pi: "<<pi<< endl;
        cout<<"Tiempo de ejecución: "<<tiempo<<endl<<endl;
    }
}
