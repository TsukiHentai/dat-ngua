#include<stdio.h>
void nhap(int a[][100],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);	
		}	
	}
}
void xuat(int a[][100],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			printf("%d ",a[i][j]);	
		}
		printf("\n");
	}
}
void tong(int a[][100],int b[][100],int c[][100],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			c[i][j]=a[i][j]+b[i][j];	
		}	
	}
	xuat(c,n,m);
}
int main()
{
	int n1,m1,n2,m2;
	int a[100][100],b[100][100],c[100][100];
	scanf("%d %d",&n1,&m1);
	nhap(a,n1,m1);
	scanf("%d %d",&n2,&m2);
	nhap(b,n2,m2);
	if(n1!=n2||m1!=m2) printf("Du lieu vao sai");
	else
	{
		printf("Ma tran tong\n");
		tong(a,b,c,n1,m1);
	}
	
}
