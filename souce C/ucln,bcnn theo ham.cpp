#include<stdio.h>
void ucln_bcnn(int a,int b)
{
	int i,uc=0,bc=0;
	for(i=1;i<=a;i++)
	{
		if(a%i==0&&b%i==0)
		{
			i=uc;
		}
	}
	bc=a*b/(uc);
	printf("UCLN: %d",uc);
	printf("BCNN: %d",bc);
}
int main()
{
	int a,b;
	printf("Nhap vao a,b: ");
	scanf("%d%d",&a,&b);
	if(a<0||b<0)	printf("Nhap sai!");
	else
	ucln_bcnn(a,b);
}
