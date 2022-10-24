#include<stdio.h>
int ucln(int a, int b)
{
	int i,kq=0,uc;
	for(i=1;i<=a;i++)
	{
		if(a%i==0&&b%i==0)
		{
			kq=i;
		}
	}
	return kq;
}
int bcnn(int a,int b)
{
	return a*b/ucln(a,b);
}
int main()
{
	int m,n;
	printf("Nhap vao 2 so can tim uoc chung va boi chung: ");
	scanf("%d%d",&m,&n);
	printf("UCLN cua %d va %d la: %d\n",m,n,ucln(m,n));
	printf("BCNN cua %d va %d la: %d\n",m,n,bcnn(m,n));
}
