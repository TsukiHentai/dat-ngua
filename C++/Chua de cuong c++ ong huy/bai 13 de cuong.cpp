#include<iostream>
using namespace std;
class benhvien
{
	protected:
		char ten[50];
		int ma;
		int namsinh;
		char chuandoan[100];
		char tenkhoa[50];
	public:
		virtual void nhap();
		virtual void xuat();
		virtual int getma()
		{
			return ma;
		}
};
void benhvien::nhap()
{
	cout<<"Nhap ten benh nhan: ";fflush(stdin);gets(ten);
	cout<<"Nhap ma benh nhan: ";cin>>ma;
	cout<<"Nhap nam sinh: ";cin>>namsinh;
	cout<<"Nhap chuan doan benh: ";fflush(stdin);gets(chuandoan);
	cout<<"Nhap ten khoa: ";fflush(stdin);gets(tenkhoa);
}
void benhvien::xuat()
{
	cout<<"Ten benh nhan: "<<ten<<endl;
	cout<<"Ma benh nhan: "<<ma<<endl;
	cout<<"Nam sinh: "<<namsinh<<endl;
	cout<<"Chuan doan benh: "<<chuandoan<<endl;
	cout<<"Ten khoa: "<<tenkhoa<<endl;
}
class noitru:public benhvien
{
	char maphong[50];
	public:
		void nhap();
		void xuat();
};
void noitru::nhap()
{
	benhvien::nhap();
	cout<<"Nhap ma phong va ma giuong: ";
	fflush(stdin);gets(maphong);
}
void noitru::xuat()
{
	benhvien::xuat();
	cout<<"Ma phong va ma giuong"<<maphong<<endl;
}
class ngoaitru:public benhvien
{
	char donthuoc[50];
	public:
		void nhap();
		void xuat();
};
void ngoaitru::nhap()
{
	benhvien::nhap();
	cout<<"Nhap don thuoc: ";
	fflush(stdin);gets(donthuoc);
}
void ngoaitru::xuat()
{
	benhvien::xuat();
	cout<<"Don thuoc: "<<donthuoc<<endl;
}
int main()
{
	benhvien* a[256];
	benhvien* temp;
	int n;
	cout<<"Nhap vao so luong benh nhan: ";
	cin>>n;
	int chon;
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap: 1.Benh nhan noi tru-2.Benh nhan ngoai tru:";
		cin>>chon;
		if(chon==1)
		a[i]=new noitru;
		if(chon==2)
		a[i]=new ngoaitru;
		if(chon!=1&&chon!=2)
		{
			cout<<"Nhap vao sai!";
			break;
		}
		a[i]->nhap();
	}
	cout<<"Danh sach benh nhan la: "<<endl;
	for(int i=0;i<n;i++)
	{
		a[i]->xuat();
	}
	cout<<"Danh sach benh nhan sau khi sap xep: "<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]->getma()>a[j]->getma())
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"Danh sach sau khi sap xep: "<<endl;
	for(int i=0;i<n;i++)
	{
		a[i]->xuat();
	}
}
