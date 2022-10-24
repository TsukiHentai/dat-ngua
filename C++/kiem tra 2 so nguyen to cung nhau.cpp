#include<iostream>//15 28
int kt(int a,int b,int i)
{
	int dem=0;
	if(a%i==0&&b%i==0)
	dem++;
	if(dem!=0)
	return 1;
	else return 0;
}
int main()
{
	int a,b;
	printf("Nhap a,b: ");
	scanf("%d%d",&a,&b);
	if(a<b)
	{
		int kt1=0;
		for(int i=2;i<a;i++)
		{
			if(kt(a,b,i)==1)
			{
				kt1++;	
			}
		}
		if(kt1==0) printf("2 so nay la 2 so nguyen to cung nhau");
		else printf("2 so nay khong la 2 so nguyen to cung nhau");
	}
	else
	if(a>b)
	{
		int kt2=0;
		for(int i=2;i<b;i++)
		{
			if(kt(a,b,i)==1)
			{
				kt2++;	
			}
		}
		if(kt2==0) printf("2 so nay la 2 so nguyen to cung nhau");
		else printf("2 so nay khong la 2 so nguyen to cung nhau");
	}
}
