#include<stdio.h>
int main()
{
	int a[]={5,6,-1,4,-9,3};
	int k=3;
	int n=6;
	int i;
	int b=100;
	for(i=n-1;i>=k+1;i--)
	{
		a[i]=a[i-1];
	}
	a[k]=b;
	for(i=0;i<n;i++)
	{
		a[i];
	}

}
