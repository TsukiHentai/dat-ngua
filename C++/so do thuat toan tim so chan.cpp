#include<stdio.h>
int main()
{
	int a[]={5,4,-1,6,-9,3};
	int n=6,d=0;
	for(int i=n-1;i>=0;i--)
	{
		if(a[i]%2==0)
		{
			printf("%d,%d",a[i],i);
			d=1;
		}
	}
	if(d==0)
		printf("Khong co so TM");
	return 0;
}
