#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class thuoc
{
	char ten[50];
	int ma;
	int soluong;
	int giaban;
	public:
		void nhap();
		void xuat();
		char* getten()
		{
			return ten;
		}
		int getma()
		{
			return ma;
		}
};
void thuoc::nhap()
{
	cout<<"Nhap ten thuoc: ";fflush(stdin);gets(ten);
	cout<<"Nhap ma: ";cin>>ma;
	cout<<"Nhap so luong: ";cin>>soluong;
	cout<<"Nhap gia ban: ";cin>>giaban;
}
void thuoc::xuat()
{
	cout<<"Ten thuoc: "<<ten<<endl;
	cout<<"Ma: "<<ma<<endl;
	cout<<"So luong: "<<soluong<<endl;
	cout<<"Gia ban: "<<giaban<<endl;
}
int main()
{
	thuoc a[255];
	int n;
	cout<<"Nhap vao so luong thuoc: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		a[i].nhap();
	}
	cout<<"Danh sach thuoc: "<<endl;
	for(int i=0;i<n;i++)
	{
		a[i].xuat();
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(strcmp(a[i].getten(),a[j].getten())>0)
			{
				thuoc temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			else
			if(strcmp(a[i].getten(),a[i].getten())==0)
			{
				if(a[i].getma()>a[j].getma())
				{
					thuoc temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
		}
	}
	cout<<"Danh sach thuoc sau khi sap xep: "<<endl;
	for(int i=0;i<n;i++)
	{
		a[i].xuat();
	}
}
