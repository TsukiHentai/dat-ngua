#include<stdio.h>
void Nhap(int a[][100],int n,int m)
{
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
}
void Tich(int a[][100],int b[][100],int n,int m,int n1,int m1)
{
	int c[n][m1];
	for(int i=0;i<n;i++)
		for(int j=0;j<m1;j++)
		{
			c[i][j]=0;
			for(int k=0;k<m;k++)
				c[i][j]+=(a[i][k]*b[k][j]);
		}
	printf("Ma tran tich\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m1;j++)
			printf("%d ",c[i][j]);
		printf("\n");
	}
	
}
int main()
{
	int n,m; //n ,m la hang va cot ma tran A
	scanf("%d%d",&n,&m);
	
	if(n<=0 || m<=0)
	{
		printf("Du lieu vao sai");
		return 1;
	}
	int a[100][100];
	Nhap(a,n,m);
	////////////////
	int n1,m1; //n ,m la hang va cot ma tran B
	scanf("%d%d",&n1,&m1);
	
	if(n1<=0 || m1<=0)
	{
		printf("Du lieu vao sai");
		return 1;
	}
	int b[100][100];
	Nhap(b,n1,m1);
	if(m==n1)
		Tich(a,b,n,m,n1,m1);
	else
		if(m1==n)
			Tich(b,a,n1,m1,n,m);
		else
			printf("Du lieu vao sai");
}
