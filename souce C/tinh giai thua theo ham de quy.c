//tinh giai thua theo ham de quy
#include<stdio.h>
int giaithua(int n)
{
	if(n==0) return 1;
	else return n*giaithua(n-1);
}
main(){
	int n;
	printf("Nhap n: ",n);
	scanf("%d",&n);
	printf("%d!=%d",n,giaithua(n));
}
