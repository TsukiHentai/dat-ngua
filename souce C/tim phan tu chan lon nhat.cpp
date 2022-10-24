#include<stdio.h>
void nhap(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void max(int a[],int n)
{
	int max=0;
	int v=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0&&a[i]>max)
		{
			max=a[i];
			v=i;
		}
	}
	printf("So chan lon nhat co vi tri la %d gia tri %d",v,a[v]);
}

int main()
{
	int a[1000];
	int n;
	scanf("%d",&n);
	nhap(a,n);
	int d=0;
	for(int i=0;i<n;i++)
	{
		if(n%2==0) d++;
	}
	if(d==0) printf("Khong co so chan trong mang");
	else
	max(a,n);
}
