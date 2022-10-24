#include<iostream>
using namespace std;
class nhanvien
{
	char ten[50];
	int namsinh;
	int luongcb;
	int snc;
	public:
		nhanvien()
		{
		}
		void nhap();
		void xuat();
		int tinhluong()
		{
			return snc*luongcb;
		}
};
void nhanvien::nhap()
{
	cout<<"Nhap ten nhan vien: ";fflush(stdin);gets(ten);
	cout<<"Nhap nam sinh: ";cin>>namsinh;
	cout<<"Luong co ban: ";cin>>luongcb;
	cout<<"Nhap so ngay cong: ";cin>>snc;
}
void nhanvien::xuat()
{
	cout<<"Ten nhan vien: "<<ten<<endl;
	cout<<"Nam sinh: "<<namsinh<<endl;
	cout<<"Luong co ban: "<<luongcb<<endl;
	cout<<"So ngay cong: "<<snc<<endl;
}
class bangluong
{
	int slnv;
	nhanvien a[255];
	public:
		bangluong()
		{
			slnv=0;
		}
		~bangluong()
		{
			slnv=-1;
		}
		void nhap();
		void xuatbl();
		void thongke();
};
void bangluong::nhap()
{
	cout<<"Nhap so luong nhan vien: ";
	cin>>slnv;
	for(int i=0;i<slnv;i++)
	{
		a[i].nhap();
	}
}
void bangluong::xuatbl()
{
	for(int i=0;i<slnv;i++)
	{
		a[i].xuat();
	}
}
void bangluong::thongke()
{
	for(int i=0;i<slnv;i++)
	{
		if(a[i].tinhluong()<5000000)
		{
			a[i].xuat();
		}
	}
}
int main()
{
	bangluong a;
	a.nhap();
	a.xuatbl();
	a.thongke();
}
