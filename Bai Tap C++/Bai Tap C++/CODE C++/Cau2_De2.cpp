#include<iostream>
using namespace std;
//--------------------------//
class Thisinh {
protected:
	char Hoten[30];	// Ho ten thi sinh
	float Diem_TB;	// Diem trung binh
	float Diem_TA;	// Diem tieng Anh
public:
	void Nhap();
	void Xuat();
	bool Xettuyen() {
		return (Diem_TB>=7.0 && Diem_TA>=400);
	}
};
void Thisinh::Nhap() {
	cout << "Ho ten: ";
	cin.ignore(); cin.get(Hoten,30);
	cout << "Diem Trung binh: ";
	cin >> Diem_TB;
	cout << "Diem Tieng Anh: ";
	cin >> Diem_TA;
}
void Thisinh::Xuat() {
	cout << "Ho ten: " << Hoten << endl;
	cout << "Diem Trung binh: " << Diem_TB << endl;
	cout << "Diem Tieng Anh: " << Diem_TA << endl;
}
//--------------------------//
class Thisinh_UT: public Thisinh {
	float Diem_UT;
public:
	void Nhap();
	void Xuat();
	bool Xettuyen() {
		return ((Diem_TB+Diem_UT)>=7.0 && Diem_TA>=400);
	}
};
void Thisinh_UT::Nhap() {
	Thisinh::Nhap();
	cout << "Diem Uu tien: ";
	cin >> Diem_UT;
}
void Thisinh_UT::Xuat() {
	Thisinh::Xuat();
	cout << "Diem Uu tien: " << Diem_UT << endl; 
}
//--------------------------//
int main () {
	int SoTS;
	cout << "Nhap so Thi sinh: ";
	cin >> SoTS;
	
	Thisinh TS[100];
	cout << "\nNHAP DANH SACH THI SINH\n";
	for (int i = 0; i < SoTS; i++) {
		cout << "\nThi sinh thu " << i+1 << ":" << endl;
		TS[i].Nhap(); 
	}
	
	cout << "\nIN SACH THI SINH\n";
	for (int i = 0; i < SoTS; i++) {
		cout << "\nThi sinh thu " << i+1 << ":" << endl;
		TS[i].Xuat(); 
	}
	
	Thisinh_UT TSUT[100];
	cout << "\nNHAP DANH SACH THI SINH UU TIEN\n";
	for (int i = 0; i < SoTS; i++) {
		cout << "\nThi sinh thu " << i+1 << ":" << endl;
		TSUT[i].Nhap(); 
	}
	
	cout << "\nIN SACH THI SINH UU TIEN\n";
	for (int i = 0; i < SoTS; i++) {
		cout << "\nThi sinh thu " << i+1 << ":" << endl;
		TSUT[i].Xuat(); 
	}
	
	cout << "\nDANH SACH THI SINH TRUNG TUYEN\n";
	for (int i = 0; i < (30*SoTS)/100; i ++) {
		if (TS[i].Xettuyen())
			TS[i].Xuat();
		
		if (TSUT[i].Xettuyen())
			TSUT[i].Xuat();
	}
	
	return 0;
}
