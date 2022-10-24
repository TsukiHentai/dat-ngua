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
int tangdan(int a[][100],int n,int m,int z)
{
	for(int j=0;j<m-1;j++)
	{
		if(a[j][z]>a[j+1][z]) return 0;
		break;
	}
}
int main()
{
	int n,m,z,d;
	int i;
	int a[100][100];
	scanf("%d %d %d",&n,&m,&z);
	nhap(a,n,m);
	xuat(a,n,m);
	for(i=0;i<z;i++)
	{
		scanf("%d",&d);
		if(tangdan(a,n,m,d)==0) printf("No\n");
		else printf("YES\n");
	}
}
