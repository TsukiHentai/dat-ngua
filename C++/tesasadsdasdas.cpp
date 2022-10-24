#include<stdio.h>
void quick(int a[],int left, int right)
{
	int i=left;
	int j=right;
	int tam;
	int x= (left + right)/2;
	while (i<=j)
	{
		while (a[i]<x)i++;
		while (a[j]>x)j--;
		if (i<=j)
		{
			int tam= a[i];
			a[i] = a[j];
			a[j] = tam;
		}
	}
}
int main()
{
	int a[]={5,3,7,4,7,3,2,6};
	int n=8;
	quick(a,0,7);
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
