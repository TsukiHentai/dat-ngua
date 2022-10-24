#include<iostream>
#include<string.h>
using namespace std;
class hocvien
{
	int ma;
	char ten[50];
	char nganhhoc[50];
	public:
		hocvien()
		{
		}
		hocvien(int ma,char ten[50],char nganhhoc[50])
		{
			ma=this->ma;
			ten=this->ten;
			nganhhoc=this->nganhhoc;
		}
		void nhap();
		void xuat();
		char* getten()
		{
			return ten;
		}
		char* getnganh()
		{
			return nganhhoc;
		}
};
void hocvien::nhap()
{
	cout<<"Nhap ma hoc vien: ";cin>>ma;
	cout<<"Nhap ten hoc vien: ";fflush(stdin);gets(ten);
	cout<<"Nhap nganh hoc: ";fflush(stdin);gets(nganhhoc);
}
void hocvien::xuat()
{
	cout<<"Nhap ma hoc vien: "<<ma<<endl;
	cout<<"Nhap ten hoc vien: "<<ten<<endl;
	cout<<"Nhap nganh hoc: "<<nganhhoc<<endl;
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
	for(int i=0;i<n;i++)
	{
		a[i].xuat();
	}
	char nhap[50];
	cout<<"Nhap ten nganh muon tim: ";
	fflush(stdin);
	gets(nhap);
	for(int i=0;i<n;i++)
	{
		if(strcmp(a[i].getnganh(),nhap)==0)
		{
			a[i].xuat();
		}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(strcmp(a[i].getten(),a[j].getten()>0)||(strcmp(a[i].getten(),a[j].getten()==0&&strcmp(a[i].getnganh(),a[j].getnganh())>0)))
			{
				hocvien temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"Danh sach sinh vien sau khi sap xep: "<<endl;
	for(int i=0;i<n;i++)
	{
		a[i].xuat();
	}
}
