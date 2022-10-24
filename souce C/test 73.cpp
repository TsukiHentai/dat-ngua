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
int main()
{
	int n;
	float a[1000];
	scanf("%d",&n);
	nhap(a,n);
	printf("Mang ban dau\n");
	printf("%d\n",n);
	xuat(a,n);
}
