#include<iostream>
#include<stdlib.h>
using namespace std;
class thuoc
{
	char ten[50];
	int ma;
	int soluong;
	float giaban;
	public:
		thuoc()
		{
		}
		~thuoc()
		{
		}
		void nhap();
		void xuat();
		char getten();
		int getma();
};
void thuoc::nhap()
{
	cout<<"Nhap vao ten thuoc: ";fflush(stdin);cin.get(ten,50);
	cout<<"Nhap vao ma: ";cin>>ma;
	cout<<"Nhap vao so luong: ";cin>>soluong;
	cout<<"Nhap vao gia ban: ";cin>>giaban;
}
void thuoc::xuat()
{
	cout<<"ten thuoc: "<<ten<<endl;
	cout<<"ma: "<<ma<<endl;
	cout<<"so luong: "<<soluong<<endl;
	cout<<"gia ban: "<<giaban<<endl;
}
char thuoc::getten()
{
	return ten[50];
}
int thuoc::getma()
{
	return ma;
}
int main()
{
	thuoc a[255];
	int n;
	cout<<"Nhap vao so luong thuoc: ";cin>>n;
	for(int i=0;i<n;i++)
	{
		a[i].nhap();
	}
	cout<<"Danh sach thuoc: "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"Thuoc: "<<i+1<<endl;
		a[i].xuat();
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j].getten()>a[j+1].getten())
			{
				thuoc temp = a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
			else if(a[j].getten()==a[j+1].getten())
			{
				if(a[j].getma()>a[j+1].getma())
				{
					thuoc temp = a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
	}
	cout<<"Danh sach thuoc sau khi sap xep: "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"Thuoc: "<<i+1<<endl;
		a[i].xuat();
	}
	
}
