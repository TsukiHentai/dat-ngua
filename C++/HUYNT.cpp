#include <iostream>
#include <stdlib.h>
using namespace std;
// Nguyen The Huy 83428
class Thi_Sinh
{
	protected:
		char HoTen[30];
		float dtb;
		float anh;
	public:
		Thi_Sinh() {  }
		~Thi_Sinh() {  }
		void nhap()
		{
			cout <<"Nhap vao ho ten: ";
			fflush(stdin);
			cin >> HoTen;
			cout << "Nhap vao dtb: ";
			cin >> dtb;
			cout << "nhap vao diem anh: ";
			cin >> anh;
		}
		void xuat()
		{
			cout <<"HoTen: " << HoTen << endl;
			cout <<"dtb  : " <<  dtb  << endl;
			cout <<"anh  : " <<  anh  << endl;
		}
		bool trungtuyenbthg()
		{
			if( dtb >= 7.0 && anh >= 400 )
			{
				return true;
			}
			else
			{
				return false;
			}
		}
};
class TS_uutien:public Thi_Sinh
{
		float uutien;
	public:
		void nhap()
		{
			Thi_Sinh::nhap();
			cout << "Nhap vao he so uu tien: ";
			cin >> uutien;
		}
		void xuat()
		{
			Thi_Sinh::xuat();
			cout << "he so uu tien: " << uutien << endl;
		}
		bool trungtuyenuutien()
		{
			if (( (dtb + uutien) >= 7.0) && anh >= 400)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
};

int main()
{
	int n;
	int i;
	cout << "Nhap vao so thi sinh: ";
	cin >> n;
	Thi_Sinh TS[100];
	TS_uutien UT[100];
cout << "---Trung tuyen binh thuong---\n";
	for (i=0;i<n;i++)
	{
		cout << "Thi sinh thu: " << i+1 << endl;
		TS[i].nhap();
	}
	for (i=0;i<n;i++)
	{
		cout << "Thi sinh thu: " << i+1 << endl;
		TS[i].xuat();
		cout << "Trung tuyen bthg: " << TS[i].trungtuyenbthg() << endl;
	}
cout << "---Trung tuyen uu tien---\n";
	for (i=0;i<n;i++)
	{
		cout << "Thi sinh thu: " << i+1 << endl;
		UT[i].nhap();
	}
	for (i=0;i<n;i++)
	{
		cout << "Thi sinh thu: " << i+1 << endl;
		UT[i].xuat();
		cout << "Trung tuyen uutien: " << UT[i].trungtuyenuutien() << endl;
	}
cout << "---Danh sach khong trung tuyen---\n";
	int dem = 0;
	for (i = 0; i<n;i++)
	{
		if (TS[i].trungtuyenbthg() == 0 && UT[i].trungtuyenuutien() == 0)
		{
			cout << "Thi sinh thu: " << i+1 << endl;
			TS[i].xuat();
			UT[i].xuat();
			dem = dem+1;
			cout <<"So thi sinh khong chung tuyen la: " << dem+1;
		}
		if (dem < n/30);
		{
			break;
		}
	}
}
