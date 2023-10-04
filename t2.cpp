#include <stdio.h>
#include <math.h>
#include <ivan.h>
float calc_fxn(float b)
{
    float temp;
    temp = (0.2 + (25 * b) - (200 * pow(b,2)) + (675 * pow(b,3)) - (900 * pow(b,4)) + (400*pow(b,5)));
    return temp;
}
float trapecio
(int n, float b, float a)
{
     float x = b / n;
     float y = a + x;
     float fxn=0;
    float resultado=0;
     int i;
     for(i=1;i<=n-1;i++)
    {
        fxn = calc_fxn(y);
        y = y + x;
         resultado = resultado + fxn;
    }
    return ( b - a) * ( calc_fxn(a) + 2*(resultado) + calc_fxn(b))/(2*n) ;
    }

    int main()
    {
          int i,j;
     float a,b;
      float matriz[4][4];

      centrartexto("Integracion de Romberg [Se utiliza la regla del trapecio]",wherey());
      a=0;
        b=0.8;
          for(i=0;i<4;i++)
                for(j=0;j<4;j++)
                      matriz[i][j] = 0;
          matriz[0][0]= trapecio(1,b,a);
           matriz[1][0]= trapecio(2,b,a);
           matriz[2][0]= trapecio(4,b,a);
            matriz[3][0]= trapecio(8,b,a);
             printf("\n\n");
             int n =2;
               for(j=1;j<4;j++)
                {
            for(i=n;i>=0;i--)
                matriz[i][j] = (pow(4,j) * matriz[i+1][j-1] - matriz[i][j-1])/(pow(4,j) - 1);
            n--;
             }
        for(i=0;i<4;i++)
        {
            for(j=0;j<4;j++)
               if(matriz[i][j]>0)
               printf("%f\t",matriz[i][j]);
        printf("\n");
        }
        printf("\n\nEl resultado es: %f",matriz[0][3]);
         getch();
        return 0;
        }
