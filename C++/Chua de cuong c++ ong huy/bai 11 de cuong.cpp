#include<iostream>
using namespace std;
class thisinh
{
	protected:
		char ten[50];
		int sbd;
		float d1,d2,d3;
	public:
		thisinh()
		{
		}
		thisinh(char ten[50],int sbd,float d1,float d2,float d3)
		{
			this->ten[50]=ten[50];
			this->sbd=sbd;
			this->d1=d1;
			this->d2=d2;
			this->d3=d3;
		}
		friend istream& operator>>(istream & is,thisinh & a)
		{
			cout<<"Nhap ten thi sinh: ";cin>>a.ten;
			cout<<"Nhap so bao danh: ";cin>>a.sbd;
			cout<<"Nhap diem d1,d2,d3: ";cin>>a.d1>>a.d2>>a.d3;
		}		
		friend ostream& operator<<(ostream & os,thisinh & a)
		{
			cout<<"Ten thi sinh: "<<a.ten<<endl;
			cout<<"So bao danh: "<<a.sbd<<endl;
			cout<<"Diem d1,d2,d3: "<<a.d1<<a.d2<<a.d3<<endl;
		}
		virtual float tongdiem()
		{
			return d1+d2+d3;
		}
		float getdiemd1()
		{
			return d1;
		}
		float getdiemd2()
		{
			return d2;
		}
		float getdiemd3()
		{
			return d3;
		}
};
class thisinhut:public thisinh
{
	int diemut;
	public:
		friend istream& operator>>(istream & is,thisinhut & a)
		{
			cout<<"Nhap ten thi sinh: ";fflush(stdin);gets(a.ten);
			cout<<"Nhap so bao danh: ";cin>>a.sbd;
			cout<<"Nhap diem d1,d2,d3: ";cin>>a.d1>>a.d2>>a.d3;
			cout<<"Nhap diem uu tien: ";cin>>a.diemut;
		}
		friend ostream& operator<<(ostream & os,thisinhut & a)
		{
			cout<<"Ten thi sinh: "<<a.ten<<endl;
			cout<<"So bao danh: "<<a.sbd<<endl;
			cout<<"Diem d1,d2,d3: "<<a.d1<<a.d2<<a.d3<<endl;
			cout<<"Diem uu tien: "<<a.diemut;
		}
		float tongdiem()
		{
			return (d1+d2+d3+diemut);
		}
};
int main()
{
	thisinh *a[255];
	int n;
	cout<<"Nhap so luong thi sinh: ";
	cin>>n;
	int chon;
	for(int i=0;i<n;i++)
	{
		cout<<"Chon: 1.Thi sinh thuong-2.Thi sinh uu tien";
		cin>>chon;
		if(chon==1)
		{
			a[i]=new thisinh;
		}
		if(chon==2)
		{
			a[i]=new thisinhut;
		}

		if(chon!=1&&chon!=2)
		{
			cout<<"Nhap sai";
			i--;
		}
		cin>>a[i];
	}
	cout<<"Danh sach thi sinh: "<<endl;
	for(int i=0;i<n;i++)
	{
		a[i]->xuat();
	}
	cout<<"Danh sach thi sinh thi do va truot: "<<endl;
	for(int i=0;i<n;i++)
	{
		if(a[i]->getdiemd1()==0||a[i]->getdiemd2()==0||a[i]->getdiemd3()==0)
		{
			cout<<"Thi truot: ";a[i]->xuat();
		}
		if((a[i]->getdiemd1()>0&&a[i]->getdiemd2()>0&&a[i]->getdiemd3()>0)&&a[i]->tongdiem()>=15)
		{
			cout<<"Thi do: ";a[i]->xuat();
		}
	}
}
