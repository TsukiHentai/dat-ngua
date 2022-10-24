#include<stdio.h>
typedef struct
{
	char ten[100];
	int ma;
	float hsl;
	int phucap;
}nv;
void nhap(nv a[],int n)
{
	for(int i=0;i<n;i++)
	{
		scanf("%s",a[i].ten);
		scanf("%d",&a[i].ma);
		scanf("%f",&a[i].hsl);
		scanf("%d",&a[i].phucap);
	}
}
void tim(nv a[],int n)
{
	int b;
	int min=0;
	for(int i=0;i<n;i++)
	{
		if((a[i].hsl)<(a[min].hsl))
		{
			min=i;	
		}	
	}
	printf("%s %d %.2f %d %.2f",a[min].ten,a[min].ma,a[min].hsl,a[min].phucap,((a[min].hsl)*2000000+(a[min].phucap)));
}
int main()
{
	int n;
	nv a[100];
	scanf("%d",&n);
	nhap(a,n);
	printf("Nhan vien co he so luong thap nhat\n");
	tim(a,n); 
}
