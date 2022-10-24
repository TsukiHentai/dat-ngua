#include<stdio.h>
int main()
{
	int n,i;
	int a[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=1;i<n;i++)
	{
		if(min>a[i])	
		{
			int doi=min;
			min=a[i];
			a[i]=doi;
		}
	}
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
}
