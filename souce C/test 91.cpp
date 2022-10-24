#include<stdio.h>
void dung(int n)
{
	int temp=n-1;
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<temp;j++)
		printf(" ");
		for(int j=0;j<2*i-1;j++)
		printf("*");
		printf("\n");
		temp--;
	}
}
void nguoc(int n)
{
	int temp=0;
	for(int i=n;i>=1;i--)
	{
		for(int j=0;j<temp;j++)
		printf(" ");
		for(int j=0;j<2*i-1;j++)
		printf("*");
		printf("\n");
		temp++;
	}
}
int main()
{
	int a;
	scanf("%d",&a);
	if(a>0) dung(a);
	else nguoc(a*(-1));
}
