#include<stdio.h>
float tong(int n)
{
	if(n==1) return 1/2;
	else return (float)1/(2*n+1)+tong(n-1);
}
main()
{
	int n;
	printf("Nhap vao n: ");
	scanf("%d",&n);
	printf("Tong la: %f",tong(n));
}
