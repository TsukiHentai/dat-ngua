#include<stdio.h>
void nhap(float a[][100],int n,int m)
{
	for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				scanf("%f",&a[i][j]);
			}
		}
}
void xuat(float a[][100],int n,int m)
{
	int vitri1=0,vitri2=0;
	float min=a[0][0];
	for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(min>a[i][j])
				{
					min=a[i][j];
					vitri1=i;
					vitri2=j;
				}
			}
			
		}
	printf("%d %d %.2f",vitri1,vitri2,a[vitri1][vitri2]);
}
int main()
{
	int n,m;
	float a[100][100];
	do
	{
		scanf("%d %d",&n,&m);
	}while(n<1&&n>100&&m<1&&m>100);
	nhap(a,n,m);
	xuat(a,n,m);
}
