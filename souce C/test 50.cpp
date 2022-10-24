#include<stdio.h>
void doiso(int n)
{
	if(n<=0) return ;
	doiso(n/2);
	printf("%d ",n%2);
}
void lam(int a,int b)
{
	for(int i=a;i<=b;i++)
	{
		printf("%d: ",i);
		doiso(i);
		printf("\n");
	}
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(a>b) lam(b,a);
	else lam(a,b);
}
