#include<stdio.h>
void coso(int n)
{
	if(n<=0)
	return ;
	coso(n/2);
	printf("%d",n%2);
}
void in(int a, int b)
{
	int i;
	for(i=a;i<=b;i++)
	{
		printf("%d:",i);
		coso(i);
		printf("\n");
	}
}
int main()
{
	int a,b;
	printf("Nhap vao 2 gioi han a,b: ");
	scanf("%d%d",&a,&b);
	if(a<b)	in(a,b);
	else in(b,a);
}
