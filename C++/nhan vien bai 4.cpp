#include<iostream>
#include<stdlib.h>
using namespace std;
class nhanvien
{
	char ten[50];
	int namsinh;
	float luong;
	int snc;
	public:
		nhanvien()
		{
		}
		~nhanvien()
		{
		}
		void nhap();
		void in();
		float tinhluong();
		friend class bangluong;
};
void nhanvien::nhap()
{
	cout<<"Nhap ten: ";fflush(stdin);cin.get(ten,50);
	cout<<"Nhap nam sinh: ";cin>>namsinh;
	cout<<"Nhap luong: ";cin>>luong;
	cout<<"Nhap so ngay cong: ";cin>>snc;
}
void nhanvien::in()
{
	cout<<"Ten: "<<ten<<endl;
	cout<<"Nam sinh: "<<namsinh<<endl;
	cout<<"Luong: "<<luong<<endl;
	cout<<"So ngay cong: "<<snc<<endl;
}
float nhanvien::tinhluong()
{
	return (snc*luong);
}
class bangluong
{
	int sonv;
	nhanvien ds[255];
	public:
		bangluong()
		{
			sonv=0;
		}
		bangluong(int x)
		{
			sonv=x;
		}
		~bangluong()
		{
			sonv=-1;
		}
		void nhap();
		void xuat();
		void thongke();
};
void bangluong::nhap()
{
	for(int i=0;i<sonv;i++)
	{
		ds[i].nhap();
	}
}
void bangluong::xuat()
{
	for(int i=0;i<sonv;i++)
	{
		ds[i].in();
		cout<<"*/n--------------------n/*";
	}
}
void bangluong::thongke()
{
	for(int i=0;i<sonv;i++)
	{
		if(ds[i].tinhluong()<5000000)
		{
			ds[i].in();
		}
	}
}
int main()
{
	int n;
	cout<<"Nhap vao so nhan vien: "<<endl;
	cin>>n;
	bangluong a(n);
	cout<<"Nhap thong tin nhan vien: "<<endl;
	a.nhap();
	cout<<"Danh sach nhan vien: "<<endl;
	a.xuat();
	cout<<"Thong ke nhan vien co luong thang < 5trieu: "<<endl;
	a.thongke();
}
