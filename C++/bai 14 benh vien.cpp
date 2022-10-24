#include<iostream>
#include<stdlib.h>
using namespace std;
class benhvien
{
	char hoten[50];
	char mhs[50];
	int namsinh;
	char chuandoanbenh[100];
	char tenkhoadieutri[100];
	public:
		void xuat();
		void nhap();
		char*getmhs();
};
void benhvien::nhap()
{
	cout<<"Nhap ten benh nhan: ";fflush(stdin);gets(hoten);
	cout<<"Nhap ma ho so: ";fflush(stdin);gets(mhs);
	cout<<"Nhap nam sinh: ";cin>>namsinh;
	cout<<"Nhap chuan doan benh: ";fflush(stdin);gets(chuandoanbenh);
	cout<<"Nhap ten khoa dieu tri: ";fflush(stdin);gets(tenkhoadieutri);
}
void benhvien::xuat()
{
	cout<<"Ten benh nhan: "<<hoten<<endl;
	cout<<"Ma ho so: "<<mhs<<endl;
	cout<<"Nam sinh: "<<namsinh<<endl;
	cout<<"Chuan doan benh: "<<chuandoanbenh<<endl;
	cout<<"Ten khoa dieu tri: "<<tenkhoadieutri<<endl;
}
class noitru:public benhvien
{
	char maphong[100];
	public:
		void nhapnt();
		void xuatnt();
};
void noitru::nhapnt()
{
	benhvien::nhap();
	cout<<"Nhap vao ma phong va ma giuong benh: ";fflush(stdin);gets(maphong);
}
void noitru::xuatnt()
{
	benhvien::xuat();
	cout<<"Ma phong va ma giuong benh: "<<maphong<<endl;
}
class ngoaitru:public benhvien
{
	char donthuoc[50];
	public:
		void nhapnt();
		void xuatnt();
};
void ngoaitru::nhapnt()
{
	benhvien::nhap();
	cout<<"Nhap vao don thuoc: ";fflush(stdin);gets(donthuoc);
}
void ngoaitru::xuatnt()
{
	benhvien::xuat();
	cout<<"Don thuoc: "<<donthuoc<<endl;
}
int main()
{
	benhvien a[255];
	noitru b[255];
	ngoaitru c[255];
	int n;
	cout<<"Nhap vao so benh nhan: ";cin>>n;
	int demnoitru=0;
	int demngoaitru=0;
	for(int i=0;i<n;i++)
	{
		int chon;
		cout<<"Nhap benh nhan:1.Noi tru-2.Ngoai tru: ";cin>>chon;
		if(chon==1)
		{
			a[i]=new noitru;
		}
		else
		if(chon==2)
		{
			a[i]=new ngoaitru;
		}
		a[i].nhap();
	}
	cout<<"Danh sach benh nhan noi tru va ngoai tru:"<<endl;
	for(int i=0;i<n;i++)
	{
		a[i].xuat();
	}
}
