#include<stdio.h>
void swap(int *a,int *b)
{
	int c=*a;
	*a=*b;
	b=&c;
}
void maxhead(int *a,int n)
{
	
}
void heapsort(int *a,int n)
{
	for(int i=n-1;i>0;i++)
	{
		maxheap(a,i);
		swap(a[0],a[i]);	
	}
}
