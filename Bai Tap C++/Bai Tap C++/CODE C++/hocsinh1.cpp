#include <iostream>
#include <cstring> 		// for strcpy()
#include <algorithm> 	// for sort()
using namespace std;
class Hocsinh {
	public:
		Hocsinh(char hoten1[]="", int tuoi1=0, float dtb1=0) {
			strcpy(hoten, hoten1);
			tuoi = tuoi1;
			dtb = dtb1;
		}
		friend ostream& operator << (ostream& os, Hocsinh& r);
		friend istream& operator >> (istream& is, Hocsinh& r);
		bool operator < (const Hocsinh& r);
		friend void sapxep(Hocsinh a[], int n);
	private:
		char hoten[55];
		int tuoi;
		float dtb;
};

ostream & operator << (ostream & os, Hocsinh & r) {
	os << r.hoten << "," << r.tuoi << ", " << r.dtb << endl;
	return os;
}

istream & operator >> (istream & is, Hocsinh & r) {
	cout << "Nhap ho va ten:";
	is >> r.hoten;
	cout << "Nhap tuoi:";
	is >> r.tuoi;
	cout << "Nhap diem trung binh:";
	is >> r.dtb;
	return is;
}
bool Hocsinh::operator < (const Hocsinh& r) {
	// so sanh theo diem trung binh
	if(dtb<r.dtb)
		return true;
	return false;
}
void sapxep(Hocsinh a[], int n) {
	sort(a, a+n); // goi tu thu vien algorithm
}
int main() {
	Hocsinh hs1[100];
	int n;
	cout << "Nhap so hoc sinh n = ";
	cin >> n;
	
	for(int i=0;i<n;i++) {
		cout << "Nhap hoc sinh thu " << i << endl;
		cin >> hs1[i];
	}
	for(int i=0;i<n;i++)
		cout << hs1[i];
		
	sapxep(hs1,n);
	
	for(int i=0;i<n;i++)
		cout << hs1[i];
		
	return 0;
}
