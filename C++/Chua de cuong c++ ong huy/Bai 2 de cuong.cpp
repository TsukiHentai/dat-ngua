#include<iostream>//a
#include<stdlib.h>
using namespace std;
class hanghoa
{
	int ma;
	char ten[50];
	int gianhap;
	int giaban;
	int soluong;
	public:
		hanghoa()
		{
		}
		~hanghoa()
		{
		}
		void nhap();
		void xuat();
		int loinhuan()
		{
			return (giaban-gianhap)*soluong;
		}
		int getsoluong()
		{
			return soluong;
		}
};
void hanghoa::nhap()
{
	cout<<"Nhap ma: ";cin>>ma;
	cout<<"Nhap ten mat hang: ";fflush(stdin);gets(ten);
	cout<<"Gia nhap: ";cin>>gianhap;
	cout<<"Gia ban: ";cin>>giaban;
	cout<<"So luong: ";cin>>soluong;
}
void hanghoa::xuat()
{
	cout<<"Ma: "<<ma<<endl;
	cout<<"Ten mat hang: "<<ten<<endl;
	cout<<"Gia nhap: "<<gianhap<<endl;
	cout<<"Gia ban: "<<giaban<<endl;
	cout<<"So luong: "<<soluong<<endl;
	cout<<"Loi nhuan: "<<(giaban-gianhap)*soluong<<endl;
}
int main()//b
{
	hanghoa a[255];
	int n;
	cout<<"Nhap so luong hang hoa: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		a[i].nhap();
	}
	cout<<"Danh sach hang hoa sau khi nhap: "<<endl;
	for(int i=0;i<n;i++)
	{
		a[i].xuat();
	}
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+a[i].loinhuan();
	}
	cout<<"Tong loi nhuan la: "<<sum;
	cout<<"Danh sach";
	for(int i=0;i<n*0,1;i++)
	{
		if(a[i].getsoluong()>5)
		{
			a[i].xuat();
		}
	}
}

