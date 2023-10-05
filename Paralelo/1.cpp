#includ#include <iostream>
#include <omp.h>
using namespace std;

int main()
{
    int N1,N2;
    cout<<"Dimension X de la matriz: ";
    cin>>N1;
    cout<<"Dimension Y de la matriz: ";
    cin>>N2;

  int** m1= new int*[N1];
    for(int i=0; i<N2;++i)
    m1[i] = new int[N2];

  int** m2= new int*[N1];
    for(int i = 0; i < N2; ++i)
    m2[i] = new int[N2];

  int** m3= new int*[N1];
    for(int i = 0; i < N2; ++i)
    m3[i] = new int[N2];

  int id;
  int nH[]= {1,2,3};

  double t;

  int i,it,h;

    omp_set_num_threads(nH[3]);
    t=omp_get_wtime();
    # pragma omp for private(i,it) collapse(2)
    for(i=0;i<N1;i++)
    {
        for(it=0;it<N2;it++)
        {
            m1[i][it]=rand()%9;
            m2[i][it]=rand()%9;
        }
    }

    # pragma omp for private(i,it) collapse(2)
    for(i=0;i<N1;i++)
    {
        for(it=0;it<N2;it++)
        {
            m3[i][it] = m1[i][it] + m2[i][it];
        }
    }
    t=omp_get_wtime()-t;

    cout<<m1[0][0]<<" + "<<m2[0][0]<<" = "<<m3[0][0]<<endl;
    cout<<m1[N1-1][N2-1]<<" + "<<m2[N1-1][N2-1]<<" = "<<m3[N1-1][N2-1]<<endl;
    cout<<"Tiempo de ejecucion: "<<t<< endl;

    # pragma omp parallel
    {
        id=omp_get_thread_num();
        if(id==0)
            cout <<"Se usaron: "<<omp_get_num_threads( )<<" de "<< omp_get_num_procs()<< " procesadores disponibles\n" << endl;
    }
    delete[]m1;
    delete[]m2;
    delete[]m3;
}
