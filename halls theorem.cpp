#include <iostream>
#include <string.h>
using namespace std;

bool bpm(bool **bpGraph,int u,bool seen[],int matchR[],int N)
{
    for (int v=0;v<N;v++)
    {
        if (bpGraph[u][v]&&!seen[v])
        {
            seen[v]=true;
            if (matchR[v]<0||bpm(bpGraph,matchR[v],seen,matchR,N))
            {
                matchR[v]=u;
                return true;
            }
        }
    }
    return false;
}

int maxBPM(bool **bpGraph,int N)
{
    int matchR[N];
    memset(matchR,-1,sizeof(matchR));
    int result=0;
    for (int u=0;u<N;u++)
    {
        bool seen[N];
        memset(seen,0,sizeof(seen));
        if (bpm(bpGraph,u,seen,matchR,N))
            result++;
    }
    return result;
}

int main()
{
    int n;
    cout<<"Number of rows and columns: ";
    cin>>n;
    bool **bpGraph = new bool*[n];
    for (int i=0;i<n;i++)
        bpGraph[i] = new bool[n];

    for(int i=0;i<n;i++)
        for(int it=0;it<n;it++)
        {
            cout<<"set ["<<i<<"]"<<"["<<it<<"]: ";
            cin>>bpGraph[i][it];
        }
    cout << "Maximum number of applicants that can get job is "<< maxBPM(bpGraph,n);
}
