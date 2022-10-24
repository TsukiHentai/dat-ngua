#include<stdio.h>
void nhap(float a[],int n)
{
	for(int i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
	}
}
int tim(float a[],int n,int m)
{
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(m==a[i])
		{
			return i;
			dem++;
			break;
		}
	}
	if(dem==0) return -1;
}
int main()
{
	int n;
	float x;
	float a[1000];
	scanf("%d",&n);
	nhap(a,n);
	scanf("%f",&x);
	if(tim(a,n,x)==-1) printf("%.3f not found",x);
	else if(tim(a,n,x)!=0) printf("Phan tu %.3f co vi tri %d",x,tim(a,n,x));
	
}
