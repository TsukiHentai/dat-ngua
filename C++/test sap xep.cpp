#include<stdio.h>
int main()
{
	int a[]={5,6,8,2,6,3};
	for(int i=0;i<6;i++)
	{
		for(int j=0;j<6;j++)
		if(a[i]<a[j])
		{
			int temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	for(int i=0;i<6;i++)
	{
		printf("%d ",a[i]);
	
	}
}
