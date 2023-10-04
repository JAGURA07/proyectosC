#include<iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void leerDatos( double **A, int fil, int col, double B[] )
{
    for( int i = 0; i < fil; i++ ){
        for( int j = 0; j < col; j++ ) {
            cin >> A[i][j];
        }
    }
    for(int i = 0; i < fil; i++ ){
        cout << "\nFila " << i + 1 << ": ";
        cin >> B[i];
    }

}


void imprimirMatriz( double **M, int fil, int col, double v[] )
{
    cout << setprecision(3) << fixed;
    cout << "\nMatriz:\n";
    for( int i = 0; i < fil; i++){
        for( int j = 0; j < col; j++){
            cout << M[i][j] << " ";
        }
        cout << "| " << v[i] << "\n";
    }
    cout << "\n";
}

void intercambiarFilas( double **M, int col, int k, int max )
{
    double temp[col];

    for( int i = k; i < col; i++ ) {
            temp[i] = M[k][i];
            M[k][i] = M[max][i];
            M[max][i] = temp[i];
    }
}

void gaussEliminacion( double **A, int fil, int col, double B[] )
{
    int max;
    int N = fil;
    double factor, temp;

    for( int k = 0; k < N; k++ ){
        max = k;
        for( int i = k + 1; i < N; i++ )
            if( abs( A[i][k] ) > abs( A[max][k] ) )
                max = i;

        intercambiarFilas( A, col, k, max );
        temp = B[k];
        B[k] = B[max];
        B[max] = temp;

        for( int i = k + 1; i < N; i++ ) {
            factor = A[i][k] / A[k][k];
            B[i] -= factor * B[k];

            for( int j = k; j < N; j++ )
                A[i][j] -= factor * A[k][j];

        }
    }
    imprimirMatriz( A, fil, col, B );

    double solucion[fil] = { 0.0 };
    double suma;

    for (int i = N - 1; i >= 0; i-- ){

        suma = 0.0;

        for( int j = i + 1; j < N; j++ )
            suma += A[i][j] * solucion[jx

        solucion[i] = (B[i] - suma) / A[i][i];

    }
}

int main()
{
    int fil, col;

    cout << "\n: ";
    cin >> fil;
    col=fil;

    double** A = new double*[fil];
    for( int i = 0; i < fil; i++ )
        A[i] = new double[col];

    double B[fil];

    leerDatos( A, fil, col, B );
    imprimirMatriz( A, fil, col, B );
    gaussEliminacion( A, fil, col, B );
}
