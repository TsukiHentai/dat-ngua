#include<stdio.h>
int kt(int n)
{
	if(n==0) return 0;
	int tong=0;
	int i;
	for(i=1;i<n;i++)
	{
		if(n%i==0)	tong=tong+i;
	}
	if(tong==n)	return 1;
	else return 0;
}
int shh(int a,int b)
{
	int dem=0;
	int i;
	for(i=a;i<=b;i++)
	{
		if(kt(i)==1)
		{
			printf("%d ",i);
			dem++;
		}
	}
	if(dem==0)	printf("Khong co");
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(a>b)	shh(b,a);
	else	shh(a,b);
}
