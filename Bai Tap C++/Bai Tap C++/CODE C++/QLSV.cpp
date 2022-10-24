#include<iostream>
#include<string.h>
using namespace std;
//Cai dat cau truc Sinhvien
struct Sinhvien {
	char MaSV[10];		//SV001, SV002, ...
	char TenSV[30];		//Ngo Van Phong, Nguyen Thi Lien, ...
	int Ngaysinh;		//2001, 2006, ...
	bool Gioitinh;		//1 - Nam, 0 - Nu
	char Quequan[30];	//Hai Phong, Nam Dinh, ...
	float Diem;			// 7.5, 8.1, ...
};
class QLSV {
	int SoSV;
	Sinhvien* SV;
public:
	QLSV();
	QLSV(int);
	void NhapSV();
	void InSV();
	~QLSV(); 
};
int main() {
	int num;
	cout << "Nhap vao so luong Sinh vien: ";
	cin >> num;
	QLSV qlsv(num);
	qlsv.NhapSV();
	
	cout << "\n######   DANH SACH SINH VIEN VUA NHAP   ######\n";
	qlsv.InSV();	
	
	return 0;
}
QLSV::QLSV() {	
	SoSV = 0;
	SV = NULL;
}
QLSV::QLSV(int num) {
	SoSV = num;
	SV = new Sinhvien[num];
}
QLSV::~QLSV() {
	SoSV = -1;
	delete []SV;
}
void QLSV::NhapSV() {
	for(int i = 0; i < SoSV; i++) {
		cout << "*--------------------------------------------------* "<< "\n";
		cout << "SINH VIEN THU " << i+1 << "\n";
		
		cin.ignore();
		cout << "Ma sinh vien (SV001, SV002...): "; 
		cin.get(SV[i].MaSV,10);
		
		cin.ignore();
		cout << "Ten sinh vien: ";
		cin.get(SV[i].TenSV,30);
		
		cout << "Nam sinh: ";
		cin >> SV[i].Ngaysinh;
		
		cout << "Gioi tinh (1 - Nam, 0 - Nu): ";
		cin >> SV[i].Gioitinh;
		
		cin.ignore();
		cout << "Que quan: ";
		cin.get (SV[i].Quequan,30);
		
		cout << "Diem: ";
		cin >> SV[i].Diem;
	}
}
void QLSV::InSV() {
	for(int i=0;i<SoSV;i++) {
        cout << "*---------------------------------* "<< "\n";
		cout << "SINH VIEN THU " << i+1 << "\n";
		cout << "Ma sinh vien: "; cout << SV[i].MaSV << "\n";
		cout << "Ten sinh vien: "; cout << SV[i].TenSV << "\n";
		cout << "Nam sinh: "; cout << SV[i].Ngaysinh << "\n";
		cout << "Gioi tinh: ";
            if (SV[i].Gioitinh == 1)
                    cout << "Nam" << "\n";
            else
                    cout << "Nu" << "\n";
		cout << "Que quan: "; cout << SV[i].Quequan << "\n";
		cout << "Diem: "; cout << SV[i].Diem << "\n";
	}
}
