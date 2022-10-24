#include<stdio.h>
int ucln(int a, int b)
{
	int uc=0;
	for(int i=1;i<=a;i++)
	{
		if(a%i==0&&b%i==0)
		uc=i;
	}
	return uc;
}
int bcnn(int a, int b)
{
	return a*b/ucln(a,b);
}
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	if(x<=0||y<=0)
		printf("Du lieu sai");
	else
	{
		printf("Uoc so chung lon nhat cua %d va %d la %d\n",x,y,ucln(x,y));
		printf("Boi so chung nho nhat cua %d va %d la %d\n",x,y,bcnn(x,y));
	}
	
}
