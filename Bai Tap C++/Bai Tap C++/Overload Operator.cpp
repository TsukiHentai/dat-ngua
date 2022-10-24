#include<iostream>
using namespace std;
class Vector {
	int x, y;
public:
	Vector() {
		x = 0; y = 0;
	}
	Vector (int x1, int y1) {
		x = x1; y = y1;
	}
	void Print() {
		cout << x << "," << y << endl;
	}
	Vector operator+(Vector);
	void operator=(Vector);
	void operator()();
	void operator++();
	Vector operator++(int);
	friend istream& operator>>(istream& is, Vector& param);
	friend ostream& operator<<(ostream& os, const Vector& param);
};
//----------------------------------------------//
Vector Vector::operator+(Vector param) {
	Vector temp;
	temp.x = x + param.x;
	temp.y = y + param.y;
	return (temp);
}
//----------------------------------------------//
void Vector::operator=(Vector param) {
	x = param.x;
	y = param.y;
}
//----------------------------------------------//
void Vector::operator()() {
	cout << "(" << x << "," << y << ")" << endl;
}  
//----------------------------------------------//
void Vector::operator++() {
	x++; y++; 
}
//----------------------------------------------//
Vector Vector::operator++(int) {
	Vector temp = *this;
	++*this;
	return temp;
}
//----------------------------------------------//
istream& operator>>(istream& is, Vector& param) {
    is >> param.x >> param.y;
    return is;
}
//----------------------------------------------//
ostream& operator<<(ostream& os, const Vector& param) {
    os << param.x << " & " << param.y << endl;
    return os;
}
//----------------------------------------------//
int main() {
	Vector v1(3,4), v2(5,6), v;
	v = v1 + v2; // v = v1.operator+(v2); 
	v.Print(); 
	Vector v3;
	v3 = v2; //v3.operator=(v2); 
	v3(); // v3.operator()(); 
	++v3; // v3.operator++();
	v3(); 
	v1++;  // v1.operator++(0); 
	cout << v1;
	Vector v5;
	cin >> v5;
	cout << v5;
	return 0;
}
