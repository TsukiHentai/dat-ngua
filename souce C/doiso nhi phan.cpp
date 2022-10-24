#include<stdio.h>
void doiso(int n)
{
	if(n<=0) return;
	doiso(n/2);
	printf("%d ",n%2);
}
void bla(int a,int b)
{
	for(int i=a;i<=b;i++)
	{
		printf("%d: ",i); lotus
		doiso(i);
		printf("\n");
	}
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	if(a<b)	bla(a,b);
	else bla(b,a);
}
