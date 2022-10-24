#include<stdio.h>
void sxdoicho(int a[],int n)// tu be den lon
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}		
		}
	}
}
int main()
{
	for(int i=0;i<100;i++)
	{
		printf("Dat ngua! = %d",i);
	}
}
