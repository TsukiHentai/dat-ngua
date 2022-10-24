#include<stdio.h>
void nhap(int a[][100],int n,int m)
{
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
}
void xuat(int a[][100],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			for(int k=j+1;k<m;k++)
			{
				if(a[i][j]>a[i][k])
				{
					int temp = a[i][j];
					a[i][j]=a[i][k];
					a[i][k]=temp;
				}
			}
		printf("%d ",a[i][j]);
		}
	printf("\n");
	}	
}
int main()
{
	int n,m;
	int a[100][100];
	do
	{
	scanf("%d %d",&n,&m);
	}while(n<1&&n>100&&m<1&&m>100);
	nhap(a,n,m);
	printf("%d %d\n",n,m);
	xuat(a,n,m);
}
