#include<iostream>
using namespace std;
int main()
{
	int a[]={3,6,7,2,3,4,8,3,34,97,23,25};
	for(int i=0;i<11;i++)
	{
		int min=i;
		for(int j=i+1;i<12;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		int temp=a[min];
		a[min]=a[i];
		a[i]=temp;
	}
	for(int k=0;k<12;k++)
	{
		cout<<a[k];
	}
}
