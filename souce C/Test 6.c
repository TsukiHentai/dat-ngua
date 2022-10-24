#include<stdio.h>
int giaithua(int n)
{
	if(n==0) return 0;
	else return n + giaithua(n-1);
}
main()
{
	int n;
	printf("Nhap vao so can tinh giai thua: ",n);
	scanf("%d",&n);
	printf("Tong la: %d",giaithua(n));
}
