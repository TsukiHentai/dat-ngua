#include<iostream>
using namespace std;
class test
{
	int a[2][2];
	int data;
	public:
		test()
		{
			data=3;
		}
		void show()
		{
			cout<<data;
		}
		friend istream&operator>>(iostream&is,test&a)
		{
			cout<<"Nhap du lieu: ";is>>a.data;
		}
		friend ostream&operator<<(ostream&os,test&a)
		{
			cout<<"Xuat du lieu: ";os<<a.data;
		}
		int &operator[](int index)
		{
			return a[index][index];
		}
		test operator+(test b)
		{
			test c;
			for(int i=0;i<2;i++)
			{
				for(int j=0;j<2;j++)
				{
					c.a[i][j]=a[i][j]+b.a[i][j];
				}
			}
		}
		test operator-(test b)
		{
			test c;
			c.data=data-b.data;
			return c;
		}
		test operator*(test b)
		{
			test c;
			c.data=data*b.data;
			return c;
		}
		test operator/(test b)
		{
			test c;
			c.data=data/b.data;
			return c;
		}
};
int main()
{
	test a;
	test b;
	test c;
	test d;
	test e;
	c=a-b;
	c.show();
	cout<<endl;
	d=a*b;
	d.show();
	cout<<endl;
	e=a/b;
	e.show();
	return 0;
}
