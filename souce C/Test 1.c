#include<stdio.h>

int i,n;
float s=0,gt=1,sum=0;
main(){
printf("Nhap vao so n: ",n);
scanf("%d",&n);
	for(i=1;i<=n;i++){
	gt=gt*i;
	
	for(i=1;i<=n;i++){
	s=s+(2*i+1);
	
	for(i=1;i<=n;i++){
	sum=sum+1/(s*gt);
	}
}
}
	printf("Tong la: %f",&s);
}
