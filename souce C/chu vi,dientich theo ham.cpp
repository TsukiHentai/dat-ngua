//Tinh chu vi, dien tich theo ham
#include<stdio.h>
float tinhcv(int n)
{
	return 2*n*3.14;
}
float dientich(int n)
{
	return 3.14*n*n;
}
int main()
{
	float r;
	printf("Nhap vao ban kinh hinh tron: ");
	scanf("%f",&r);
	printf("\nChu vi hinh tron la: %f",tinhcv(r));
	printf("\nDien tich hinh tron la: %f",dientich(r));
}
