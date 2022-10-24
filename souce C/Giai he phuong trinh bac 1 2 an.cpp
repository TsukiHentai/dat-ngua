//Giai he phuong trinh bac 1 
#include<stdio.h>
int main()
{
	float a1,b1,c1;
	float a2,b2,c2;
	float x,y,d,d1,d2;
	printf("Nhap a1,b1,c1: ");
	scanf("%f%f%f",&a1,&b1,&c1);
	printf("Nhap a2,b2,c2: ");
	scanf("%f%f%f",&a2,&b2,&c2);
	d=a1*b2-a2*b1;
	d1=b1*c2-b2*c1;
	d2=a1*c2-a2*c1;
	if(d==0)
		{
		if(d1+d2==0)
			printf("He phuong trinh co vo so nghiem");
		else 
			printf("He phuong trinh vo nghiem");
		}
	else
		x=d1/d;
		y=d2/d;
		printf("\nHe phuong trinh co nghiem x= %f",x);
		printf("\nHe phuong trinh co nghiem y= %f",y);
}
