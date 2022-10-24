#include <iostream>
using namespace std;

int main()	{
	char stringOne[255];
	char stringTwo[255];
	
	cout << "Nhap xau thu nhat: "; cin.get(stringOne,255);
	cout << "Xau thu nhat: " << stringOne << endl;
	
	cout << "Nhap xau thu hai: "; cin.getline(stringTwo,255);
	cout << "Xau thu hai: " << stringTwo << endl;
	
	cout << "\n\nNhap lai...\n";
	
	cout << "Nhap xau thu nhat: "; cin.get(stringOne,255);
	cout << "Xau thu nhat: " << stringOne << endl;
	
	cin.ignore(255,'\n');
	
	cout << "Nhap xau thu hai: "; cin.getline(stringTwo,255);
	cout << "Xau thu hai: " << stringTwo << endl;
	
	return 0;	
}

