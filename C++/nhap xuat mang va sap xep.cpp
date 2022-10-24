#include<stdio.h>
#include<iostream>
using namespace std;
void nhap(int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
void xuat(int a[],int n)
{
	cout<<"Kich thuoc mang: "<<n<<endl;
	cout<<"Mang ban dau:"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"n= "<<a[i]<<" "<<endl;
	}
}
void selectionsort(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		int min=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		int temp= a[min];
		a[min]=a[i];
		a[i]=temp;
	}
}
void insertsort(int a[],int n)
{
	int t,j;
    for(int i=1;i<n;i++)
    {
       j=i-1;
       t=a[i];
       while(j >= 0 && t < a[j])
       {
           a[j+1]=a[j];
           j--;
       }
       a[j+1]=t;
    }
}
void bublesort(int a[],int n)
{
	for(int i=0;i<n-1;i++)
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
void hoanvi(int *a,int *b)
{
	int temp=*a;
		*a=*b;
		*b=temp;
}
int partition(int a[], int low, int high)
{
	int pivot = a[high];
	int i=(low-1);
	for(int j=low;j<=high-1;j++){
		if(a[j]<pivot){
			i++;
			
			hoanvi(&a[i], &a[j]);
		}
	}
	hoanvi(&a[i+1],&a[high]);
	return (i+1);
}
void quickSort(int a[],int low, int high)
{
	if(low<high){
		int p=partition(a,low,high);
		
		quickSort(a,low,p-1);
		quickSort(a,p+1,high);
	}
}
void sxle(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j]&&a[i]%2==1&&a[j]%2==1)
			{
				hoanvi(&a[i],&a[j]);
			}
		}
	}
}
int main()
{
	int m[100];
	int n=8;
	nhap(m,n);
	xuat(m,n);
//	selectionsort(m,n);
//	xuat(m,n);
//	insertsort(m,n);
//	xuat(m,n);
	bublesort(m,n);
	xuat(m,n);
	return 0;
}
