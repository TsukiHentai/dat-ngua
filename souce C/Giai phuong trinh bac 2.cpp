//Phuong trinh bac 2 
#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,x,d,x1,x2;
	printf("Nhap vao a,b,c: ");
	scanf("%f%f%f",&a,&b,&c);
	d=b*b-4*a*c;
	if(a==0)
	{	
		printf("Phuong trinh co nghiem duy nhat x= %f",x=-c/b);
		return 0;
	}
	else
		if(d<0)
		{
			printf("Phuong trinh vo nghiem!!!");
			return 1;
		}
		else
			if(d==0)
				printf("Phuong trinh co nghiem kep x= %f",x=-b/2*a);
			else 
				if(d>0)
				x1=(-b+sqrt(d))/(2*a);
				x2=(-b-sqrt(d))/(2*a);
				printf("Phuong trinh co 2 nghiem phan biet: ");
				printf("\n x1= %f",x1);
				printf("\n x2= %f",x2);
}
