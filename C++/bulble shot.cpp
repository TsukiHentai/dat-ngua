#include<iostream>
using namespace std;
int main()
{
	int arr[]={3,7,45,34,78,1,6};
	for(int i=0;i<6;i++)
	{
		for(int j=i+1;j<6;j++)
		{
			if(arr[i]>arr[j])
			{
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(int k=0;k<6;k++)
	{
		cout<<arr[k]<<" , ";
	}
}

