#include<stdio.h>
int main()
{
	int n,c;
	scanf("%d",&n);
	while(n>0)
	{
		c=n%10;
		n=n/10;
		printf("%d ",c);
	}
		
}
