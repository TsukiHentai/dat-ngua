#include<iostream>
#include<string.h>
using namespace std;
class Nhanvien {
protected:
	char Hoten[30];
	float Hesoluong;
	float Phucap;
public:
	void Nhap();
	void Xuat();
	float Luong() {
		return (Hesoluong * 1310 + Phucap);
	}
};
void Nhanvien::Nhap() {
	cin.ignore();
	cout << "Ho ten: ";
	cin.get(Hoten,30);
	cout << "He so luong: ";
	cin >> Hesoluong;
	cout << "Phu cap: ";
	cin >> Phucap;   
}
void Nhanvien::Xuat() {
	cout << "Ho ten: ";
	cout << Hoten << endl;
	cout << "He so luong: ";
	cout << Hesoluong << endl;
	cout << "Phu cap: ";
	cout << Phucap << endl;  	
}
//----------------------------------//
class Canbo: public Nhanvien {
	float Hesochucvu;
public:
	void Nhap();
	void Xuat();
	float Luong() {
		return ((Hesoluong + Hesochucvu) * 1310 + Phucap);
	}	
};
void Canbo::Nhap() {
}

void Canbo::Xuat() {
}
//----------------------------------//
int main() {
	Nhanvien NV[100];
	int SoNV;
	cout << "Nhap vao so nhan vien: ";
	cin >> SoNV;
	for(int i = 0; i < SoNV; i++ ) {
		cout << "------------------------" << endl;
		cout << "Nhap vao nhan vien thu: " << i << endl;
		NV[i].Nhap(); 
	}
	cout << "*****DANH SACH NHAN VIEN VUA NHAP*****" << endl;
	for(int i = 0; i < SoNV; i++ ) {
		cout << "------------------------" << endl;
		cout << "Nhan vien thu: " << i << endl;
		NV[i].Xuat(); 
	}
	return 0;
}
