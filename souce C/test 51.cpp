#include<stdio.h>
int kt(int n)
{
	if(n<2) return 0;
	int dem=0;
	for(int i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			dem++;
		}
	}
	if(dem==1) return 1;
	else return 0;
}
void lam(int a,int b)
{
	int dem=0;
	for(int i=a;i<=b;i++)
	{
		if(kt(i)==1) printf("%d ",i);
		dem++;
	}
	if(dem==0)	printf("Khong co");
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	if(a>b) lam(b,a);
	else lam(a,b);
}
