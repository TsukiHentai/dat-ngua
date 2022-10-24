#include<stdio.h>
#include<stdlib.h>
typedef struct
{
	char ten[10];
	int ma;
	float hsl;
	int phucap;
}nv;
void nhap(nv a[],int n)
{
	for(int i=0;i<n;i++)
	{
		fflush(stdin);
		scanf("%s",a[i].ten);
		scanf("%d",&a[i].ma);
		scanf("%f",&a[i].hsl);
		scanf("%d",&a[i].phucap);
	}
}
float luong(nv a)
{
	return (a.hsl)*2000000+(a.phucap);
}
void xuat(nv a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%s %d %.2f %d %.2f",a[i].ten,a[i].ma,a[i].hsl,a[i].phucap,luong(a[i]));
		printf("\n");
	}
}
int main()
{
	int n;
	nv a[100];
	scanf("%d",&n);
	nhap(a,n);
	printf("Danh sach nhan vien\n");
	printf("%d\n",n);
	xuat(a,n);
}
