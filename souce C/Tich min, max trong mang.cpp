//tich phan tu lon nhat va nho nhat cua mang
#include<stdio.h>
int main()
{
	int day[100];
	int n,i,min,max=0,tich;
	printf("Nhap vap n: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Phan tu %d: ",i);
		scanf("%d",&day[i]);
	}
	printf("\nMang vua nhap la:");
	for(i=0;i<n;i++)
	printf("%d ",day[i]);
	for(i=0;i<n;i++)
	{
		if(day[i]>max) max=day[i];
	}
	min=max;
	for(i=0;i<n;i++)
	{
		if(min>day[i]) min=day[i];
	}
	printf("\nMin, max: %d %d",min,max);
	printf("\nTich min, max la: %d",min*max);
}
