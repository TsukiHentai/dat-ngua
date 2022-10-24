#include<iostream>
#include<stdlib.h>
using namespace std;
class hanghoa
{
	int mathang;
	char tenhang[30];
	float gianhap;
	float giaban;
	int soluong;
	public:
		hanghoa()
		{
		}
		~hanghoa()
		{
		}
		void nhap();
		void xuat();
		float loinhuan()
		{
			return (giaban-gianhap)*soluong;
		}
		int getsoluong()
		{
			return soluong;
		}
};
void hanghoa::nhap()
{
	cout<<"Mat hang: ";cin>>mathang;
	cout<<"Ten hang: ";fflush(stdin);cin.get(tenhang,30);
	cout<<"Gia nhap: ";cin>>gianhap;
	cout<<"Gia ban: ";cin>>giaban;
	cout<<"So luong: ";cin>>soluong;
}
void hanghoa::xuat()
{
	cout<<"Mat hang: "<<mathang<<endl;
	cout<<"Ten hang: "<<tenhang<<endl;
	cout<<"Gia nhap: "<<gianhap<<endl;
	cout<<"Gia ban: "<<giaban<<endl;
	cout<<"So luong: "<<soluong<<endl;
}

int main()
{
	hanghoa a[255];
	int n;
	cout<<"Nhap so phan tu: "<<endl; cin>>n;
	cout<<"Nhap vao ds cac mat hang: "<<endl;
	for(int i=0;i<n;i++)
	{
		a[i].nhap();
	}
	cout<<"Danh sach mat hang vua nhap: "<<endl;
	for(int i=0;i<n;i++)
	{
		a[i].xuat();
		cout<<"Loi nhuan: "<<a[i].loinhuan()<<endl;
	}
	float sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+a[i].loinhuan();
	}
	cout<<"Loi nhuan la: "<<sum<<endl;
	int i,j;
	for(int i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j].loinhuan()<a[j+1].loinhuan())
			{
				hanghoa temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	cout<<"Danh sach sau khi sap xep: "<<endl;
	for(int i=0;i<n;i++)
	{
		a[i].xuat();
		cout<<"Loi nhuan: "<<a[i].loinhuan()<<endl;
	}
	cout<<"Danh sach 10%: "<<endl;
	for(int i=0;i<n;i++)
	{
		if(a[i].getsoluong()>5)
		{
			a[i].xuat();
			cout<<"Loi nhuan: "<<a[i].loinhuan()<<endl;
		}
	}
	return 0;
}

