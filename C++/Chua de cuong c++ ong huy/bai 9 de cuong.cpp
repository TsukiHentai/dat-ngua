#include<iostream>
using namespace std;
class nhanvien
{
	protected:
	char ten[50];
	int hsl;
	int pc;
	public:
		virtual void nhap();
		virtual void xuat();
		virtual int tinhluong()
		{
			return (hsl*1310+pc);
		}
};
void nhanvien::nhap()
{
	cout<<"Nhap ten nhan vien:";fflush(stdin);gets(ten);
	cout<<"Nhap he so luong: ";cin>>hsl;
	cout<<"Nhap phu cap: ";cin>>pc;
}
void nhanvien::xuat()
{
	cout<<"Nhap ten nhan vien:"<<ten<<endl;
	cout<<"Nhap he so luong: "<<hsl<<endl;
	cout<<"Nhap phu cap: "<<cin<<endl;
}
class canbo:public nhanvien
{
	int hscv;
	public:
		void nhapcb();
		void xuatcb();
		int tinhluongcb()
		{
			return (hsl+hscv)*1310+pc;
		}
};
void canbo::nhapcb()
{
	nhanvien::nhap();
	cout<<"Nhap hscv";cin>>hscv;
}
void canbo::xuatcb()
{
	nhanvien::xuat();
	cout<<"He so chuc vu: "<<hscv<<endl;
}
int main()
{
	nhanvien *a[255];
	int n;
	cout<<"Nhap vao so luong nhan vien: ";
	cin>>n;
	int chon;
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap 1.Nhan vien-2.Can bo:";
		cin>>chon;
		if(chon==1)
		a[i]=new nhanvien;
		else
		if(chon==2)
		a[i]=new canbo;
		else
		if(chon!=1&&chon!=2)
		{
			cout<<"Nhap sai";
			i--;
		}
	}
	for(int i=0;i<n;i++)
	{
		a[i]->nhap();
	}
//	for(int i=0;i<n;i++)
//	{
//		if(a[i])
//	}
}

