#include<iostream>
using namespace std;
class thisinh
{
	protected:
		char ten[50];
		float diemtb;
		int diemta;
	public:
		virtual void nhap();
		virtual void xuat();
		virtual bool xettuyen()
		{
			if(diemtb>=7&&diemta>=400)	
				return true;
			else
				return false;
		}
};
void thisinh::nhap()
{
	cout<<"Nhap ten thi sinh: ";fflush(stdin);gets(ten);
	cout<<"Nhap diem trung binh: ";cin>>diemtb;
	cout<<"Nhap diem tieng anh: ";cin>>diemta;
}
void thisinh::xuat()
{
	cout<<"Nhap ten thi sinh: "<<ten<<endl;
	cout<<"Nhap diem trung binh: "<<diemtb<<endl;
	cout<<"Nhap diem tieng anh: "<<diemta<<endl;
}
class thisinhut:public thisinh
{
	int diemut;
	public:
		void nhap();
		void xuat();
		bool xettuyen()
		{
			if((diemtb+diemut)>=7&&diemta>=400)
			return true;
			else return false;
		}
};
void thisinhut::nhap()
{
	thisinh::nhap();
	cout<<"Nhap diem uu tien: ";cin>>diemut;
}
void thisinhut::xuat()
{
	thisinh::xuat();
	cout<<"Diem uu tien: "<<diemut<<endl;
}
int main()
{
	thisinh*a[256];
	int n;
	cout<<"Nhap vao so luong thi sinh: ";
	cin>>n;
	int chon;
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap 1.Thi sinh thuong-2.Thi sinh huu tien: ";
		cin>>chon;
		if(chon==1)
		a[i]=new thisinh;
		if(chon==2)
		a[i]=new thisinhut;
		if(chon!=1&&chon!=2)
		{
			cout<<"Nhap sai!";
			break;
		}
		a[i]->nhap();
	}
	cout<<"Danh sach thi sinh: "<<endl;
	for(int i=0;i<n;i++)
	{
		a[i]->xuat();
	}
	int dem=0;
	cout<<"Danh sach";
	for(int i=0;i<n;i++)
	{
		if(a[i]->xettuyen()==true&&dem<(n*0,3))
		{
			a[i]->xuat();
			dem++;
		}
	}
}
