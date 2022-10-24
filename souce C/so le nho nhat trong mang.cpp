#include<stdio.h>
void nhap(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
int sole(int n)
{
	if(n%2!=0) return 1;
	else return 0;
}
void tim(int a[],int n)
{
	int min=0;
	for(int j=0;j<n;j++)
	{
		if(sole(a[j])==1)
		{
			min=a[j];
			break;
		}
	}
	int vitri=0;
	for(int i=0;i<n;i++)
	{
		if(sole(a[i])==1&&a[i]<min)
		{
			min=a[i];
			vitri=i;
		}
	}
	printf("So le nho nhat co vi tri %d gia tri %d",vitri,a[vitri]);
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
		if(sole(a[i])==1) d++;
	}
	if(d==0) printf("Khong co so le trong mang");
	else
	{
		tim(a,n);
	}
}
