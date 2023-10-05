#include <iostream>
#include <omp.h>
using namespace std;

int main()
{
    int x=10000;
    double *v1 = new double[x];
    double *v2 = new double[x];
    int pP=0,*lP,nH,i,id=0,p=0;

    nH=omp_get_num_procs();
    lP = new int[nH];

    for(i = 0; i<x; i++)
    {
        v1[i]=i;
        v2[i]=1.0;
    }

    #pragma omp parallel shared(lP) private(id)
    {
        id = omp_get_thread_num();
        lP[id]=0;
        #pragma omp for schedule(static,1)
            for(i = 0; i<x; i++)
            {
                lP[id]+=v1[i]*v2[i];
            }
    }

    for(i = 0; i< nH; ++i)
    {
        pP+= lP[i];
    }

    if(pP != x*(x-1)/2)
    {
        cout << "Los resultados difieren en la prueba numero " << p+1 << endl;
        cout << "\t" << pP << "\t" << x*(x-1)/2 << endl;
        return 0;
        pP = 0;
    }

  cout << "En " << x << " pruebas, las sumas siempre coincidieron." << endl;
  delete[] v1;
  delete[] v2;
}
