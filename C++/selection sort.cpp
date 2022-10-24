#include<iostream>
using namespace std;
int main()
{
	int arr[]={3,7,45,34,78,1,6};
	for(int i=0;i<=6;i++)
	{
		int min=arr[i];
		for(int j=i+1;j<=6;j++)
		{
			if(arr[j]<min)
			{
				min=j;
			}
		}
		int temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
	}
	for(int k=0;k<=6;k++)
	{
		cout<<arr[k]<<" , ";
	}
}
// something wrong
60537496
#mBB632414853
