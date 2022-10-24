#include<iostream>
using namespace std;
class hocvien
{
	char hoten[50];
	int msv;
	float diem;
	public:
		hocvien()
		{
			
		}
		virtual void nhap();
		virtual void xuat();
};
class canbo:public hocvien
{
	int uutien;
	float diemuutien;
	public:
		canbo()
		{
		}
		void nhapcb();
		void xuatcb();
};
void hocvien::nhap()
{
	cout<<"Nhap vao ten hoc vien: ";fflush(stdin);gets(hoten);
	cout<<"Nhap vao ma sinh vien: ";cin>>msv;
	cout<<"Nhap vao diem tong ket: ";cin>>diem;
}
void hocvien::xuat()
{
	cout<<"Ten: "<<hoten<<" MSV: "<<msv<<" diem: "<<diem<<endl;
}
void canbo::nhapcb()
{
	hocvien::nhap();
	cout<<"Nhap vao thuoc tinh uu tien(1.Lop truong- 2.Bithu) ";cin>>uutien;
	if(uutien==1) diemuutien=0.3;
	else
	if(uutien==2) diemuutien=0.2;
}
void canbo::xuatcb()
{
	hocvien::xuat();
	if(uutien==1)
	cout<<"Uu tien: Lop truong "<<" diem uu tien: "<<diemuutien<<endl;
	else if( uutien==2)
	cout<<"Uu tien: Bi thu "<<" diem uu tien: "<<diemuutien<<endl;
}
int main()
{
	hocvien a[255];
	canbo b[255];
	int n;
	cout<<"Nhap vao so luong hoc vien: ";
	cin>>n;
	int dem=0;
	for(int i=0;i<n;i++)
	{
		int chon;
		cout<<"1.Nhap sinh vien-2.Nhap can bo:"<<endl;
		cin>>chon;
		if(chon==1)
		{
			a[i].nhap();
			dem++;
		}
		else
		if(chon==2)
		{
			b[i-dem].nhapcb();
		}
	}
	cout<<"danh sach hoc vien va can bo la: "<<endl;
	for(int i=0;i<dem;i++)
	{
		a[i].xuat();
	}
	if(n-dem>0)
	for(int i=0;i<n-dem;i++)
	{
		b[i].xuatcb();
	}
	return 0;
}
