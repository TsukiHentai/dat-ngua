#include<iostream>
using namespace std;
class ps
{
	private:
		int ts,ms;
		int UCLN(int a,int b);
	public:
		ps()//mac dinh
		{
			ts=0;
			ms=1;
		}
		ps(int ts,int ms) //co tham so
		{
			this->ts=ts;
			this->ms=ms;
			//This->thuoc tinh/phuong thuc
		}
		ps(const ps&b)//copy
		{
			this->ts=b.ts;
			this->ms=b.ms;
		}
		void nhap();
		void xuat();
		void rutgon();
};
void ps::rutgon()
{
	int uc=UCLN(ts,ms);
	ts/=uc;
	ms/=uc;
}
int ps::UCLN(int a,int b)
{
	return (a%b)?UCLN(b,a%b):b;
}
void ps::nhap()
{
	cin>>ts>>ms;
}
void ps::xuat()
{
	cout<<ts<<"/"<<ms;
}
class DS
{
	ps*m;
	int spt;
	public:
		void nhap();
		void xuat();
		void dsrutgon();     
};
void DS::nhap()
{
	cout<<"nhap cm so phan tu vao:";
	cin>>spt;
	m=new ps[spt];
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap so pt ["<<i<<"]: ";
		m[i].nhap();
	}
}
void DS::xuat()
{
	cout<<"Danh sach phan so:";
	
}
int main()
{
	ps a;
	a.nhap();
	ps b(a);
	b.xuat();
	b.rutgon();
	cout<<endl;
	b.xuat();
	return 0;
}
//cho 1 danh sach sinh vien co ten,msv,d1,d2,d3 bao gom phuong thuc
//cau tu 3 loai,huy tu,in nhap,tinh diem trung binh
//cho 1 class danh sach snh vien phuong thuc nhuw tren
//in nhap,sap xep tang dan theo diem trung binh, yeu cau dung class hoac ham ban
