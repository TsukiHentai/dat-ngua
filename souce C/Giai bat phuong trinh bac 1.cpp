//Gia bat phuong trinh bac 1 ax+b>0
#include<stdio.h>
int main()
{
	float a,b,x;
	printf("Nhap vao a,b: ");
	scanf("%f%f",&a,&b);
	if(a==0)
	{
		printf("Bat phuong trinh vo nghiem!!!");
		return 0;
	}
	else
		x=-b/a;
		printf("Bat phuong trinh co tap nghiem la: x > %f",x);
}
