#include <iostream>
using namespace std;
int max(int, int); // Khai bao nguyen mau ham
int main() {
	int a, b;
    cout << "Nhap vao a: "; cin >> a;
    cout << "Nhap vao b: "; cin >> b;
    cout << "Max: " << max(a, b);
    return 0;
}
int max(int a, int b) {
	return (a>b)?a:b;
}

/*
int max(int a, int b) {
	if (a > b)
		return a;
	else
		return b;
	}
*/	
