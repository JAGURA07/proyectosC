#include <conio.h>
#include <stdio.h>
main(void)
{
int num,i,s=0,y,x[10],b=0,c=0,n,val=0,a,z;
char resp;
resp='s';
while (resp=='s' || resp=='S'){
        system("cls");
printf("\nCuantos numeros quiere ingresar?: ");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
    for(z=0;z<val;z++)
{
    printf("\n numero (Del 1 al 10):");
scanf("%d",&x[z]);
}
for(a=0;a<val;a++)
{
    c=0;
for(b=0;b<val;b++)
{
    if(x==b)
{
    c++;
}
if(c>=20)
{
    n=x[a];
}

}

}

 printf("\nNumero: ");
 scanf("%d",&y);
 s=s+y;

}

s=s/num;
printf("\nSu promedio es: %d",s);
printf("\nla moda es = %d",n);
printf("\n Otra vez? R=s/n");
resp=getch();
}
}

