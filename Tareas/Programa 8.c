#include <stdio.h>
#include <math.h>
main (void)
{
 int z,num=0,x=0,y;
 while (num<=9)
 {
     printf("\nIntroduce el numero:\n");
     scanf("%d",&y);
     x+=y;
     num=num+1;
     z=x/10;
 }
 printf("Promedio: %d",z);
}
