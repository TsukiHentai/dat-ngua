#include <iostream>
using namespace std;
long Tong_uoc(int n);
int main() {
	int n;
	cout << "Nhap vao so N: ";
	cin >> n;
	cout << "\nTong cac uoc cua " << n << " la: " << Tong_uoc(n);
	return 0;
}
long Tong_uoc(int n) {
	int Sum = 0;
	for(int i=1;i<=n;i++)
		if (n%i==0) {
			cout << i << " + ";
			Sum += i;
		}			
	return Sum;
}

