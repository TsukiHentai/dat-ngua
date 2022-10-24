#include<iostream>
using namespace std;
class Vector {
	int x, y;
public:
	Vector()
	{
		x = 0;
		y = 0;
	}
	Vector(int x1, int y1)
	{
		x = x1; y = y1;
	}
	void Print() {
		cout << x << "," << y << endl;
	}
	Vector operator+(Vector param);
	void operator=(Vector param);
	void operator()();
	void operator++();
	Vector operator++(int);
	friend istream& operator>>(istream& is, Vector& param);
	friend ostream& operator<<(ostream& os, const Vector& param);
};
//---------------------------------//
Vector Vector::operator+(Vector param) {
	Vector temp;
	temp.x = x + param.x;
	temp.y = y + param.y;
	return(temp);
}
//---------------------------------//
void Vector::operator=(Vector param) {
	x = param.x;
	y = param.y;
	cout << "Toan tu gan" << endl;
} 
//---------------------------------//
void Vector::operator()() {
	cout << "( " << x << " & " << y << " )" << endl;
}
//---------------------------------//
void Vector::operator++() {
	++x;
	++y;	
}
//---------------------------------//
Vector Vector::operator++(int) {
	Vector temp = *this; // Giu lai gia tri cu
	++*this;
	return temp;
}
//---------------------------------//
istream& operator>>(istream& is, Vector& param) {
	is >> param.x >> param.y;
	return is;
}
//---------------------------------//
ostream& operator<<(ostream& os, const Vector& param) {
	os << param.x << " , " << param.y;
	return os;
}
//---------------------------------//
int main() {
	Vector v;
	cin >> v;
	cout << v;		
	return 0;
}
