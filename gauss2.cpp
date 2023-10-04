#include <iostream>


using namespace std;



void imprimirSolucion( double v[], int fil )
{
    cout << "\nSolucion: ";
    for( int i = 0; i < fil; i++ )
        cout << "\nX" << i + 1 << ": " << v[i];

    cout << endl;
}


int main()
{
    int fil, col;

    cout << "\Numero de variables: ";
    cin >> fil;
    col = fil;

    double** A = new double*[fil];
    for( int i = 0; i < fil; i++ )
        A[i] = new double[col];

    double B[fil];



}
