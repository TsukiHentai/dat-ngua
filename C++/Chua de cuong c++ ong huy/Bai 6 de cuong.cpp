#include<iostream>
using namespace std;
class matran
{
	int a[2][2];
	public:
		matran()
		{
		}
		void nhap();
		void xuat();
		matran operator+(matran b);
		int* operator[](int index)
		{
			return this->a[index];
		}
};
void matran::nhap()
{
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin>>a[i][j];
		}
	}
}
void matran::xuat()
{
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
matran matran::operator+(matran b)
{
	matran d;
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			d.a[i][j]=a[i][j]+b.a[i][j];
		}
	}
}
int main()
{
	matran c[255];
	matran b;
	int n;
	cout<<"Nhap so luong ma tran: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		c[i].nhap();
	}
	cout<<"Ma tran sau :"<<endl;
	for(int i=0;i<n;i++)
	{
		c[i].xuat();
	}
	for(int i=0;i<n;i++)
	{
		b=b+c[i];
	}
	cout<<"Tong cac ma tran: "<<endl;
	b.xuat();
}
