#include <iostream>
#include <windows.h>
#include <vector>
using namespace std;
int  I (int x);
void II (void);
void III (void);
int IV (int x);
vector <int> A(4,0);
vector <int> B(4,0);
vector <int> C(4,0);
vector <int> D(4,0);
int main ()
{
    char r;
    int k,x;
    r='s';
    while (r=='s'||r=='S')
    {
        system ("cls");
        k=I(x);
        cout<<endl<<"Desea repetir el programa? s/n"<<endl;
        cin>>r;
    }
}
int I (int x)
{
    int q,y=0,e,iter;
    cout<<"*** Suma magica ***"<<endl;
    cout<<endl<<"INSTRUCCIONES:"<<endl;
    cout<<"Selecciona un numero de la tabla, los ceros no se pueden elegir"<<endl;
    cout<<"Solo puedes elegir una sola vez el numero"<<endl;
    cout<<endl<<"Siguiendo estas reglas, al seleccionar 4 numeros, tu suma siempre sera de 34"<<endl;
    cout<<endl<<"A jugar !!!!..... :) "<<endl;
    cout<<"Numeros que puedes seleccionar:"<<endl;
    II();
    III();
    cout<<endl;
    e=0;
    while (y<4)
    {
        cin>>x;
        if(x>16||x<0)
        {
            cout<<endl<<"Elija un numero valido"<<endl;
        }
        else
        {
            e=e+x;
            q=IV(x);
            y++;
        }
    }
    cout<<endl<<"La suma da "<<e<<endl;
}
void II (void)
{
    int i,c;
    c=1;
    for(i=0;i<4;i++)
    {
        A[i]=c;
        B[i]=c+4;
        C[i]=c+8;
        D[i]=c+12;
        c++;
    }
}
void III (void)
{
    int it;
    for(it=0;it<4;it++)
        {
          cout<<"   "<<A[it];
        }
    cout<<endl;
    for(it=0;it<4;it++)
        {
          cout<<"   "<<B[it];
        }
    cout<<endl;
    for(it=0;it<4;it++)
        {
            if (it<1)
            {
                cout<<"   "<<C[it];
            }
            else
            {
                cout<<"  "<<C[it];
            }

        }
    cout<<endl;
    for(it=0;it<4;it++)
        {
          cout<<"  "<<D[it];
        }
    cout<<endl;
}
int IV (int x)
{
    int ite,iter,v=0,g=0,y;
     switch (x) {
    case 0:
        {
            cout<<"El 0 no se puede elegir, bro"<<endl;
        }
        break;
    case 1:
        for(iter=0;iter<=4;iter++)
         {
             if(A[iter]==x)
             {
                    y=iter;
             }
             A[iter]=0;
         }
         A[y]=x;
         B[y]=0;
         C[y]=0;
         D[y]=0;
    break;
    case 2:
        for(iter=0;iter<=4;iter++)
         {
             if(A[iter]==x)
             {
                    y=iter;
             }
             A[iter]=0;
         }
         A[y]=x;
         B[y]=0;
         C[y]=0;
         D[y]=0;
      break;
    case 3:
        for(iter=0;iter<=4;iter++)
         {
             if(A[iter]==x)
             {
                    y=iter;
             }
             A[iter]=0;
         }
         A[y]=x;
         B[y]=0;
         C[y]=0;
         D[y]=0;
      break;
    case 4:
        for(iter=0;iter<=4;iter++)
         {
             if(A[iter]==x)
             {
                    y=iter;
             }
             A[iter]=0;
         }
         A[y]=x;
         B[y]=0;
         C[y]=0;
         D[y]=0;
    break;
    case 5:
      for(iter=0;iter<=4;iter++)
         {
             if(B[iter]==x)
             {
                 y=iter;
             }
             B[iter]=0;
         }
         A[y]=0;
         B[y]=x;
         C[y]=0;
         D[y]=0;
    break;
    case 6:
      for(iter=0;iter<=4;iter++)
         {
             if(B[iter]==x)
             {
                 y=iter;
             }
             B[iter]=0;
         }
         A[y]=0;
         B[y]=x;
         C[y]=0;
         D[y]=0;
    break;
    case 7:
      for(iter=0;iter<=4;iter++)
         {
             if(B[iter]==x)
             {
                 y=iter;
             }
             B[iter]=0;
         }
         A[y]=0;
         B[y]=x;
         C[y]=0;
         D[y]=0;
    break;
    case 8:
      for(iter=0;iter<=4;iter++)
         {
             if(B[iter]==x)
             {
                 y=iter;
             }
             B[iter]=0;
         }
         A[y]=0;
         B[y]=x;
         C[y]=0;
         D[y]=0;
    break;
    case 9:
      for(iter=0;iter<=4;iter++)
         {
             if(C[iter]==x)
             {
                 y=iter;
             }
             C[iter]=0;
         }
         A[y]=0;
         B[y]=0;
         C[y]=x;
         D[y]=0;
    break;
    case 10:
      for(iter=0;iter<=4;iter++)
         {
             if(C[iter]==x)
             {
                 y=iter;
             }
             C[iter]=0;
         }
         A[y]=0;
         B[y]=0;
         C[y]=x;
         D[y]=0;
    break;
    case 11:
      for(iter=0;iter<=4;iter++)
         {
             if(C[iter]==x)
             {
                 y=iter;
             }
             C[iter]=0;
         }
         A[y]=0;
         B[y]=0;
         C[y]=x;
         D[y]=0;
    break;
    case 12:
      for(iter=0;iter<=4;iter++)
         {
             if(C[iter]==x)
             {
                 y=iter;
             }
             C[iter]=0;
         }
         A[y]=0;
         B[y]=0;
         C[y]=x;
         D[y]=0;
    break;
    case 13:
      for(iter=0;iter<=4;iter++)
         {
             if(D[iter]==x)
             {
                 y=iter;
             }
             D[iter]=0;
         }
         A[y]=0;
         B[y]=0;
         C[y]=0;
         D[y]=x;
    break;
    case 14:
      for(iter=0;iter<=4;iter++)
         {
             if(D[iter]==x)
             {
                 y=iter;
             }
             D[iter]=0;
         }
         A[y]=0;
         B[y]=0;
         C[y]=0;
         D[y]=x;
    break;
    case 15:
      for(iter=0;iter<=4;iter++)
         {
             if(D[iter]==x)
             {
                 y=iter;
             }
             D[iter]=0;
         }
         A[y]=0;
         B[y]=0;
         C[y]=0;
         D[y]=x;
    break;
    case 16:
      for(iter=0;iter<=4;iter++)
         {
             if(D[iter]==x)
             {
                 y=iter;
             }
             D[iter]=0;
         }
         A[y]=0;
         B[y]=0;
         C[y]=0;
         D[y]=x;
    break;
  }
  cout<<endl<<"Numeros que puedes seleccionar"<<endl;
    for(ite=0;ite<4;ite++)
        {
          cout<<"   "<<A[ite];
        }
    cout<<endl;
    for(ite=0;ite<4;ite++)
        {
          cout<<"   "<<B[ite];
        }
    cout<<endl;
    for(ite=0;ite<4;ite++)
        {
            if (ite<1)
            {
                cout<<"   "<<C[ite];
            }
            else
            {
                cout<<"  "<<C[ite];
            }

        }
    cout<<endl;
    for(ite=0;ite<4;ite++)
        {
          cout<<"  "<<D[ite];
        }
    cout<<endl<<endl;
    cout<<"Usted eligio  "<<x<<endl;
}
