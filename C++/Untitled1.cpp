#include<stdio.h>
void doicho(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				swap(a[i],a[j]);
			}
		}
	}
}
void chon(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		int vt=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[vt])
			{
				vt=j;
			}
		}
		swap(a[i],a[vt]);
	}
}
void noibot(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=n-1;j>0;j--)
		{
			if(a[j]<a[j-1])
			{
				swap(a[j],a[j-1]);
			}
		}
	}
}
void chen(int a[],int n)
{
	for(int i=1;i<n;i++)
	{
		int temp=a[i];
		for(int j=i-1;j>=0;j--)
		{
			if(temp<a[j])
			{
				a[j+1]=a[j];
			}
		}
		a[j+1]=temp;
	}
}
