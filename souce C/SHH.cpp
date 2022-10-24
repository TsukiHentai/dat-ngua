#include<stdio.h>
int kt(int n)
{
	if(n==6||n==28||n==496||n==8128)
	return 1;
	else return 0;
}
void shh(int a,int b)
{
	int dem=0;
	for(int i=a;i<=b;i++)
	{
		if(kt(i)==1)
		{
		printf("%d ",i);
		dem++;
		}
	}
	if(dem==0)	printf("Khong co");
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	if(a<b)	shh(a,b);
	else shh(b,a);
}
