#include<stdio.h>
int main()
{
	int n=6;
	int s=0;
	while(n!=0)
	{
		s+=n%10;
		n/=10;
	}
	for(int i=2;i<=s/2;i++)
	{
		if(s%i==0)
		{
			printf("S khong la so nguyen to");
			return 0;
		}
	}
	printf("S la so nguyen to");
	return 0;
}
