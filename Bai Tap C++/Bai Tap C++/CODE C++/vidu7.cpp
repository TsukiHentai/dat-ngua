#include <iostream>

using namespace std;

int main()
{
	char ten[55];
	int tuoi;
	bool gt;
	float chieucao;
	cout << "Nhap ten:";
	//cin >> ten; // xau khong co dau cach
	cin.get(ten, 55, '\n');
	//cin.get(ten, 55);
	//cin.ignore(55,'\n');
	cout << "Nhap tuoi:";
	cin >> tuoi;
	cout << "Nhap gioi tinh (0:Nam, 1:Nu):";
	cin >> gt;
	cout << "Nhap chieu cao:";
	cin >> chieucao;
	cout << "Ten:" << ten << endl;
	cout << "Tuoi:" << tuoi << endl;
	cout << "Gioi tinh:" << gt << endl;
	cout << "Chieu cao:";
	cout.precision(2); // chi tinh 2 so
	cout.width(5);
	cout << chieucao << endl;
	return 0;
}

