#include<stdio.h>
int ucln(int a,int b)
{
	int gan=0;
	for(int i=1;i<=a;i++)
	{
		if(a%i==0&&b%i==0)	gan=i;
	}
	return gan;
}
int bcnn(int a,int b)
{
	return a*b/ucln(a,b);
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	if(a<=0||b<=0)	printf("Du lieu sai");
	else
	if(a<b)
	{
		printf("Uoc so chung lon nhat cua %d va %d la %d\n",a,b,ucln(a,b));
		printf("Boi so chung nho nhat cua %d va %d la %d",a,b,bcnn(a,b));
	}
	else
	{
	printf("Uoc so chung lon nhat cua %d va %d la %d\n",a,b,ucln(b,a));
		printf("Boi so chung nho nhat cua %d va %d la %d",a,b,bcnn(b,a));	
	}
}
