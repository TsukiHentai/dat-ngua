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
	int dem=0;
	int tong=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]>0)
			{
				dem++;
				tong=tong+a[i][j];
			}
		}
	}
	printf("Tong: %.2f",((float)tong/dem));
}
int main()
{
	int n,m;
	int a[100][100];
	scanf("%d %d",&n,&m);
	nhap(a,n,m);
	tinh(a,n,m);
}
