#include<iostream>
#include<cstring>
using namespace std;
class Sinhvien {
	char MaSV[10];
	char TenSV[30];
	float DiemTB;
public:
	Sinhvien();
	Sinhvien(char MaSV1[10], char TenSV1[30], float DiemTB1);
	friend istream& operator >> (istream& is, Sinhvien& SV);
	friend ostream& operator << (ostream& os, Sinhvien& SV);
	friend void SapxepSV(Sinhvien SV[], int SoSV);
};
//---------------------------//
Sinhvien::Sinhvien() {
	strcpy(MaSV,"");
	strcpy(TenSV,"");
	DiemTB = 0.0;	
}
//---------------------------//
Sinhvien::Sinhvien(char MaSV1[10], char TenSV1[30], float DiemTB1) {
	strcpy(MaSV,MaSV1);
	strcpy(TenSV,TenSV1);
	DiemTB = DiemTB1;	
}
//---------------------------//
istream& operator >> (istream& is, Sinhvien& SV) {
	cout << "Ma SV:";
	cin.ignore(); cin.get(SV.MaSV,10);	
	cout << "Ten SV:";
	cin.ignore(); cin.get(SV.TenSV,30);	
	cout << "Diem TB: "; cin >> SV.DiemTB;	
	return is;
}
//---------------------------//
ostream& operator << (ostream& os, Sinhvien& SV) {
	cout << "Ma SV:" << SV.MaSV << endl;	
	cout << "Ten SV:" << SV.TenSV << endl;	
	cout << "Diem TB: " << SV.DiemTB << endl;	
	return os;
}
//---------------------------//
void SapxepSV(Sinhvien SV[], int SoSV) {
	int i, j;  
    for (i = 0; i < SoSV-1; i++)      
    	for (j = 0; j < SoSV-i-1; j++)  
        	if (SV[j].DiemTB > SV[j+1].DiemTB) {
				Sinhvien tmp = SV[j];
				SV[j] = SV[j+1];
				SV[j+1] = tmp;
			}           	 
}
//---------------------------//
int main() {
	Sinhvien *SV;
	int SoSV;
	cout << "Nhap vao so sinh vien: ";
	cin >> SoSV;
	SV = new Sinhvien[SoSV];
	
	cout << "\nNHAP VAO DS SINH VIEN\n";
	for(int i=0;i<SoSV;i++) {
		cout << "***************\n";
		cout << "Sinh vien thu " << i+1 << ":\n";
		cin >> SV[i];
	}
	
	cout << "\nDS SINH VIEN VUA NHAP VAO LA\n";
	for(int i=0;i<SoSV;i++) {
		cout << "***************\n";
		cout << "Sinh vien thu " << i+1 << ":\n";
		cout << SV[i];
	}
	
	SapxepSV(SV,SoSV); // Goi thu tuc sap xep SV theo diem
	
	cout << "\nDS SINH VIEN SAP LAI LA\n";
	for(int i=0;i<SoSV;i++) {
		cout << "***************\n";
		cout << "Sinh vien thu " << i+1 << ":\n";
		cout << SV[i];
	}	
	
	return 0;
}
