#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main()
{
    int const MAX = 100;
    int arraySize;
    cout<<"Ingresa tamanyo: "<<endl;
    cin>>arraySize;
    int a[arraySize];
    srand(time(NULL));
    for (int i=0;i<arraySize;i++){
        a[i]=rand()%MAX;
    }
    cout<<"Array antes de ordenarse: "<<endl;
    for (int i=0;i<arraySize;i++){
    cout<<a[i]<<" ";
    }
    cout<<endl<<endl;
    cout<<"Array ordenado "<<endl;
    for (int i=0;i<arraySize;i++){
        cout<<a[i]<<"-";
    }
    cout<<endl<<endl;
    return 0;
}
