#include<stdio.h>
#include<stdlib.h>
typedef struct 
{
	char ten[100];
	float x1;
	float x2;
	float x3;
}sv;
void nhap(sv a[],int n)
{
	for(int i=0;i<n;i++)
	{
		fflush(stdin);
		scanf("%s",a[i].ten);
		scanf("%f",&a[i].x1);
		scanf("%f",&a[i].x2);
		scanf("%f",&a[i].x3);
	}
}
void kiemtra(sv a[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i].x1<4||a[i].x2<4||a[i].x3<4)
		{
			printf("%s %.2f %.2f %.2f",a[i].ten,a[i].x1,a[i].x2,a[i].x3);
			printf("\n");
		}
	}
}
int main()
{
	int n;
	sv a[100];
	scanf("%d",&n);
	nhap(a,n);
	printf("Danh sach sinh vien khong du tu cach la: \n");
	kiemtra(a,n);
}
