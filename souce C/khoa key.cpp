#include<stdio.h>
void nhap(float a[],int n)
{
	for(int i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
	}
}
int tim(float a[],int n,float x)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]==x)
		{
			return i;
			break;
		}	
	}
	return -1;
}
int main()
{
	float a[1000];
	int n;
	scanf("%d",&n);
	nhap(a,n);
	float x;
	scanf("%f",&x);
	if(tim(a,n,x)==-1)	printf("%.3f not found");
	else
	printf("Phan tu %.3f co vi tri %d",x,tim(a,n,x));
}
