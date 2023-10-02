using namespace std;
#inclue <iostream>
#include <math.h>
#include <stdio.h>
main (void)
{

    int ite,iter,p,x;
    for (ite=1;ite<=100;ite++)
    {
        p=0;
        for (iter=1;ite<=100;ite++)
        {
            if (ite%iter==0)
            {
                p++;
            }
        }
        if (p==2)
        {
            x=ite;
        }
    }
    cout<<" "<<x<<endl;
    return 0;
}
