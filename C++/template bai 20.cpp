//bai 20
#include<iostream>
using namespace std;
template <typename T,typename U>
T max(T a[],U n,U m)
{
	T max=a[n];
	for(U i=n+1;i<m;i++)
	{
		if(max<a[i])
		max=a[i];
	}
	return max;
}
int main()
{
	int arr[] ={ 3,-6,8,-7,21,54,90};
	int n=0;
	int m=sizeof(arr)/sizeof(arr[0]);
	cout<<max<int,int>(arr,n,m);
	float arr1[]={3.6,-6.5,8.3,-7.7,21.2,54.3,90.5,-32.2};
	int u=0;
	int v=sizeof(arr)/sizeof(arr[0]);
	cout<<max<float,int>(arr1,u,v);
	
}
