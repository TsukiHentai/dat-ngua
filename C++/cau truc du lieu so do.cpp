#include<stdio.h>
int main()
{
	int a[]={5,6,-1,4,-9,3};
	int n=3;
	int k=3;
	int i=6-1;
	int b=100;
	for(i=6-1;i>=k+1;i--)
	{
		a[i]=a[i-1];
	}
	a[k]=b;
	for(i=0;i<n;i++)
	{
		a[i];
	}
	for(i=0;i<6;i++)
	{
		printf("%d ",a[i]);
	}
}
