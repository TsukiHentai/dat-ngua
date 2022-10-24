//Tinh tong 1`2+2`2+3`2+...+n`2
#include<stdio.h>
main()
{
	int n,s=0,i;
	printf("Nhap vao so n: ",n);
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	s=s+i*i;
	}
	printf("Tong la: %d",s);
}

