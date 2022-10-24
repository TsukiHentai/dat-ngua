#include<stdio.h>
#include<stdlib.h>
struct typedef
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
		scafn("%s",a[i].ten);
		scafn("%d",&a[i].ma);
		scanf("%f",&a[i].d1);
		scanf("%f",&a[i].d2);
		scanf("%f",&a[i].d3);
	}
}
float dtb(sv a)
{
	return ((a.d1)+(a.d2)+(a.d3))/3;
}
//4 5 1 5
void tim(sv a[],int n)
{
	int vitri=0;
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				vitri=j;
			}
		}
}
