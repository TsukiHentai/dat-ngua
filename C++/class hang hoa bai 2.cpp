#include<iostream>
#include<stdlib.h>
using namespace std;
class hanghoa
{
	int mahh;
	string tenhh;
	float gianhap;
	float giaban;
	int soluong;
	public:
		hanghoa()
		{
			mahh=0;
			tenhh="";
			gianhap=0;
			giaban=0;
			soluong=0;
		}
		~hanghoa()
		{
			
		}
		void nhap();
		void xuat();
		float loinhuan();
		int sl();
};
void hanghoa::nhap()
{
	cout<<"Moi ban nhap vao hang hoa: "<<endl;
	cout<<"Ma: ";cin>>mahh;
	cout<<"Ten: ";
	fflush(stdin);
	getline(cin,tenhh);
	cout<<"Gia nhap: ";cin>>gianhap;
	cout<<"Gia ban: ";cin>>giaban;
	cout<<"So luong: ";cin>>soluong;
}
void hanghoa::xuat()
{
	cout<<"Ma: "<<mahh<<" - ";
	cout<<"Ten: "<<tenhh<<" - ";
	cout<<"Gia nhap: "<<gianhap<<" - ";
	cout<<"Gia ban: "<<giaban<<" - ";
	cout<<"So luong: "<<soluong;
	cout<<endl;
}
float hanghoa::loinhuan()
{
	return (giaban-gianhap)*soluong;
}
int hanghoa::sl()
{
	return soluong;
}
int main()
{
//	hanghoa a;
//	a.nhap();
//	a.xuat();
//	cout<<"Loi nhuan la: "<<a.loinhuan()<<endl;
	hanghoa b[100];
	int n;
	cout<<"Nhap vao so luong hang hoa muon them: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		b[i].nhap();
	}
	for(int i=0;i<n;i++)
	{
		b[i].xuat();
	}
	float tong=0;
	for(int i=0;i<n;i++)
	{
		tong=tong+b[i].loinhuan();
	}
	cout<<"Tong loi nhuan thu duoc la: "<<tong<<endl;
	cout<<"Cac hang hoa can tim la: "<<endl;
	for(int i=0;i<n;i++)
	{
		if(b[i].sl()>5)
		{
			b[i].xuat();
			cout<<endl;
		}
	}
}
