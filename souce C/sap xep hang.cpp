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
void sx(int a[][100],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			for(int k=j+1;k<m;k++)
			{
				if(a[i][j]>a[i][k])
				{
					int temp=a[i][j];
					a[i][j]=a[i][k];
					a[i][k]=temp;
				}
			}
		}
	}
	xuat(a,n,m);
}
int main()
{
	int a[100][100];
	int n,m;
	scanf("%d %d",&n,&m);
	nhap(a,n,m);
	printf("%d %d\n",n,m);
	sx(a,n,m);
}
