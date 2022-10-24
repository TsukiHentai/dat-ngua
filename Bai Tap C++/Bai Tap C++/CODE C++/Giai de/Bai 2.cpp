#include<iostream>
using namespace std;
//--------------------------//
template <class T>
void Sort (T a[], int n, int m) {
	for (int i = n; i < (n+m)-1; i++)
    	for (int j = n; j < (n+m)-i-1; j++) 
        	if (a[j].getDiem() < a[j+1].getDiem())
            	swap(a[j], a[j+1]);
}
//--------------------------//
class Sinhvien {
	char MaSV[10];
	char TenSV[30];
	float Diemtichluy;
public:
	void Nhap();
	void Xuat();
	float getDiem() {
		return Diemtichluy;
	}
};
void Sinhvien::Nhap() {
	cout << "Ma SV: "; cin >> MaSV;
	cout << "Ten SV: "; cin >> TenSV;
	cout << "Diem tich luy: "; cin >> Diemtichluy; 
}
void Sinhvien::Xuat() {
	cout << "Ma SV: " << MaSV << endl;
	cout << "Ten SV: " << TenSV << endl;
	cout << "Diem tich luy: " << Diemtichluy << endl;
}
//--------------------------//
int main() {
	int n = 0, m;
	/*
	int a_int[] = {34, -56, 21, 44, 12};
	m = sizeof(a_int)/sizeof(a_int[0]);
	Sort<int>(a_int, n, m);
	for(int i = n; i < m; i ++)
		cout << a_int[i] << "  ";
	
	cout << "\n";
	
	float a_float[] = {3.4, -5.6, 2.1, 4.4, 1.2};
	m = sizeof(a_float)/sizeof(a_float[0]);
	Sort<float>(a_float, n, m);
	for(int i = n; i < m; i ++)
		cout << a_float[i] << "  ";
	*/
	int SoSV;
	Sinhvien SV[50];
	
	cout << "\n\nNhap vao so sinh vien: ";
	cin >> SoSV;
	
	cout << "\nNHAP DANH SACH SINH VIEN\n";
	for (int i = 0; i < SoSV; i ++) {
		cout << "\nSinh vien thu " << i+1 << ":\n";
		SV[i].Nhap(); 
	}	
	
	cout << "\nNHAP DANH SACH SINH VIEN VUA NHAP\n";
	for (int i = 0; i < SoSV; i ++) {
		cout << "\nSinh vien thu " << i+1 << ":\n";
		SV[i].Xuat(); 
	}
	m = SoSV;
	
	Sort<Sinhvien>(SV, n, m);
	
	cout << "\nDANH SACH SINH VIEN SAU KHI SAP\n";
	for (int i = 0; i < SoSV; i ++) {
		cout << "\nSinh vien thu " << i+1 << ":\n";
		SV[i].Xuat(); 
	}
	
	return 0;	
}
