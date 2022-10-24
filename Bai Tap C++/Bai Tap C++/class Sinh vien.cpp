#include<iostream>
#include<string.h>
using namespace std;
struct Sinhvien {
	char MaSV[10]; 		//SV001, SV002...
	char TenSV[30];		//Nguyen Dang Duy, ...
	int Namsinh;		//2005, 2006,...
	char Quequan[30];	//Hai Phong, Nam Dinh, ...
	float Diem;			//7.5, 8.3, ... 
};
class QLSV {
	int SoSV;
	Sinhvien *SV;
public:
	QLSV() {
		SoSV = 0;
		SV = NULL;
	}
	QLSV(int n);
	~QLSV();
	void NhapSV();
	void InSV();
	//...
};
//----------------------------------//
QLSV::QLSV(int n) {
	SoSV = n;
	SV = new Sinhvien[SoSV];
} 
//----------------------------------//
QLSV::~QLSV() {
	SoSV = 0;
	delete []SV;
}
//----------------------------------//
void QLSV::NhapSV() {
	for(int i=0;i<SoSV;i++) {
		cout << "*--------------------------*" << endl;
		cout << "Nhap vao thong tin sinh vien thu " << i+1 << endl;
		cin.ignore();
		cout << "Ma sinh vien: "; cin.get(SV[i].MaSV,10);
		cin.ignore();
		cout << "Ten sinh vien: "; cin.get(SV[i].TenSV,30);
		cout << "Nam sinh: "; cin >> SV[i].Namsinh;
		cin.ignore();
		cout << "Que quan: "; cin.get(SV[i].Quequan,30);
		cout << "Diem: "; cin >> SV[i].Diem;		 
	}
}
//----------------------------------//
void QLSV::InSV() {
	for(int i=0;i<SoSV;i++) {
		cout << "*--------------------------*" << endl;
		cout << "Thong tin sinh vien thu " << i+1 << endl;
		cout << "Ma sinh vien: "; cout << SV[i].MaSV << endl;
		cout << "Ten sinh vien: "; cout<< SV[i].TenSV << endl;
		cout << "Nam sinh: "; cout<< SV[i].Namsinh << endl;
		cout << "Que quan: "; cout<< SV[i].Quequan << endl;
		cout << "Diem: "; cout << SV[i].Diem << endl;		 
	}
}
//----------------------------------//
int main() {
	int n;
	cout << "Nhap vao so sinh vien: "; cin >> n;
	QLSV qlsv(n);
	qlsv.NhapSV();
	qlsv.InSV();
	return 0;
}
