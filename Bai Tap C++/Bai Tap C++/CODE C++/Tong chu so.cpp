#include <iostream>
using namespace std;
int main () {
	int n;
	int Tong_chu_so;
	cout << "Nhap vao mot so:";
	cin >> n;
	Tong_chu_so = 0;
	while(n!=0) {
		int So_tach = n % 10;
		Tong_chu_so = Tong_chu_so + So_tach;
		n = n / 10;
	}
	cout << "Tong chu so: " << Tong_chu_so;
return 0;
}
