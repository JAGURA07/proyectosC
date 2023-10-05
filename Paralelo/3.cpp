#include <iostream>
#include <omp.h>
using namespace std;

int main()
{
    int x=10000;
    double *v1 = new double[x];
    double *v2 = new double[x];
    double pP,lP;

    int i,p;

    for(i = 0; i<x; i++)
    {
        v1[i] = i;
        v2[i] = 1.0;
    }

    for(p=0; p<16; p++)
    {
        #pragma omp parallel shared(pP) private(lP)
        {
            lP = 0;
            #pragma omp for private(i) schedule(static,1)
                for(i = 0; i<x; i++)
                {
                    lP += v1[i] * v2[i];
                }

            #pragma omp critical
            {
                pP+=lP;
            }
        }

        if(pP != x*(x-1)/2)
        {
            cout << "Los resultados difieren en la prueba numero " << p+1 << endl;
            cout << "\t" << pP << "\t" << x*(x)/2 << endl;
            return 0;
        }
        pP = 0;
    }

    cout << "En " << x << " pruebas, las sumas siempre coincidieron." << endl;
    delete[] v1;
    delete[] v2;
}
