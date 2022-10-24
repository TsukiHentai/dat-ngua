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
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	xuat(a,n);
}
int main()
{
	int n;
	float a[1000];
	scanf("%d",&n);
	nhap(a,n);
	printf("Mang sap xep\n");
	sx(a,n);
}
