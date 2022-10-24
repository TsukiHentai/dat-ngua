//
#include<stdio.h>
int main()
{
	int day[100];
	int n,i,j;
	printf("Nhap vao n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Phan tu %d: ",i);
		scanf("%d",&day[i]);
	}
	printf("Day vua nhap la: ");
	for(i=0;i<n;i++)
	printf("%d	",day[i]);
	printf("\nNhung so nguyen to trong day la: ");
	for(i=0;i<n;i++)
	{
		int dem=1;
		if(day[i]==1) dem--;
		for(j=2;j<day[i];j++)
		{
			if(day[i]%j==0)	dem++;
		}
		if(dem==1)	printf("%d ",day[i]);
	}
}
