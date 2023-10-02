using namespace std;
#include<iostream>
#include<vector>
vector<int>captura(void);
vector<int>ordena(vector<int>&A);
int imprime(vector<int>b);

vector<int>captura(void)
{
	vector<int>a(20,0);
	int i;
	cout<<"ingrese los numeros: "<<endl;
	for(i=0;i<a.size();i++)
	{
		cin>>a[i];
	}
	return (a);
}
vector<int>ordena(vector<int>&A)
{
 int i,j,intervalo,temp,A;
 intervalo = A.size/2;
 while (intervalo > 0) {
 for (i=intervalo; i < A.size; i++) {
 j = i;
 temp = vector[i];
 while ((j >= intervalo) && (vector[j - intervalo] > temp)) {
 vector[j] = vector[j - intervalo];
 j = j - intervalo;
 }
 vector[j] = temp;
 }
 intervalo /= 2;
 }
}
int main (int argc, char * const argv[]) {
 for (int i = 0; i < 20; ++i) {
 cout << A[i] << " ";
 }
 cout << endl;
 shell(A, 20);


 for (int i = 0; i < 20; ++i){
 cout << A[i] << " ";
 }
 cout << endl;
}

return (A);
}
int imprime(vector<int>b(20,0))
{
	for (int i = 0; i < 5; ++i){
 cout << b[i] << " ";
 }
 cout << endl;
}
main(void)
{
	vector<int>r(20,0);
	vector<int>a(20,0);
	r=captura();
	vector<int>ordena(r);
	a=ordena();
	imprime(a);
}
