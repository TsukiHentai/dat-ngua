#include<iostream>
using namespace std;
class nhanvien
{
	private:
		char hoten[50];
		int namsinh;
		unsigned long long int luong;
		int songaycong;
	public:
		nhanvien()
		{
		}
		void nhapnv();
		void xuatnv();
		float tinhluong()
		{
			return songaycong*luong;
		}
};
void nhanvien::nhapnv()
{
	cout<<"Nhap ten: ";fflush(stdin);gets(hoten);
	cout<<"Nhap nam sinh: ";cin>>namsinh;
	cout<<"Nhap luong: ";cin>>luong;
	cout<<"nhap so ngay cong: ";cin>>songaycong;
}
void nhanvien::xuatnv()
{
	cout<<"Ten: "<<hoten<<endl;
	cout<<"Nam sinh: "<<namsinh<<endl;
	cout<<"Luong: "<<luong<<endl;
	cout<<"So ngay cong: "<<songaycong<<endl;
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
		void xuat();
		void thongke();
};
void bangluong::nhap()
{
	cout<<"Nhap so luong nhan vien: ";cin>>slnv;
	for(int i=0;i<slnv;i++)
	{
		a[i].nhapnv();
	}
}
void bangluong::xuat()
{
	for(int i=0;i<slnv;i++)
	{
		a[i].xuatnv();
	}
}
void bangluong::thongke()
{
	for(int i=0;i<slnv;i++)
	{
		if(a[i].tinhluong()<5000000)
			a[i].xuatnv();
	}
}
int main()
{
	bangluong a;
	a.nhap();
	cout<<"Danh sach nhan vien: "<<endl;
	a.xuat();
	cout<<"Danh sach nhan vien sau khi thong ke:"<<endl;
	a.thongke();
	return 0;
}
