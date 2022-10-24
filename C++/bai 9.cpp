#include<iostream>
#include<stdlib.h>
using namespace std;
class nhanvien
{
	protected:
		char ten[50];
		float hsl;
		float phucap;
	public:
		nhanvien()
		{
		}
		~nhanvien()
		{
		}
		void nhap();
		void xuat();
		float tinhluong()
		{
			return hsl*1310+phucap;
		}
};
void nhanvien::nhap()
{
	cout<<"Nhap ten: ";fflush(stdin);gets(ten);
	cout<<"Nhap he so luong nhan vien: ";cin>>hsl;
	cout<<"Nhap vao phu cap nhan vien: ";cin>>phucap;
}
void nhanvien::xuat()
{
	cout<<"Ten: "<<ten<<endl;
	cout<<"He so luong nhan vien: "<<hsl<<endl;
	cout<<"Phu cap nhan vien: "<<phucap<<endl;
}
class canbo:public nhanvien
{
	float hscv;
	public:
		float luongcb()
		{
			return (hsl+hscv)*1310+phucap;
		}
		void nhapcb();
		void xuatcb();
};
void canbo::nhapcb()
{
	nhanvien::nhap();
	cout<<"Nhap he so luong can bo: ";cin>>hscv;
}
void canbo::xuatcb()
{
	nhanvien::xuat();
	cout<<"He so luong can bo: "<<hscv<<endl;
}
int main()
{
	nhanvien a[255];
	canbo b[255];
	int n;
	cout<<"Nhap vao so luong nhan vien va can bo: ";cin>>n;
	int chon,dem=0;
	int demnv=0;
	int demcb=0;
		cout<<"Nhap vao nhan vien hoac can bo: ";cin>>chon;
		if(chon==1)
		{
			a[demnv].nhap();
			demnv++;
		}
		if(chon==2)
		{
			b[demcb].nhapcb();
			demcb++;
		}
	cout<<"Danh sach nhan vien va can bo: "<<endl;
	if(demnv!=0)
	{
		for(int i=0;i<demnv;i++)
		{
			a[i].xuat();
		}
	}
	if(demcb!=0)
	{
		for(int i=0;i<demcb;i++)
		{
			b[i].xuatcb();
		}
	}
	return 0;
}
