//Tinh tong cac uoc cua so nguyen duong n
#include<stdio.h>
main()
{
	int n,i,s=0;
	do{
	printf("Nhap vao so n: ",n);
	scanf("%d",&n);
	}while(n<0);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			s=s+i;
		}
	}
	printf("Tong la: %d",s);
}
