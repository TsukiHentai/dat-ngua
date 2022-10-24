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
void max(float a[][100],int n,int m)
{
	float max=0;
	int vitri1,vitri2;
	for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(a[i][j]>max)
				{
					max=a[i][j];
					vitri1=i;
					vitri2=j;
				}
			}
		}
	printf("Phan tu lon nhat co chi so hang %d, chi so cot %d, gia tri %.2f",vitri1,vitri2,a[vitri1][vitri2]);
}
int main()
{
	float a[100][100];
	int n,m;
	do
	{
	scanf("%d %d",&n,&m);
	}while(n<1&&n>100&&m<1&&m>100);
	nhap(a,n,m);
	max(a,n,m);
}
