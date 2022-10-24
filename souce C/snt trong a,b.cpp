#include<stdio.h>
int kiemtra(int n)
{
	if(n==2) return 1;
	int dem=0;
	for(int i=2;i<=n;i++)
	{
		if(n%i==0) dem++;
	}
	if(dem==1) return 1;
	else return 0;
}
void snt(int a,int b)
{
	for(int i=a;i<=b;i++)
	{
		if(kiemtra(i)==1)	printf("%d ",i);
	}
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	snt(a,b);
}
