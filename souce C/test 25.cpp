#include<stdio.h>
#include<stdlib.h>
typedef struct
{
	char ten[100];
	int sbd;
	float diem1;
	float diem2;
	float diem3;
}sv;
void nhap(sv a[],int n)
{
	for(int i=0;i<n;i++)
	{
		fflush(stdin);
		scanf("%s",a[i].ten);
		scanf("%d",&a[i].sbd);
		scanf("%f",&a[i].diem1);
		scanf("%f",&a[i].diem2);
		scanf("%f",&a[i].diem3);
	}
}
void xuat(sv a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%s %d %.2f %.2f %.2f %.2f",a[i].ten,a[i].sbd,a[i].diem1,a[i].diem2,a[i].diem3,((a[i].diem1)+(a[i].diem2)+(a[i].diem3))/3);
		printf("\n");
	}
}
void sxtheosbd(sv a[],int n)
{
	sv c;
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
		if(a[i].sbd>a[j].sbd)
		{
			c=a[i];
			a[i]=a[j];
			a[j]=c;
		}
	xuat(a,n);
}
int main()
{
	int n;
	sv a[100];
	scanf("%d",&n);
	nhap(a,n);
	printf("Danh sach sinh vien\n");
	printf("%d\n",n);
	sxtheosbd(a,n);
}
