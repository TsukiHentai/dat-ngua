#include<stdio.h>
void nhap(float a[],int n)
{
	for(int i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
	}
}
void max(float a[],int n)
{
	float max;
	int vitri;
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
			vitri=i;
		}
	}
	printf("Phan tu lon nhat co vi tri %d, co gia tri %f",vitri,a[vitri]);
}
int main()
{
	int n;
	float a[1000];
	scanf("%d",&n);
	nhap(a,n);
	max(a,n);
}
