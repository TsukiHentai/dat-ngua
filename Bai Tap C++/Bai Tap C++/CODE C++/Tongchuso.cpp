#include <iostream>
using namespace std;
//-----------------------------------------------//
int Tongchuso(int n) {
	int Tong = 0;
		while (n > 0) {
			int t = n % 10;
			Tong = Tong + t;
			n = n / 10;
		}	
	return Tong;
}
//-----------------------------------------------//
int main() {
	int n;
	cout << "Nhap vao mot so bat ky: ";
	cin >> n;
	cout << "Tong cac chu so cua n la: " << Tongchuso(n);
	return 0;	
}
//-----------------------------------------------//
