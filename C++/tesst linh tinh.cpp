#include<iostream>
using namespace std;
class thisinh
{
	char hoten[50];
	float diemtb;
	float diemta;
	public:
		void nhap();
		void xuat();
		bool xettuyen();
		float getdiemtb()
		{
			return diemtb;
		}
		float getdiemta()
		{
			return diemta;
		}
};
void thisinh::nhap()
{
	cout<<"Nhap ten thi sinh: ";fflush(stdin);gets(hoten);
	cout<<"Nhap diem trung binh: ";cin>>diemtb;
	cout<<"Nhap diem tieng anh: ";cin>>diemta;
}
void thisinh::xuat()
{
	cout<<"Nhap ten thi sinh: "<<hoten<<endl;
	cout<<"Nhap diem trung binh: "<<diemtb<<endl;
	cout<<"Nhap diem tieng anh: "<<diemta<<endl;
}
bool thisinh::xettuyen()
{
	if(diemtb>=7&&diemta>=400)
	return true;
	else return false;
}
class thisinhut:public thisinh
{
	float diemut;
	public:
		bool trungtuyenut()
		{
			if((thisinh::getdiemtb()+diemut)>=7&&thisinh::getdiemta()>=400)
			return true;
			else return false;
		}
};
int main()
{
	thisinh a[255];
	thisinhut b[255];
	int demt=0;
	int demu=0;
	for(int i=0;i<n;i++)
	{
		int chon;
		cout<<"Nhap 1.Thi sinh thuong-2.Thi sinh uu tien: ";cin>>chon;
		if(chon==1)
		{
			a[demt].nhap();
			demt++;
		}
		else
		if(chon==2)
		{
			b[demu].nhap();
			demu++;
		}
	}
	cout<<"Danh sach thi sinh thuong va uu tien la: "<<endl;
	if(demt!=0)
	for(int i=0;i<demt;i++)
	{
		a[i].xuat();
	}
	if(demu!=0)
	{
		for()
	}
}
