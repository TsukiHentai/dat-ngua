//Giai phuong trinh bac 1 ax+b=0
#include<stdio.h>
main(){

float a,b,x;

printf("Nhap vao a,b: ",a,b);
scanf("%f%f",&a,&b);
if(a==0){
	printf("Phuong trinh vo nghiem!");
}
else
	if(b==0){
		printf("Phuong trinh vo nghiem!");
	}
	else{
		x=(float)-b/a;
		printf("Phuong trinh co nghiem la x= %f",x);
	}
}
