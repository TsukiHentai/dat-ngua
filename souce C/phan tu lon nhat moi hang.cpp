#include<stdio.h>
void nhap(int a[][100],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			scanf("%f",&a[i][j]);
		}
	}
}
void max(int a[][100],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		int max=a[i][0];
		int vitri=0;
		for(int j=1;j<m;j++)
		{
			if(max<a[i][j])
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
	int n,m;
	int a[100][100];
	scanf("%d %d",&n,&m);
	nhap(a,n,m);
	max(a,n,m);
}
