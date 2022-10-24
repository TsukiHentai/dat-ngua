#include<stdio.h>
#include<stdlib.h>
typedef struct
{
	char ten[100];
	int sbd;
	float d1;
	float d2;
	float d3;
	float dut;
}sv;
void nhap(sv a[],int n)
{
	for(int i=0;i<n;i++)
	{
		fflush(stdin);
		scanf("%d",&a[i].sbd);
		scanf("%s",a[i].ten);
		scanf("%f",&a[i].d1);
		scanf("%f",&a[i].d2);
		scanf("%f",&a[i].d3);
		scanf("%f",&a[i].dut);
	}
}
void xuat(sv a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d %s %.2f %.2f %.2f %.2f %.2f",a[i].sbd,a[i].ten,a[i].d1,a[i].d2,a[i].d3,a[i].dut,(a[i].d1+a[i].d2+a[i].d3+a[i].dut));
		printf("\n");
	}
}
int main()
	sv a[500];
	int n;
	scanf("%d",&n);
	nhap(a,n);
	printf("Danh sach cac thi sinh: %d\n",n);
	printf("%d\n",n);
	xuat(a,n);
}
