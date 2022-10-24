#include<iostream>
#include<string.h>
using namespace std;
class sinhvien
{
	char ten[50];
	int ma;
	float diemtb;
	public:
		void nhap();
		void in();
		float getddiemtb()
		{
			return diemtb;
		}
		char* getten()
		{
			return ten;
		}
		int getma()
		{
			return ma;
		}
};
void sinhvien::nhap()
{
	cout<<"Nhap ten sinh vien: ";fflush(stdin);gets(ten);
	cout<<"Nhap ma: ";cin>>ma;
	cout<<"Diem trung binh: ";cin>>diemtb;
}
void sinhvien::in()
{
	cout<<"Nhap ten sinh vien: "<<ten<<endl;
	cout<<"Nhap ma: "<<ma<<endl;
	cout<<"Diem trung binh: "<<diemtb<<endl;
}
int main()
{
	sinhvien a[255];
	int n;
	cout<<"Nhap so luong sinh vien: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		a[i].nhap();
	}
	for(int i=0;i<n;i++)
	{
		a[i].in();
	}
	float max=0;int vt;
	for(int i=0;i<n;i++)
	{
		if(a[i].getddiemtb()>max)
		{
			max=a[i].getddiemtb();
			vt=i;
		}
	}
	cout<<"Sinh vien co diem trung binh cao nhat: "<<endl;
	a[vt].in();
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(strcmp(a[i].getten(),a[j].getten())>0||(strcmp(a[i].getten(),a[j].getten())==0&&a[i].getma()>a[j].getma()))
			{
				sinhvien temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}	
	}
	cout<<"Danh sach sinh vien sau khi sap xep: "<<endl;
	for(int i=0;i<n;i++)
	{
		a[i].in();
	}
}
