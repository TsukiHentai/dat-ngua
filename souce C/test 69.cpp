#include<stdio.h>
void nhap(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
int le(int n)
{
	if(n%2!=0) return 1;
	else return 0;
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
			if(le(a[i])==1&&le(a[j])==1&&a[i]>a[j])
			{
				int temp= a[i];
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
