#include<stdio.h>
int kt(int n)
{
	int dem=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0) dem++;
	}
	if(dem==2) return 1;
	else return 0;
}
void snt(int a,int b)
{
	if(a<0&&b<0)	printf("Khong co");
	else
	{
	int haha=0;
	for(int i=a;i<=b;i++)
	{
		if(kt(i)==1)
		{
			printf("%d ",i);
		haha++;
		}
	}
	if(haha==0)	printf("Khong co");
	}
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	if(a<b) snt(a,b);
		else snt(b,a);
}
