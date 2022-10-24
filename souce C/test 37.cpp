#include<stdio.h>
typedef struct
{
	int ma;
	float bk;
	int x;
	int y;
}dt;
void nhap(dt a[],int n)
{
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i].ma);
		scanf("%f",&a[i].bk);
		scanf("%d",&a[i].x);
		scanf("%d",&a[i].y);
	}
}
void xuat(dt a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d %d %d %.3f",a[i].ma,a[i].x,a[i].y,a[i].bk);
		printf("\n");
	}
}
float dientich(dt a)
{
	int pi=3.14159;
	return pi*(a.bk);
}
void sx(dt a[],int n)
{
	dt temp;
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
		{
			if(dientich(a[i])<dientich(a[j]))
			{
				 temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	xuat(a,n);
}
int main()
{
	int n;
	dt a[1000];
	scanf("%d",&n);
	nhap(a,n);
	printf("Danh sach hinh tron\n");
	printf("%d\n",n);
	sx(a,n);
}
