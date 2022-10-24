#include<stdio.h>
void sxdoicho(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
void sxchon(int a[],int n)
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
		int temp=a[i];
		a[i]=a[vt];
		a[vt]=temp;
	}
}
void sxnoibot(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
void sxchen(int a[],int n)
{
	for(int i=1;i<n;i++)
	{
		int temp=a[i];
		int j;
		for(j=i-1;j>=0;j--)
		{
			if(temp<a[j])
			{
				a[j+1]=a[j];
			}
			else
			break;
		}
		a[j+1]=temp;
	}
}
void in(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
int main()
{
	int a[]={4,7,2,8,4,6,9,1};
	int b[]={4,7,2,8,4,6,9,1};
	int c[]={4,7,2,8,4,6,9,1};
	int d[]={4,7,2,8,4,6,9,1};
	sxdoicho(a,8);
	in(a,8);
	printf("\n");
	sxchon(b,8);
	in(b,8);
	printf("\n");
	sxnoibot(c,8);
	in(c,8);
	printf("\n");
	sxchen(d,8);
	in(d,8);
	
}
