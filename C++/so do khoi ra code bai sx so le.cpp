#include<stdio.h>
int main()
{
	int a[]={5,6,-1,4,-9,3};
	int n=6;
	for(int i=0;i<n-1;i++)
	{
		if(a[i]%2!=0)
		{
			for(int j=i+1;j<n;j++)
			{
				if(a[i]>a[j]&&a[j]%2!=0)
				{
					int temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
