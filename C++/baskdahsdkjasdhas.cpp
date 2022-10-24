#include<stdio.h>
int main()
{
	int a[]={5,6,-1,4,-9,3};
	int n=6;
	int k=3;
	int b=100;
	for(int i=n-1;i>=k+1;i--)
	{
		a[i]=a[i-1];
	}
	a[k]=b;
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
