#include<stdio.h>
int main()
{
	int a[]={5,6,-1,4,-9,3};//5,6,-1,100,4,-9
	int n=6;
	int k=3;
	int b=100;
	for(int i=n-1;i>=k+1;i--)
	{
		a[i]=a[i-1];//a[4]=a[3]
	}
	a[k]=b;//a[3]=4 gan bang 100
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
