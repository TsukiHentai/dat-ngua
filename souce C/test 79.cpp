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
void tim(sv a[],int n)
{
	int b;
	sv z;
	float min=dtb(a[0]);
	for(int i=0;i<n;i++)
	{
		if(min>dtb(a[i]))
		{
			z=a[i];
			b=i;
		}
	}
	printf("So thu tu cua sinh vien la %d\n",b);
	printf("%s %d %.2f %.2f %.2f %.2f",a[b].ten,a[b].ma,a[b].d1,a[b].d2,a[b].d3,dtb(a[b]));
}
int main()
{
	int n;
	sv a[100];
	scanf("%d",&n);
	nhap(a,n);
	tim(a,n);
}
