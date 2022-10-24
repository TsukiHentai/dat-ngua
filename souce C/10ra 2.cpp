#include<stdio.h>
void coso(int n)
{
	if(n<=0)
	return ;
	coso(n/2);
	printf("%d",n%2);
}
int main()
{
	int a;
	scanf("%d",&a);
	coso(a);
}
