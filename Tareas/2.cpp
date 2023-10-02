using namespace std;
#include<iostream>
#include<vector>
#include<windows.h>
#include<stdlib.h>
vector<int>a(50);
int k=0,j=0,p=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,l=0,m=0,n=0,o=0;
void captura(void);
void frecuencia(void);
void cantidad(void);

void captura(void)
{
	int i;
	cout<<"ingrese las calificaciones de cada materia"<<endl;
	for(i=0;i<a.size();i++)
	{
		cin>>a[i];
		if(a[i]==0)
		{
			b++;
		}
		if(a[i]==1)
		{
			c++;
		}
		if(a[i]==2)
		{
			d++;
		}
		if(a[i]==3)
		{
			e++;
		}
		if(a[i]==4)
		{
			f++;
		}
		if(a[i]==5)
		{
			g++;
		}
		if(a[i]==6)
		{
			h++;
		}
		if(a[i]==7)
		{
			l++;
		}
		if(a[i]==8)
		{
			m++;
		}
		if(a[i]==9)
		{
			n++;
		}
		if(a[i]==10)
		{
			o++;
		}

		if(a[i]>=6)
		{
			k++;
		}
		if(a[i]>-1)
		{
			if(a[i]<6)
			{
			j++;
		}
	    }
		if(a[i]==-1)
		{
			break;
		}
		p++;

	}
	cout<<endl;
	cout<<"numero de materias:"<<p<<endl;

}

void frecuencia(void)
{
	cout<<"total de 0s:"<<b<<endl;
	cout<<"total de 1s:"<<c<<endl;
	cout<<"total de 2s:"<<d<<endl;
	cout<<"total de 3s:"<<e<<endl;
	cout<<"total de 4s:"<<f<<endl;
	cout<<"total de 5s:"<<g<<endl;
	cout<<"total de 6s:"<<h<<endl;
	cout<<"total de 7s:"<<l<<endl;
	cout<<"total de 8s:"<<m<<endl;
	cout<<"total de 9s:"<<n<<endl;
	cout<<"total de 10s:"<<o<<endl;
}


void cantidad(void)
{
	cout<<endl;
	cout<<"materias aprobadas:"<<k<<"  "<<k*100/p<<"%"<<endl;;
	cout<<"materias reprobadas:"<<j<<"  "<<j*100/p<<"%"<<endl;
	cout<<endl;
}




main(void)
{
	char resp;
	resp='s';
	while(resp=='s')
	{
		system("cls");
	captura();
	frecuencia();
	cantidad();

	cout<<"otro calculo: S/N"<<endl;
	cin>>resp;
	cout<<endl;

}}
