//Nhap vao ban phim 1 ma tran thuc m hang n cot
#include<stdio.h>
main()
{
	int a[100][100],n,m,i,j,d,s=0,max;
	printf("Nhap so hang va cot cua ma tran: ");
	scanf("%d%d",&n,&m);
	printf("Nhap cac phan tu cua ma tran: \n");
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			{
				printf("Nhap a[%d][%d]=",i,j);
				scanf("%d",&a[i][j]);
			}
	printf("Ma tran da nhap la: \n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			printf("%d	",a[i][j]);
		printf("\n");
	}
}
