#include<iostream>
using namespace std;
class congnhan
{
	protected:
		char hoten[50];
		int hsl;
		int pc;
	public:
		virtual void nhap();
		virtual void xuat();
		int gethsl()
		{
			return hsl;
		}
		int tinhluong()
		{
			return hsl*1310+pc;
		}
		int tinhthuong()
		{
			return 3*(hsl*1310+pc);
		}
};
void congnhan::nhap()
{
	cout<<"Nhap ho ten cong nhan: ";fflush(stdin);gets(hoten);
	cout<<"Nhap he so luong: ";cin>>hsl;
	cout<<"Nhap phu cap: ";cin>>pc;
}
void congnhan::xuat()
{
	cout<<"Nhap ho ten cong nhan: "<<hoten<<endl;
	cout<<"Nhap he so luong: "<<hsl<<endl;
	cout<<"Nhap phu cap: "<<pc<<endl;
}
class canbo:public congnhan
{
	int pcdb;
	public:
		void nhap();
		void xuat();
		int tinhluong()
		{
			return hsl*1310+pc+pcdb;
		}
		int tinhthuong()
		{
			return 3.5*(hsl*1310+pc+pcdb);
		}
};
void canbo::nhap()
{
	congnhan::nhap();
	cout<<"Nhap phu cap dac biet: ";cin>>pcdb;
}
void canbo::xuat()
{
	congnhan::xuat();
	cout<<"Phu cap dac biet: "<<pcdb<<endl;
}
int main()
{
	congnhan*a[256];
	int n;
	cout<<"Nhap so luong cong nhan: ";
	cin>>n;
	int chon;
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap: 1.Cong nhan-2.Can bo: ";
		cin>>chon;
		if(chon==1)
		a[i]=new congnhan;
		if(chon==2)
		a[i]=new canbo;
		if(chon!=1&&chon!=2)
		{
			cout<<"Nhap sai!";
			break;
		}
		a[i]->nhap();
	}
	cout<<"Danh sach cong nhan: "<<endl;
	for(int i=0;i<n;i++)
	{
		a[i]->xuat();
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]->tinhluong()>a[j]->tinhluong())
			{
				congnhan*temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	int dem=0;
	cout<<"Danh sach cong nhan nhan ho tro: "<<endl;
	for(int i=0;i<n;i++)
	{
		if(a[i]->gethsl()<3&&dem<(n*0.2))
		{
			a[i]->xuat();
			dem++;
		}
	}
}
