#include<iostream>
using namespace std;
class matrix
{
	int **data;
	public:
		matrix()
		{
			data=new int*[2];
			for(int i=0;i<2;i++)
			{
				data[i]=new int[2];
			}
		}
		~matrix()
		{
			for(int i=0;i<2;i++)
			{
				delete data[i];
			}
			delete data;
		}
		void nhap();
		void xuat();
		matrix operator+(matrix&m)
		{
			matrix t;
			for(int i=0;i<2;i++)
			{
				for(int j=0;j<2;j++)
				{
					t.data[i][j]=data[i][j]+m.data[i][j];
				}
			}
			return t;
		}
		int det()
		{
			return (data[0][0]*data[1][1]-data[1][0]*data[0][1]);
		}
		int operator()(int i,int j)
		{
			if(i>=2||j>=2)
			{
				cout<<"Khong co gia tri nay!";
				exit(0);
			}
			else
				return data[i][j];
		}
		void operator++()
		{
			matrix t;
			for(int i=0;i<2;i++)
			{
				for(int j=0;j<2;j++)
				{
					t.data[i][j]=data[i][j]+1;
				}
			}
		}
		void operator++(int)
		{
			matrix t;
			for(int i=0;i<2;i++)
			{
				for(int j=0;j<2;j++)
				{
					t.data[i][j]=data[i][j]++;
				}
			}
		}
};
void matrix::nhap()
{
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			cout<<"Nhap vao phan tu a["<<i<<"]["<<j<<"]=";
			cin>>data[i][j];
		}
	}
}
void matrix::xuat()
{
	for(int i=0;i<2;i++)
	{
		for(int j=0;i<2;j++)
		{
			cout<<data[i][j]<<" ";
		}
	}
}
int main()
{
	matrix m1,m2;
	m1.nhap();
	m2.nhap();
	cout<<"m3=m1+m2:\n";
	matrix m3=m1+m2;
	m3.xuat();
	cout<<m1(1,0);
	cout<<endl;
	m3++;
	m3.xuat();
	return 0;
}
