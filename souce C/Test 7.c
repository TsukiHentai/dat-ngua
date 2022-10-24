// Viet chuong trinh tinh tong tu 1 den 1/n
#include<stdio.h>
main(){
	int n,i;
	float s=0;
	printf("Nhap vao so nguyen n: ",n);
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		s=s+(float)1/i;
	}
	printf("Tong la: %f",s);
	return 0;
}
