#include<iostream>
using namespace std;
class matran
{
	private:
		int n;int m;
		int a[255][255];
	public:
		matran()
		{
			
		}
		friend void sua(matran&a);
		friend istream&operator>>(istream&is,matran &a);
		friend ostream&operator<<(ostream&os,matran &a);
};
istream&operator>>(istream&is,matran &b)
{
	cout<<"Moi nhap n,m: ";
	cin>>b.n>>b.m;
	for(int i=0;i<b.n;i++)
	{
		for(int j=0;j<b.m;j++)
		{
			cout<<"Moi nhap phan tu: ";
			cin>>b.a[i][j];
		}
	}
}
ostream&operator<<(ostream&os,matran&b)
{
	cout<<"Ma tran co n="<<b.n<<", m="<<b.m<<endl;
	for(int i=0;i<b.n;i++)
	{
		for(int j=0;j<b.m;j++)
		{
			cout<<b.a[i][j]<<" ";
		}
		cout<<endl;
	}
}
int main()
{
	matran a;
	cin>>a;
	cout<<a;
}
