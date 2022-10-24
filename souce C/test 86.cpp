#include<stdio.h>
#include<stdlib.h>
typedef struct
{
	char ten[100];
	int ma;
	float d1;
	float d2;
	float d3;
}sv;
void nhap(sv a[],int n)
{
	for(int i=0;i<n;i++)
	{
		fflush(stdin);
		scanf("%s",a[i].ten);
		scanf("%d",&a[i].ma);
		scanf("%f",&a[i].d1);
		scanf("%f",&a[i].d2);
		scanf("%f",&a[i].d3);
	}
}
void sx(sv a[],int n)
{
	int vitri=0;
	float max=0;
	for(int i=0;i<n;i++)
	{
		if((a[vitri].d1+a[vitri].d2+a[vitri].d3)/3<(a[i].d1+a[i].d2+a[i].d3)/3)
		{
			max=(a[i].d1+a[i].d2+a[i].d3)/3;
			vitri=i;
		}
	
	}
	printf("So thu tu sinh vien: %d\n",vitri);
	printf("%s %d %.2f %.2f %.2f %.2f",a[vitri].ten,a[vitri].ma,a[vitri].d1,a[vitri].d2,a[vitri].d3,((a[vitri].d1)+(a[vitri].d2)+(a[vitri].d3))/3);
}
int main()
{
	int n;
	sv a[100];
	scanf("%d",&n);
	nhap(a,n);
	sx(a,n);
}
