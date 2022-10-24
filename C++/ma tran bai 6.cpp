#include<iostream>
using namespace std;
class matran
{
	int n,m;
	int a[255][255];
	public:
		matran()
		{
		}
		matran(int n,int m)
		{
			m=this->m;
			n=this->n;
		}
		void nhap();
		void xuat();
		matran operator-(matran);
		friend matran operator+(matran b, matran c);
		matran operator()(matran)
		{
		}
};
void matran::nhap()
{
	cout<<"Nhap vao n hang m cot: ";cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
}
void matran::xuat()
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
}
matran operator+(matran b, matran c)
{
	matran d;
	d.n=b.n;
	d.m=b.n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			c.a[i][j]=b.a[i][j]+c.a[i][j];
		}
	}
	return c;
}
matran::operator-(matran other)
{
	
}
int main()
{
	matran a;
	a.nhap();
	a.xuat();
	matran b
	b.nhap();
	b.xuat();
	matran c;
	c=a+b;
	c().xuat();
	return 0;
}
