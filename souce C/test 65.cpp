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
void max(int a[][100],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		int vitri=0;
		for(int j=0;j<m;j++)
		{
			int max=0;
			if(a[i][j]>max)
			{
				max=a[i][j];
				vitri=j;
			}
		}
		printf("%d %d %d",i,vitri,a[i][vitri]);
		printf("\n");
	}
}
int main()
{
	int a[100][100];
	int n,m;
	do
	{
		scanf("%d %d",&n,&m);
	}while(n<1&&n>100&&m<1&&m>100);
	nhap(a,n,m);
	max(a,n,m);
}
