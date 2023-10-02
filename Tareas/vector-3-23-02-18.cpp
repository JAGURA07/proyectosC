#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> A(5,9);
    cout<<"El tamano anterior era:"<<A.size()<<endl;
    
    for (unsigned int i=0; i<=7;i++)
        {
             cout<<"Coloque 8 numeros"<<endl;
             cin>>A[i];
        }
    A.resize(8);
    cout<<"El nuevo tamano es:"<<A.size()<<endl;
    for (unsigned int z=0; z<=7; z++)
    {
        cout<<" "<<A[z]<<endl;
    }

    return 0;
}
