//ham
#include<stdio.h>
int tinhtongcmmdi(int n,int m)
{
	return n+m;
}
int main()
{
	int a,b,tong;
	printf("Nhap vao a,b: ");
	scanf("%d%d",&a,&b);
	printf("Ket qua la: %d",tinhtongcmmdi(a,b));
}
