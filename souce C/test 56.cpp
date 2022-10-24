#include<stdio.h>
#include<math.h>

int SHH(int n)
{
	int s=0;
	int i;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			s=s+i;
		}
	}
		if(s==n) {
			return 1;
		}
		return 0;
	}
int main()
{
	int a,b,n,dem=0; 
	scanf("%d %d",&a,&b);
	if(a<=b)
	{
		for(int i=a;i<=b;i++)
			if(SHH(i)==1)
			{
				dem++;
				printf("%d ", i);
			}
	}
		if(dem==0)printf("Khong co");
	else 
	{
		for(int i=b;i<=a;i++)
		{
			if(SHH(i)==1)
	   		{
				dem++;
				printf("%d ",i);
			}
		}
		if(dem==0)printf("Khong co");
	}
}
