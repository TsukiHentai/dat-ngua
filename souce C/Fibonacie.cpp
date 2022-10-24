#include<stdio.h>
void fibo(int n)
{
	int f0=1;
	int f1=1;
	int f2;
	for(int i=1;i<=n;i++)
	{
		printf("%d ",f0);
		f2=f1+f0;
		f0=f1;
		f1=f2;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	fibo(n);
}
