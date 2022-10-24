#include<stdio.h>
int main()
{
	int n,n1=1,n2=1,n3;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		printf("%d",n1);
		n3=n1+n2;
		n1=n2;
		n2=n3;
	}
}
