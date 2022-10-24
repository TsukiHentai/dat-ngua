//tinh so tien taxi di duoc tu so km nhap vao
#include<stdio.h>
float n,s=0,sum;
main(){
printf("Nhap vao so km da di duoc: ",n);
scanf("%f",&n);
	if (n<2){
		s=n*15000;
		printf("So tien la: %f",s);
	}
	else{
		if(n>=2 || n<6){
			s=2*15000+n*13500;
			printf("So tien la: %f",s);
		}
		else{
			if(n>=6 || n<120){
				s=2*15000+5*13500+n*11000;
				printf("So tien la: %f",s);
			}
			else{
				s=(2*15000+5*13500+n*11000)-((2*15000+5*13500+n*11000)*10)/100;
				printf("So tien la: %f",s);\
			}
		}
	}
}

