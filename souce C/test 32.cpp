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
void hocbong(sv a[],int n)
{
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(a[i].d1>=5.5&&a[i].d2>=5.5&&a[i].d3>=5.5&&((a[i].d1)+(a[i].d2)+(a[i].d3))/3>=7)
		{
			dem++;
			printf("%s %d %.2f %.2f %.2f %.2f",a[i].ten,a[i].ma,a[i].d1,a[i].d2,a[i].d3,((a[i].d1)+(a[i].d2)+(a[i].d3))/3);
			printf("\n");
		}
	}
	printf("So sinh vien dat hoc bong: %d",dem);
}
int main()
{
	int n;
	sv a[100];
	scanf("%d",&n);
	nhap(a,n);
	printf("Danh sach sinh vien dat hoc bong\n");
	hocbong(a,n);
}
