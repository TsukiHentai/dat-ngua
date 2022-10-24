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
int soduong(int n)
{
	if(n>=0) return 1;
	else return 0;
}
void tinh(int a[][100],int n,int m)
{
	int tong=0;
	for(int i=0;i<n;i++)
	{
		
		for(int j=0;j<m;j++)
		{
			if((i==0||i==(n-1)||j==0||j==(m-1))&&a[i][j]>0)
			{
				tong++;
			}
		}
	}
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
