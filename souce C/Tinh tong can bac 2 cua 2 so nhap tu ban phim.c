//Tinh tong can bac 2 cua 2 so nhap tu ban phim
#include<stdio.h>
main(){
	float a,b,s;
	printf("Nhap vao 2 so a,b: ",a,b);
	scanf("%f%f",&a,&b);
	while(a<0 && b<0){
		printf("Nhap lai a,b!");
		scanf("%f%f",&a,&b);
	}
	s=sqrt(a)+sqrt(b);
	printf("Tong la: %f",s);
	return 0;
}
