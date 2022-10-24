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
void xuat(int a[],int n)
{
	int min=a[0];
	int vitri=0;
	for(int i=0;i<n;i++)
	{
		if(sole(a[i])==1&&(a[i])<min)
		{
			min=a[i];
			vitri=i;
		}
	}
	if(vitri!=0)
		printf("So le nho nhat co vi tri %d gia tri %d",vitri,a[vitri]);
	else	if(sole(a[0])==1)	printf("So le nho nhat co tri 0 gia tri %d",a[0]);
	else
		printf("Khong co so le trong mang");
}
int main()
{
	int n;
	int a[1000];
	scanf("%d",&n);
	nhap(a,n);
	xuat(a,n);
}
