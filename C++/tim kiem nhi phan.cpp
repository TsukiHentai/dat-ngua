
#include<stdio.h>
int nhiphan(int a[],int l,int r,int x)
{
	int m=(l+r)/2;
	if(l>m||r<m)
	return -1;
	if(a[m]<x)
	return(nhiphan(a,m+1,r,x));
	else
	if(a[m]==x)
	return m;
	else
	return(nhiphan(a,l,m-1,x));
}
int main()
{
	int a[]={3,6,7,12,18,24,89,100};
	int x;
	printf("Nhap vao khoa tim kiem: ");
	scanf("%d",&x);
	if(nhiphan(a,0,8,x)==-1)
	printf("Khong tim thay khoa ");
	else
	printf("%d",nhiphan(a,0,8,x));
}
