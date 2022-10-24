#include<iostream>
using namespace std;
class mathang
{
	protected:
	char ten[50];
	int ma;
	int gianhap;
	int giaxuat;
	public:
		virtual void nhap();
		virtual void xuat();
};
void mathang::nhap()
{
	cout<<"Nhap ten: ";fflush(stdin);gets(ten);
	cout<<"Nhap ma: ";cin>>ma;
	cout<<"Nhap gia nhap: ";cin>>gianhap;
	cout<<"Nhap gia xuat: ";cin>>giaxuat;
}
void mathang::xuat()
{
	cout<<"Ten: "<<ten<<endl;
	cout<<"Ma: "<<ma<<endl;
	cout<<"Gia nhap: "<<gianhap<<endl;
	cout<<"Gia xuat: "<<giaxuat<<endl;
}
class giadung:public mathang
{
	public:
		void nhap();
		void xuat();
		float tinhthue()
		{
			return 0,1*gianhap;
		}
};
void giadung::nhap()
{
	mathang::nhap();
}
void giadung::xuat()
{
	mathang::xuat();
}
class oto:public mathang
{
	public:
		void nhap();
		void xuat();
		float tinhthue()
		{
			return 0,3*gianhap;
		}
};
void oto::nhap()
{
	mathang::nhap();
}
void oto::xuat()
{
	mathang::xuat();
}
class maymoc:public mathang
{
	public:
		void nhap();
		void xuat();
		float tinhthue()
		{
			return 0,12*gianhap;
		}		
};
void maymoc::nhap()
{
	mathang::nhap();
}
void maymoc::xuat()
{
	mathang::xuat();
}
int main()
{
	mathang*a[256];
	int n;
	cout<<"Nhap vao so mat hang: ";
	cin>>n;
	int chon;
	for(int i=0;i<n;i++)
	{
		cout<<"Chon: 1.Gia dung-2.Oto-3.May moc: ";
		cin>>chon;
		if(chon==1)
		{
			a[i]=new giadung;
			a[i]->nhap();
		}
		else
		if(chon==2)
		{
			a[i]=new oto;
			a[i]->nhap();
		}else
		if(chon==3)
		{
			a[i]=new maymoc;
			a[i]->nhap();
		}
		else
		{
			cout<<"Nhap sai!";
			break;
		}
	}
	for(int i=0;i<n;i++)
	{
		a[i]->xuat();
	}
}
