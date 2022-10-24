#include<stdio.h>
typedef struct
{
	char ten[100];
	int ma;
	float hsl;
	int pc;
}nv;
void nhap(nv a[],int n)
{
	for(int i=0;i<n;i++)
	{
		scanf("%s",a[i].ten);
		scanf("%d",&a[i].ma);
		scanf("%f",&a[i].hsl);
		scanf("%d",&a[i].pc);
	}
}
float l(nv a)
{
	return (a.hsl*2000000+a.pc);
}
void xuat(nv a[],int n)
{	
	for(int i=0;i<n;i++)
	{
	printf("%s %d %.2f %d %.2f",a[i].ten,a[i].ma,a[i].hsl,a[i].pc,(a[i].hsl*2000000+a[i].pc));
	printf("\n");	
	}	
}
void t(nv a[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(l(a[i])<l(a[j]))
			{
				nv temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	xuat(a,n);
}
int main()
{
	int n;
	nv a[100];
	scanf("%d",&n);
	nhap(a,n);
	printf("Danh sach nhan vien\n");
	printf("%d\n",n);
	t(a,n);	
}
