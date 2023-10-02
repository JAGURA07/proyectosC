#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int>A(20,9);
    vector<int>B;

        B=A;
        for (unsigned int i=0; i<A.size();i++)
        {
             cout<<B[i]<<endl;
        }
        return 0;
}
