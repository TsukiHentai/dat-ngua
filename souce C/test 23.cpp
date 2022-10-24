#include<stdio.h>
void nhap(float a[],int n)
{
	for(int i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
	}
}
void xuat(float a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%.3f ",a[i]);
	}
}
void sx(float a[],int n)
{
	float c=0;
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				c=a[i];
				a[i]=a[j];
				a[j]=c;
			}
		}
	for(int i=0;i<n;i++)
	{
		printf("%.3f ",a[i]);
	}
}
int main()
{
	int n;
	float a[n];
	scanf("%d",&n);
	nhap(a,n);
	xuat(a,n);
	printf("\n");
	sx(a,n);
}
