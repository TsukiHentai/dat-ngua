#include<iostream>
using namespace std;
class thisinh
{
	protected:
		char hoten[50];
		float dtb;
		float dta;
	public:
		virtual void nhap();
		virtual void xuat();
		bool xettuyen()
		{
			if(dtb>=7&&dta>=400) return true;
			else return false;
		}
};
void thisinh::nhap()
{
	cout<<"Nhap ten thi sinh: ";fflush(stdin);gets(hoten);
	cout<<"Nhap diem trung binh: ";cin>>dtb;
	cout<<"Nhap diem tieng anh: ";cin>>dta;
}
void thisinh::xuat()
{
	cout<<"Nhap ten thi sinh: "<<hoten<<endl;
	cout<<"Nhap diem trung binh: "<<dtb<<endl;
	cout<<"Nhap diem tieng anh: "<<dta<<endl;	
}
class thisinhut:public thisinh
{
	int dut;
	public:
		void nhap();
		void xuat();
		bool xettuyen()
		{
			if((dtb+dut)>=7&&dta>=400)
			return true;
			else return false;
		}
};
void thisinhut::nhap()
{
	thisinh::nhap();
	cout<<"Nhap diem uu tien: ";cin>>dut;
}
void thisinhut::xuat()
{
	thisinh::xuat();
	cout<<"Diem uu tien: "<<dut;
}
int main()
{
	thisinh*a[255];
	int n;
	cout<<"Nhap vao so luong thi sinh: ";
	cin>>n;
	int chon;
	for(int i=0;i<n;i++)
	{
		cout<<"Chon: 1.Thi sinh thuong-2.Thi sinh uu tien: ";
		cin>>chon;
		if(chon==1)
		{
			a[i]=new thisinh;
			a[i]->nhap();
		}
		if(chon==2)
		{
			a[i]=new thisinhut;
			a[i]->nhap();
		}
		if(chon!=1&&chon!=2)
		{
			cout<<"Nhap sai: ";
			break;
		}
	}
	for(int i=0;i<n;i++)
	{
		a[i]->xuat();
	}
	cout<<"Xet tuyen: "<<endl;
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]->xettuyen()==true)
		{
			dem++;
			a[i]->xuat();	
		}
		if(dem>=(n*(30/100)))
		break;
	}
}

