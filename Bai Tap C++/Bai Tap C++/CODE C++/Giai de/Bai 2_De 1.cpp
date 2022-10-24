#include<iostream>
using namespace std;
//----------------------------------//
//----------------------------------//
class Nhanvien {
protected:
	char Hoten[30];
	float Hesoluong;
	float Phucap;
public:
	void Nhap();
	void Xuat();
	float Luong() {
		return (Hesoluong*1310+Phucap);
	}
	float get_Hesoluong() {
		return Hesoluong;
	}
};
//----------------------------------//
void Nhanvien::Nhap() {
	cout << "Ho ten: "; cin.ignore(); cin.get(Hoten,30);
	cout << "He so luong: "; cin >> Hesoluong;
	cout << "Phu cap: "; cin >> Phucap;	
}
//----------------------------------//
void Nhanvien::Xuat() {
	cout << "Ho ten: " << Hoten << endl;
	cout << "He so luong: " << Hesoluong << endl;
	cout << "Phu cap: " << Phucap << endl;
}
//----------------------------------//
//----------------------------------//
class Canbo: public Nhanvien {
	float Hesochucvu;
public:
	void Nhap();
	void Xuat();
	float Luong() {
		return ((Hesoluong+Hesochucvu)*1310+Phucap);
	}
};
//----------------------------------//
void Canbo::Nhap() {
	Nhanvien::Nhap();
	cout << "He so chuc vu: "; cin >> Hesochucvu;
}
//----------------------------------//
void Canbo::Xuat() {
	Nhanvien::Xuat();
	cout << "He so chuc vu: "; cout << Hesochucvu << endl;
}
//----------------------------------//
//----------------------------------//
int main() {
	Nhanvien NV[100];

	int SoNV;
	cout << "Nhap vao so nhan vien: ";
	cin >> SoNV;
	
	cout << "\nNHAP DANH SACH NHAN VIEN" << endl;
	for(int i = 0; i < SoNV; i++) {
		cout << "*---------------------*"<< endl;
		cout << "*Nhan vien thu " << i+1 << ":" << endl;
		NV[i].Nhap();
	}
	
	cout << "\nDANH SACH NHAN VIEN VUA NHAP LA" << endl;
	for (int i = 0; i < SoNV; i++) {
		cout << "*---------------------*"<< endl;
		cout << "*Nhan vien thu " << i+1 << ":" << endl;
		NV[i].Xuat();
		cout << "Luong: "; cout << NV[i].Luong() << endl;
	}
	
	Canbo CB[100];
	
	cout << "\nNHAP DANH SACH CAN BO" << endl;
	for(int i = 0; i < SoNV; i++) {
		cout << "*---------------------*"<< endl;
		cout << "*Can bo thu " << i+1 << ":" << endl;
		CB[i].Nhap();
	}
	
	cout << "\nDANH SACH CAN BO VUA NHAP LA" << endl;
	for (int i = 0; i < SoNV; i++) {
		cout << "*---------------------*"<< endl;
		cout << "*Can bo thu " << i+1 << ":" << endl;
		CB[i].Xuat();
		cout << "Luong: "; cout << CB[i].Luong() << endl;
	}
	
	//cout << "\nSAP XEP DANH SACH NHAN VIEN TANG DAN THEO LUONG\n";
	int i, j;
   	for (i = 0; i < SoNV-1; i++)      
    	for (j = 0; j < SoNV-i-1; j++) 
        	if (NV[j].Luong() > NV[j+1].Luong()) {
        		Nhanvien temp = NV[j];
        		NV[j] = NV[j+1];
        		NV[j+1] = temp;
			}
			
	cout << "\n10% DANH SACH NHAN VIEN LUONG THAP NHAT VA CO HE SO < 3.0\n";
	int dem = 0; 
	for(int i = 0; i < SoNV; i++) {
		if (NV[i].get_Hesoluong() < 3.0) {
			dem++;
			cout << "\nNhan vien thu " << i+1 << ":" << endl;
			NV[i].Xuat();
			cout << "Luong: " << NV[i].Luong() << endl;
		}
		if(dem > SoNV/10)
			break;		
	}	
		
	return 0;	
}
//----------------------------------//
//----------------------------------//
