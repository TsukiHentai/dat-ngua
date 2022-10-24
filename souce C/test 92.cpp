#include<stdio.h>
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
		scanf("%s",a[i].ten);
		scanf("%d",&a[i].ma);
		scanf("%f",&a[i].d1);
		scanf("%f",&a[i].d2);
		scanf("%f",&a[i].d3);
	}
}
float dtb(sv a)
{
	return (a.d1+a.d2+a.d3)/3;
}
void max(sv a[],int n)
{
	int vitri;
	float min=dtb(a[0]);
	for(int i=0;i<n;i++)
	{
		if(min>=dtb(a[i]))
		{
			min=dtb(a[i]);
			vitri=i;
		}
	}
	printf("So thu tu cua sinh vien: %d\n",vitri);
	printf("%s %d %.2f %.2f %.2f %.2f",a[vitri].ten,a[vitri].ma,a[vitri].d1,a[vitri].d2,a[vitri].d3,dtb(a[vitri]));
}
int main()
{
	sv a[100];
	int n;
	scanf("%d",&n);
	nhap(a,n);
	max(a,n);
}
