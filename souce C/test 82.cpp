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
void tinh(int a[][100],int n,int m)
{
	int tong=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(i==j||(n-1-i==j))
			{
				tong=tong+a[i][j];
			}
		}
	}
	tong=tong-a[n/2][m/2];
	printf("Tong: %d",tong);
}
int main()
{
	int n,m;
	int a[100][100];
	scanf("%d %d",&n,&m);
	nhap(a,n,m);
	tinh(a,n,m);
}
