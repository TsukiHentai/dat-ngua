#include<stdio.h>
int main()
{
	int a[10][10],i,j,n,m;
	printf("Nhap so dong, so cot: ");
	scanf("%d%d",&n,&m);
	printf("Nhap cac phan tu cua mang:\n");
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			{
				printf("Nhap a[%d][%d]=",i,j);
				scanf("%d",&a[i][j]);
			}
	//In ma tran
	printf("Mang 2 chieu vua nhap: \n");
	for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
				printf("%d	",a[i][j]);
			printf("\n");
		}
}
