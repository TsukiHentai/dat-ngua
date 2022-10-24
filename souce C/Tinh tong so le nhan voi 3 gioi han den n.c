//Tinh tong so le nhan voi 3 gioi han tu 0 den n
#include<stdio.h>
main(){
	int n,i,s=0;
	printf("Nhap gioi han n: ",n);
	scanf("%d",&n);
	for(i=1;i<=n;i+=2){
		s=(s+i*3);
	}
	printf("Tong la: %d",s);
	return 0;
}
