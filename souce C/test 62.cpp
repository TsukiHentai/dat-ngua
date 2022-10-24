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
float dtb(sv a)
{
    return ((a.d1)+(a.d2)+(a.d3))/3;
}
void sx(sv a[],int n)
{
	int vitri;
	float max=0;
	for(int i=0;i<n;i++)
	{
		if(dtb(a[i])>max||dtb(a[i])==max)
		{
		max=dtb(a[i]);
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

