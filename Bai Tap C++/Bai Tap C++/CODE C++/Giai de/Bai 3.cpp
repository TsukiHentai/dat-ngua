#include<iostream>
using namespace std;
//--------------------------//
template <class T>
T max_element (T a[], int N, int M) {
	T max = a[N];
	for (int i = N+1; i < N+M; i++)
		if (max < a[i])
			max = a[i];
	return max;
}
//--------------------------//
class Sinhvien {
	char TenSV[30];
	float DiemTB;
public:
	void Nhap();
	void Xuat();
	float getDiem() {
		return DiemTB;
	}
};
void Sinhvien::Nhap() {
	cout << "Ten SV: "; cin >> TenSV;
	cout << "Diem TB: "; cin >> DiemTB; 
}
void Sinhvien::Xuat() {
	cout << "Ten SV: " << TenSV << endl;
	cout << "Diem TB: " << DiemTB << endl;
}
//--------------------------//
int main() {
	int n = 0, m;
	
	int a_int[] = {34, -56, 21, 44, 12};
	m = sizeof(a_int)/sizeof(a_int[0]);
	cout << max_element<int>(a_int, n, m);
	
	cout << "\n";
	
	float a_float[] = {3.4, -5.6, 2.1, 4.4, 1.2};
	m = sizeof(a_float)/sizeof(a_float[0]);
	cout << max_element<float>(a_float, n, m);
	
	cout << endl;
	for (int i = n; i < m; i++)
		cout << a_float[i] << "  ";
	
	
	/*
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
	
	max_element<Sinhvien>(SV, n, m);
	
	cout << "\nDANH SACH SINH VIEN SAU KHI SAP\n";
	for (int i = 0; i < SoSV; i ++) {
		cout << "\nSinh vien thu " << i+1 << ":\n";
		SV[i].Xuat(); 
	}
	*/
	
	return 0;	
}
