#include<stdio.h>
int snt(int n)
{
	if(n<2) return 0;
	for(int i=2;i<=n;i++)
	{
		if(n%i==0) return 1;
	}
	return 0;
}
void nhap(int a,int b)
{
	int dem=0;
	for(int i=a;i<=b;i++)
	{
		snt(i);
		if(snt(i)==1) printf("%d ",i);
		dem++;
	}
	if(dem==0)	printf("Khong co");
}
int main()

{
	int a,b;
	scanf("%d%d",&a,&b);
	if(a<b)
	nhap(a,b);
	else
	nhap(b,a);
}
