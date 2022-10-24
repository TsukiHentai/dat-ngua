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
	int max=0;
	int vitri=0;
	for(int i=0;i<n;i++)
	{
		int tong=0;
		for(int j=0;j<m;j++)
		{
			tong=tong+a[i][j];	
		}
		if(tong>max)	
		{
			max=tong;
			vitri=i;
		}
	}
		printf("%d %d",max,vitri);
}
int main()
{
	int n,m;
	int a[100][100];
	scanf("%d %d",&n,&m);
	nhap(a,n,m);
	tinh(a,n,m);
}
