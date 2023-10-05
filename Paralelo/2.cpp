#include <iostream>
#include <omp.h>
using namespace std;

int main()
{
    int n=9000;
    auto matriz1 = new int[n][9000]();
    auto matriz2 = new int[n][9000]();
    auto matrizR = new int[n][9000]();

    int id;
    int nH[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};

    double t;

    int i,it,h;

    for(h=0;h<15;h++)
    {
        omp_set_num_threads(nH[h]);
        t=omp_get_wtime();
        # pragma omp parallel for private(i,it) collapse(2)
            for(i = 0;i<n; i++)
            {
                for(it=0;it<n;it++)
                {
                    matriz1[i][it]=rand()%9;
                    matriz2[i][it]=rand()%9;
                }
            }

        # pragma omp parallel for private(i,it) collapse(2)
            for(i = 0; i<n; i++)
            {
                for(it=0;it<n;it++)
                {
                    matrizR[i][it]=matriz1[i][it]+matriz2[i][it];
                }
            }
            t=omp_get_wtime()-t;

        cout<<matriz1[0][0]<<" + "<<matriz2[0][0]<<endl;
        cout<<matriz1[n-1][n-1]<<" + "<<matriz2[n-1][n-1]<<endl;
        cout<<matrizR[0][0]<< " , " << matrizR[n-1][n-1] << endl;
        cout<<"Tiempo de ejecucion: "<<t<< endl;

        # pragma omp parallel
        {
            id=omp_get_thread_num();
            if(id==0)
                cout <<"Se usaron: "<<omp_get_num_threads( )<<" de "<< omp_get_num_procs()<< " procesadores disponibles\n" << endl;
        }
    }
    delete[]matriz1;
    delete[]matriz2;
    delete[]matrizR;
}
