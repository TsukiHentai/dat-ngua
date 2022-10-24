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
int main()
{
	int a[100][100];
	int n,m;
	scanf("%d %d",&n,&m);
	nhap(a,n,m);
	printf("%d %d\n",n,m);
	printf("Ma tran la: \n");
	xuat(a,n,m);
}
