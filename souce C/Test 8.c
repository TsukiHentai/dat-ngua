#include<stdio.h>
main()
{
	int a[100][100],m,n,i,j;
	printf("Nhap so dong, so cot: ");
	scanf("%d%d",&m,&n);
	printf("Nhap cac gia tri cua ma tran \n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				printf("Nhap a[%d][%d]=",i,j);
				scanf("%d",&a[i][j]);

			}
		}
	printf("Ma tran la:\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
				printf("%d	",a[i][j]);
			printf("\n");
			
		}
}
