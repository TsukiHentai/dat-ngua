#include<iostream>
using namespace std;
int main()
{
	int a[100];
	int n=8,i;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int min=a[0];
	int max=a[0];
	int vtmin,vtmax;
	for(i=0;i<n;i++)
	{
		if(min>a[i])
		{
			min= a[i];
			vtmin=i;
		}
	}
	for(i=0;i<n;i++)
	{
		if(max<a[i]||max==a[i])
		{
			max=a[i];
			vtmax=i;
		}
	}
	int temp=a[vtmin];
	a[vtmin]=a[vtmax];
	a[vtmax]=temp;
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
}
