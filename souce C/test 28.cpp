#include<stdio.h>
void nhap(float a[],int n)
{
	for(int i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
	}
}

float tim(float a[],int n,float m)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]==m)
		{
			return 1;
			break;
		}
	}
	return -1;
}
int vitri(float a[],int n,float m)
{
	int i;
	for(i=0;i<n;i++)
	{

		if(a[i]==m)
		{
			break;
		}
	}
	return i;
}
int main()
{
	int n;
	float m;
	float a[1000];
	scanf("%d",&n);
	nhap(a,n);
	scanf("%f",&m);
	if(tim(a,n,m)==1) printf("Phan tu %.3f co vi tri %d",m,vitri(a,n,m));
	else	printf("%.3f not found",m);
}
