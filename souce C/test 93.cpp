#include<stdio.h>

void nhap(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
int le(int n)
{
	if(n%2!=0) return 1;
	else return 0;
}
void sxlemin(int a[],int n)
{
	int vitri=0;
	int min=0;
	for(int j=0;j<n;j++)
	{
		if(le(a[j])==1)
		{
		min=a[j];
		break;
		}
	}
	for(int i=1;i<n;i++)
	{
		if(le(a[i])==1&&min>a[i])
		{
			min=a[i];
			vitri=i;	
		}
	}
	if(vitri!=0)	
		printf("So le nho nhat co vi tri %d gia tri %d",vitri,a[vitri]);
	else if(le(a[0])==1)
		printf("So le nho nhat co vi tri 0 gia tri %d",a[0]);
	else
	printf("Khong co so le trong mang");
}

int main(){
	int a[1000];
	int n;
	scanf("%d",&n);
	nhap(a,n);
	sxlemin(a,n);
}
