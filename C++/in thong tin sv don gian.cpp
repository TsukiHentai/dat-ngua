#include<iostream>
#include<stdlib.h>
using namespace std;
class sinhvien
{
	string msv;
	string ten;
	int tuoi;
	float diem;
	public:
		sinhvien()
		{
			ten=" ";
			msv=" ";
			tuoi=0;
			diem=-1;
		}
		~sinhvien()
		{
			
		}
		void nhap()
		{
			cout<<"Moi nhap vao ten sinh vien: ";
			fflush(stdin);
			getline(cin,ten);
			cout<<"Nhap msv: ";
			fflush(stdin);
			getline(cin,msv);
			cout<<"Nhap vao tuoi";
			cin>>tuoi;
			cout<<"Nhap vao diem";
			cin>>diem;
		}
		void xuat()
		{
			cout<<"Ten: "<<ten<<" msv: "<<msv<<" tuoi "<<tuoi<<" diem "<<diem<<endl;
		}
};
int main()
{
	sinhvien a,b;
	a.nhap();
	b.nhap();
	a.xuat();
	b.xuat();
	
}
