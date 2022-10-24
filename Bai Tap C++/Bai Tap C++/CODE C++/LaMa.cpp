#include <iostream>
#include <string.h>
using namespace std;
string Lama[10] = {"I", "II", "III", "IV", "V","VI",
"VII","VIII","IX"};
int main() {
	int n;
	cout << "Nhap vao so can doi: ";
	cin >> n;
	cout << "So La ma cua so vua nhap la: " << Lama[n-1];
return 0;	
}
