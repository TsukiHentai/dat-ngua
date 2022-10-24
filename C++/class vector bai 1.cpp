#include<iostream>
using namespace std;
class vector
{
	private:
		int spt;
		float x[255];
	public:
		vector()
		{
			spt=0;
		}
		vector(int);
		~vector()
		{
			spt=-1;
		}
		void nhap();
		void xuat();
		vector operator+(vector);
		vector operator*(vector);
		float operator[](int);
};
vector::vector(int data)
{
	spt=data;
}
void vector::nhap()
{
	for(int i=0;i<spt;i++)
	{
		cin>>x[i];
		
	}
}
void vector::xuat()
{
	for(int i=0;i<spt;i++)
	{
		cout<<x[i]<<"-";
	}
}
vector vector::operator+(vector d)
{
	vector c;
	for(int i=0;i<spt;i++)
	{
		c.x[i]=x[i]+d.x[i];
	}
	return c;
}
vector vector::operator*(vector d)
{
	vector c;
	for(int i=0;i<spt;i++)
	{
		c.x[i]=x[i]*d.x[i];
	}
	return c;
}
float vector::operator[](int a)
{
	if (a >= spt)
	{
		cout << "Khong co phan tu nay";
		exit(0);
	}
	else
	{
		return (x[a]);
	}
}
int main()
{
	vector a[255];
	int n;
	cout<<"Nhap vao so vector: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		a[i].nhap();
	}
	cout<<"Danh sach vector vua nhap la: "<<endl;
	for(int i=0;i<n;i++)
	{
		a[i].xuat();
		cout<<endl;
	}
	vector b[255];
	cout<<"Tong la: ";
	for(int i=0;i<n;i++)
	{
		b[i]=b[i]+a[i];
	}
//	b.xuat();
	
}
