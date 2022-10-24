#include<stdio.h>
void nhap(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void xuat(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
void sx(int a[],int n)
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
	int a[1000];
	scanf("%d",&n);
	nhap(a,n);
	printf("%d\n",n);
	sx(a,n);
}
