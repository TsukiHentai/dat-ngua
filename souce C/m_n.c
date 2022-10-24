#include<stdio.h>
int mu(int m ,int n)
{
	if(n==0) return 1;
	else return m*mu(m,n-1);
}
main()
{
	int m,n,s;
 	printf("Nhap m,n:");
 	scanf("%d%d",&m,&n);
 	s=mu(m,n);
 	printf("Gia tri la: %d",s);
}
