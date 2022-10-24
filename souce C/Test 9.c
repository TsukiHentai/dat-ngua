#include<stdio.h>
main()
{
	int a[100][100],m,n,i,j;
	printf("Nhap vao so cot, dong cua ma tran: ",n,m);
	scanf("%d%d",&n,&m);
	if(m<0 && n<0)
	{
		printf("Nhap lai so cot, dong cua ,ma tran: ",n,m);
		scanf("%d%d",&m,&n);
	}
	printf("Nhap cac phan tu cua ma tran: \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Nhap phan tu a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Ma tran la: \n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("%d	",a[i][j]);
		printf("\n");

	}
	int min=a[0][0];
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if (min<a[i][j]) min=a[i][j];
			return min;
		}
	}
	printf("Phan tu nho nhat: %d",min);

}
