#include<stdio.h>
int main()
{
	int a,b;
	int tong=0;
	scanf("%d%d",&a,&b);
	if(a<b)
	{
	for(int i=a;i<=b;i++)
	{
		if(i%2!=0)	tong=tong+i;
	}
	printf("%d",tong);
	}
	else
	{
	for(int i=b;i<=a;i++)
	{
		if(i%2!=0)	tong=tong+i;
	}
	printf("%d",tong);
	}
}
