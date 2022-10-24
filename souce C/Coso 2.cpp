#include<stdio.h>
void coso2(int n)
{
	if(n==0)
	return ;
	coso2(n/2);
	printf("%d",n%2);
}
void in(int a,int b)
{
	for(int i=a;i<=b;i++)
	{
		printf("%d: ",i);
		coso2(i);
		printf("\n");
	}
}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	if(a<b)
	in(a,b);
	else
	in(b,a);
}
