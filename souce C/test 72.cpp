#include<stdio.h>
void nhap(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
int chan(int n)
{
	if(n%2==0) return 1;
	else return 0;
}
void tim(int a[],int n)
{
	int max;
	int vitri=0;
	for(int i=0;i<n;i++)
	{
		if(chan(a[i])==1&&a[i]>max)
		{
			max=a[i];
			vitri=i;
		}
	}
	if(vitri!=0)	printf("So chan lon nhat co vi tri %d gia tri %d",vitri,a[vitri]);
	else if(chan(a[0])==1) printf("So chan lon nhat co vi tri 0 gia tri %d",a[0]);
	else printf("Khong co so chan trong mang");
}
int main()
{
	int n;
	int a[1000];
	scanf("%d",&n);
	nhap(a,n);
	tim(a,n);
}
