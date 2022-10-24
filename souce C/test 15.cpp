#include<stdio.h>
void nhap(int a[100],int n)
{
	for(int i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
	}
}
void xuat(int a[100],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
int main()
{
	int n;
	int a[100];
	do
	{
	scanf("%d",&n);
	}
	while(n<1||n>100);
	nhap(a,n);
	printf("Mang ban dau\n");
	printf("%d\n",n);
	xuat(a,n);	
}
