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
void tich(int a[][100],int b[][100],int c[][100],int n,int m,int l)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			for(int k=0;k<l;k++)
			{
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
		}
	}
}
int main()
{
	int a[100][100],b[100][100],c[100][100];
	int n1,m1,n2,m2;
	scanf("%d %d",&n1,&m1);
	nhap(a,n1,m1);
	scanf("%d %d",&n2,&m2);
	nhap(b,n2,m2);
	tich(a,b,c,n1,m1,m2);
	printf("Ma tran tich\n");
	xuat(c,n1,m2);
}
