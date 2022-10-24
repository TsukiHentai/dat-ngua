#include<iostream>
using namespace std;
class Data {
	int size;
	int *data;
public:
	Data();
	Data(int);
	~Data();
	void Nhap();
	void Xuat();
	int operator[](int);
};
//------------------------------//
Data::Data() {
	size = 0; data = NULL;	
}
//------------------------------//
Data::Data(int n) {
	size = n;
	data = new int[size];
}
//------------------------------//
Data::~Data() {
	size = 0;
	delete []data; 
}
//------------------------------//
void Data::Nhap() {
	for(int i=0;i<size;i++) {
		cout << "Data[" << i << "]=";
		cin >> *(data+i);
	}	
}
//------------------------------//
void Data::Xuat() {
	for(int i=0;i<size;i++) {
		cout << *(data+i) << " ";
	}	
}
//------------------------------//
int Data::operator[](int i) {
	return *(data+i);
}
//------------------------------//
int main() {
	int n;
	cout << "Nhap so phan tu: ";
	cin >> n;
	Data D(5);
	D.Nhap();
	cout << "\n";
	D.Xuat();
	cout << "\n";
	cout << D[3];	
	return 0;
}
