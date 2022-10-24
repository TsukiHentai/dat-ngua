#include<iostream>
#include<cstring>
using namespace std;
class Sinhvien {
	char MaSV[10];
	char TenSV[30];
	float DiemTB;
public:
	Sinhvien();
	Sinhvien(char MaSV1[10], char TenSV1[30], int DiemTB1);
	friend istream& operator >> (istream& is, Sinhvien& SV);
	friend ostream& operator << (ostream& os, Sinhvien& SV);
	bool operator > (const Sinhvien& SV);
	friend void SapxepSV(Sinhvien SV[], int SoSV);
};
//--------------------------------------//
Sinhvien::Sinhvien() {
	strcpy(MaSV,"");
	strcpy(TenSV,"");
	DiemTB = 0.0;	
}
//--------------------------------------//
Sinhvien::Sinhvien(char MaSV1[10], char TenSV1[30], int DiemTB1) {
	strcpy(MaSV,MaSV1);
	strcpy(TenSV,TenSV1);
	DiemTB = DiemTB1;	
}
//--------------------------------------//
istream& operator >> (istream& is, Sinhvien& SV) {
	cout << "Ma SV: "; cin >> SV.MaSV;
	cout << "Ten SV: "; cin >> SV.TenSV;
	cout << "Diem TB: "; cin >> SV.DiemTB;
	return is;
}
//--------------------------------------//
ostream& operator << (ostream& os, Sinhvien& SV) {
	cout << "Ma SV: " << SV.MaSV << endl;
	cout << "Ten SV: " << SV.TenSV << endl;
	cout << "Diem TB: " << SV.DiemTB << endl;
	return os;
}
//--------------------------------------//
bool Sinhvien::operator > (const Sinhvien& SV) {
	if (DiemTB > SV.DiemTB)
		return true;
	return 
		false;
}
//--------------------------------------//
void SapxepSV(Sinhvien SV[], int SoSV) {
	Sinhvien tmp;
	for(int i = 0; i < SoSV-1; i++)       
        for(int j = 0; j < SoSV-i-1; j++)  
        	if (SV[j] > SV[j+1]) {
        		tmp = SV[j];
                SV[j] = SV[j+1];
                SV[j+1] = tmp;
			}
}
//--------------------------------------//

int main() {
	Sinhvien *SV;
	int SoSV;
	cout << "Nhap vao so sinh vien: ";
	cin >> SoSV;
	SV = new Sinhvien[SoSV];
	
	cout << "\nNHAP DANH SACH SINH VIEN\n";
	for(int i=0;i<SoSV;i++) {
		cout << "************************" << endl;
		cout << "Sinh vien " << i+1 << ":" << endl;
		cin >> SV[i];
	}
	cout << "\nDANH SACH SINH VIEN VUA NHAP\n";
	for(int i=0;i<SoSV;i++) {
		cout << "************************" << endl;
		cout << "Sinh vien " << i+1 << ":" << endl;
		cout << SV[i];
	}

	SapxepSV(SV, SoSV);
	
	cout << "\nDANH SACH SINH VIEN SAP LAI LA\n";
	for(int i=0;i<SoSV;i++) {
		cout << "************************" << endl;
		cout << "Sinh vien " << i+1 << ":" << endl;
		cout << SV[i];
	}
	return 0;
	
}
