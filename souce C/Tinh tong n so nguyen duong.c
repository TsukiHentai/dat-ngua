// tinh tong n so nguyen duong nhap tu ban phim
#include<stdio.h>
main(){
	int n,i,s=0;
	do{
	printf("Nhap vao n so can tinh tong: ",n);
	scanf("%d",&n);}
	while(n<0);
	for(i=1;i<=n;i++)
		s=s+i;
	printf("Tong la: %d",s);
}
