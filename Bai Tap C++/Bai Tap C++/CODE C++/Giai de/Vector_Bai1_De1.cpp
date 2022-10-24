#include<iostream>
using namespace std;
//-------------------------------//
class Vector {
	int n;
	float data[255];
public:
	Vector();
	Vector(int);
	~Vector();
	void Nhap();
	void Xuat();
	Vector operator+(Vector);
	Vector operator*(Vector);
	float operator[](int);	
};
//-------------------------------//
int main() {
	int n;
	cout << "Nhap vao so phan tu: ";
	cin >> n;
	
	Vector v1(n);
	v1.Nhap(); 
	cout << "Vector 1: ";
	v1.Xuat();  
	
	cout << "\n*------------------------*\n";
	
	Vector v2(n);
	v2.Nhap(); 
	cout << "Vector 2: ";
	v2.Xuat();
	
	cout << "\n*------------------------*\n";
	
	Vector v3;
	v3 = v1 + v2;
	v3.Xuat();
	
	cout << "\n*------------------------*\n";
	
	cout << v3[1];
	
	return 0;
}
//-------------------------------//
Vector::Vector() {
	n = 0;
}
//-------------------------------//
Vector::Vector(int num) {
	n = num;
}
//-------------------------------//
Vector::~Vector() {
	n = -1;
}
//-------------------------------//
void Vector::Nhap() {
	for(int i = 0; i < n; i++) {
		cout << "V[" << i << "]=";
		cin >> data[i];	
	}		
}
//-------------------------------//
void Vector::Xuat() {
	for (int i = 0; i < n; i++) 
		cout << data[i] << "  ";
}
//-------------------------------//
Vector Vector::operator+(Vector param) {
	Vector temp(n);
	for (int i = 0; i < n; i++)
		temp.data[i] = data[i] + param.data[i];
	return temp;
}
//-------------------------------//
Vector Vector::operator*(Vector param) {
	Vector temp(n);
	for (int i = 0; i < n; i++)
		temp.data[i] = data[i] * param.data[i];
	return temp;
}
//-------------------------------//
float Vector::operator[](int index) {
	if (index >= n) {
		cout << "Khong co phan tu nay";
		exit (0);
	}
	else
		return (data[index]);
}
//-------------------------------//
