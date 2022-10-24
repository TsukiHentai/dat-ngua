#include<stdio.h>
int snt(int n)
{
	int dem=0;
	for(int i=2;i<=n;i++)
	{
		if(n%i==0) dem++;
	}
	if(dem==0) return 1;
	else return 0;
}
void in(int a,int b)
{
	for(int i=a;i<=b;i++)
	{
		if(snt(i)==1)	printf("%d ",i);
	}
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(b<=1)	printf("Khong co");
	else
	in(a,b);
}
