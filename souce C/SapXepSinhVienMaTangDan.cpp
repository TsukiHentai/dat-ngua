#include<stdio.h>
typedef struct 
{
	char t[30];
	int m;
	float d1,d2,d3;
}
sv;
sv a[100];
void nhap(int n)
{
	for(int i=0;i<n;i++)
		scanf("%s%d%f%f%f",a[i].t,&a[i].m,&a[i].d1,&a[i].d2,&a[i].d3);
}
void xuat(int n)
{
	for(int i=0;i<n;i++)
		printf("%s %d %.2f %.2f %.2f %.2f\n",a[i].t,a[i].m,a[i].d1,a[i].d2,a[i].d3,(a[i].d1+a[i].d2+a[i].d3)/3);
		
		
		
	
}
void ss(int n)
{
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
		{
			if(a[i].m>a[j].m)
			{
				sv t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
}
int main()
{
	int n;
	scanf("%d",&n);
	nhap(n);
	printf("Danh sach sinh vien\n%d\n",n);
	ss(n);
	xuat(n);	
}
