#include <iostream>
#include <string.h>

using namespace std;
// Khai bao cau truc Sinh vien
struct Sinhvien {
	char MaSV[10];		// SV001, SV002, SV003, SV004, SV005
	char TenSV[30];		// Ho va ten: Nguyen Van Dong, ...
	int Namsinh;		// Nam sinh: 2001, 2008
	bool Gioitinh;		// 1 - Nam; 0 - Nu
	char Quequan[30];	// Que quan: Ha Noi, Hai Phong, Nam Dinh, Nghe An, ...
	double Diem;		// Diem so
};
// Khai bao lop Quan ly Sinh vien
class QLSV {
	int SoSV;
	Sinhvien* SV;
public:
	QLSV();
	QLSV(int num);
	~QLSV();
	void NhapSV();		// Nhap danh sach Sinh vien
	void ThemSV();      // Them moi mot sinh vien
	void SuaSV();		// Sua thong tin Sinh vien
	void XoaSV();		// Xoa Sinh vien
	void Sapxep();		// Sap xep Sinh vien theo diem
	void Timkiem();		// Tim kiem Sinh vien theo ma
	int Search(char*);  // Tim theo ma tra ve vi tri
	void InSV();		// In thong tin Sinh vien
};
//---------------------------------------------------------------------------//
QLSV::QLSV() {
	SoSV = 0;
	SV = NULL;
}
//---------------------------------------------------------------------------//
QLSV::QLSV(int n) {
	SoSV = n;
	SV = new Sinhvien[SoSV];
}
//---------------------------------------------------------------------------//
QLSV::~QLSV() {
	SoSV = 0;
	delete []SV;
}
//---------------------------------------------------------------------------//
void QLSV::NhapSV() {
	for(int i=0;i<SoSV;i++) {
		cout << "*--------------------------------------------------* "<< "\n";
		cout << "SINH VIEN THU " << i+1 << "\n";
		cin.ignore();
		cout << "Ma sinh vien (SV001, SV002...): "; cin.get(SV[i].MaSV,10);
		cin.ignore();
		cout << "Ten sinh vien: "; cin.get(SV[i].TenSV,30);
		cout << "Nam sinh: "; cin >> SV[i].Namsinh;
		cout << "Gioi tinh (1 - Nam, 0 - Nu): "; cin >> SV[i].Gioitinh;
		cin.ignore();
		cout << "Que quan: "; cin.get (SV[i].Quequan,30);
		cout << "Diem: "; cin >> SV[i].Diem;
	}
}
//---------------------------------------------------------------------------//
void QLSV::InSV() {
	for(int i=0;i<SoSV;i++) {
        cout << "*--------------------------------------------------* "<< "\n";
		cout << "SINH VIEN THU " << i+1 << "\n";
		cout << "Ma sinh vien: "; cout << SV[i].MaSV << "\n";
		cout << "Ten sinh vien: "; cout << SV[i].TenSV << "\n";
		cout << "Nam sinh: "; cout << SV[i].Namsinh << "\n";
		cout << "Gioi tinh: ";
            if (SV[i].Gioitinh == 1)
                    cout << "Nam" << "\n";
            else
                    cout << "Nu" << "\n";
		cout << "Que quan: "; cout << SV[i].Quequan << "\n";
		cout << "Diem: "; cout << SV[i].Diem << "\n";
	}
}
//---------------------------------------------------------------------------//
void QLSV::Sapxep() {
	int i, j;
	Sinhvien temp;
        for (i = 0; i < SoSV-1; i++)
            for (j = 0; j < SoSV-i-1; j++)
                if (SV[j].Diem < SV[j+1].Diem) {
                    temp = SV[j];
                    SV[j] = SV[j+1];
                    SV[j+1] = temp;
			}
}
//---------------------------------------------------------------------------//
void QLSV::Timkiem() {
    char Str[10]; // Ma can tim
    cout << "Nhap vao Ma so sinh vien can tim: ";
    cin.ignore();
	cin.get(Str,10);

    int	i=0;
    while ((i<SoSV) && (strcmp(SV[i].MaSV,Str)!=0))
        i++;
    if(i==SoSV)
        cout << "Khong co Sinh vien nay trong danh sach";
    else {
        cout << "Tim thay sinh vien co ma: " << Str << " ten la: " << SV[i].TenSV;
    }
}
//---------------------------------------------------------------------------//
int QLSV::Search(char Str[10]){
    int	i=0;
    while ((i<SoSV) && (strcmp(SV[i].MaSV,Str)!=0))
        i++;
    if(i==SoSV)
        return -1;
    else
        return i;
}
//---------------------------------------------------------------------------//
void QLSV::SuaSV() {
    char Str[10]; // Ma can tim
    cout << "Nhap vao Ma so sinh vien can SUA: ";
    cin.ignore();
	cin.get(Str,10);
	int i = Search(Str);
    if (i!=-1) {
        cout << "\nSINH VIEN CO THONG TIN:\n";
        cout << "Ma sinh vien: "; cout << SV[i].MaSV << "\n";
		cout << "Ten sinh vien: "; cout << SV[i].TenSV << "\n";
		cout << "Nam sinh: "; cout << SV[i].Namsinh << "\n";
		cout << "Gioi tinh: ";
            if (SV[i].Gioitinh == 1)
                    cout << "Nam" << "\n";
            else
                    cout << "Nu" << "\n";
		cout << "Que quan: "; cout << SV[i].Quequan << "\n";
		cout << "Diem: "; cout << SV[i].Diem << "\n";

		char newMaSV[10];
        char newTenSV[30];
        int newNamsinh;
        bool newGioitinh;
        char newQuequan[30];
        double newDiem;

        cout << "NHAP THONG TIN SUA LAI CUA SINH VIEN " << i << "\n";
		cin.ignore();
		cout << "Ma sinh vien (SV001, SV002...): "; cin.get(newMaSV,10);
		cin.ignore();
		cout << "Ten sinh vien: "; cin.get(newTenSV,30);
		cout << "Nam sinh: "; cin >> newNamsinh;
		cout << "Gioi tinh (1 - Nam, 0 - Nu): "; cin >> newGioitinh;
		cin.ignore();
		cout << "Que quan: "; cin.get(newQuequan,30);
		cout << "Diem: "; cin >> newDiem;

		strcpy(SV[i].MaSV, newMaSV);
        strcpy(SV[i].TenSV, newTenSV);
        SV[i].Namsinh = newNamsinh;
        SV[i].Gioitinh = newGioitinh;
        strcpy(SV[i].Quequan, newQuequan);
        SV[i].Diem = newDiem;
    }
    else
        cout << "Khong co sinh vien nay trong danh sach";
}
//---------------------------------------------------------------------------//
void QLSV::XoaSV(){
    char Str[10]; // Ma can tim
    cout << "Nhap vao Ma so sinh vien can XOA: ";
    cin.ignore();
	cin.get(Str,10);
	int i = Search(Str);
    if (i!=-1) {
        cout << "\nSINH VIEN CO THONG TIN:\n";
        cout << "Ma sinh vien: "; cout << SV[i].MaSV << "\n";
		cout << "Ten sinh vien: "; cout << SV[i].TenSV << "\n";
		cout << "Nam sinh: "; cout << SV[i].Namsinh << "\n";
		cout << "Gioi tinh: ";
            if (SV[i].Gioitinh == 1)
                    cout << "Nam" << "\n";
            else
                    cout << "Nu" << "\n";
		cout << "Que quan: "; cout << SV[i].Quequan << "\n";
		cout << "Diem: "; cout << SV[i].Diem << "\n";
		
		int yesno;
		cout << "Ban co muon xoa Sinh vien nay hay khong? (1 - Yes, 0 - No)";
		cin >> yesno;
		if (yesno == 1) {
			for(int j = i; j < SoSV; j++) {
				strcpy(SV[j].MaSV, SV[j+1].MaSV);
        		strcpy(SV[j].TenSV, SV[j+1].TenSV);
        		SV[j].Namsinh = SV[j+1].Namsinh;
        		SV[j].Gioitinh = SV[j+1].Gioitinh;
        		strcpy(SV[j].Quequan, SV[j+1].Quequan);
        		SV[j].Diem = SV[j+1].Diem;								
			}
			SoSV = SoSV - 1;
		}		
	}
	else
		cout << "Khong co sinh vien nay trong danh sach";
	}
//---------------------------------------------------------------------------//
int main() {
	int num;
	cout << "Nhap vao so luong Sinh vien: ";
	cin >> num;

	QLSV qlsv(num);

	qlsv.NhapSV();
	cout << "\n######   DANH SACH SINH VIEN VUA NHAP   ######\n";
	qlsv.InSV();

	qlsv.Sapxep();

	cout << "\n$$$$$$   DANH SACH SINH VIEN SAP THEO DIEM   $$$$$$\n";
	qlsv.InSV();

    cout << "\n&&&&&&   TIM KIEM SINH VIEN THEO MA   &&&&&&\n";
	qlsv.Timkiem();

	cout << "\n%%%%%%   SUA THONG TIN SINH VIEN   %%%%%%\n";
	qlsv.SuaSV();
	
	cout << "\n%%%%%%   DANH SACH SAU KHI SUA   %%%%%%\n";
	qlsv.InSV();

	cout << "\n@@@@@@   XOA SINH VIEN   @@@@@@\n";
	qlsv.XoaSV();
	
	cout << "\n%%%%%%   DANH SACH SAU KHI XOA   %%%%%%\n";
	qlsv.InSV();
	
	return 0;
}
