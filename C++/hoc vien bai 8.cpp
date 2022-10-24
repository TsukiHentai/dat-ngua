#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class hocvien
{
	int mhv;
	char ten[50];
	char nganh[20];
	public:
		hocvien()
		{
		}
		hocvien(int mhv,char ten[50],char nganh[20])
		{
			mhv=this->mhv;
			ten=this->ten;
			nganh=this->nganh;
		}
		void nhap();
		void xuat();
		char *getten();
};
void hocvien::nhap()
{
	cout<<"Nhap vao ma hoc vien: ";cin>>mhv;
	cout<<"Nhap vao ten hoc vien: ";fflush(stdin);gets(ten);
	cout<<"Nhap vao nganh cua hoc vien: ";fflush(stdin);gets(nganh);
}
void hocvien::xuat()
{
	cout<<"Nhap vao ma hoc vien: "<<mhv<<endl;
	cout<<"Nhap vao ten hoc vien: "<<ten<<endl;
	cout<<"Nhap vao nganh cua hoc vien: "<<nganh<<endl;
}
char *hocvien::getten()
{
	return ten;
}
int main()
{
	hocvien a[255];
	int n;
	cout<<"Nhap vao so luong hoc vien: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		a[i].nhap();
	}
	cout<<"Danh sach hoc vien: "<<endl;
	for(int i=0;i<n;i++)
	{
		a[i].xuat();
	}
	char *tennganh=new char[50];
	cout<<"Nhap vao ten nganh muon tim hoc vien: ";
	fflush(stdin);gets(tennganh);
	for(int i=0;i<n;i++)
	{
		cout<<"Ha";
		if(strcmp(tennganh,a[i].getten())==0)
		{
			a[i].xuat();
		}
	}
	return 0;
}
