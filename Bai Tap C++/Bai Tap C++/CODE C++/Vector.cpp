#include<iostream>
using namespace std;
class Vector {
	int x,y;
public:
	Vector();
	Vector(int,int);
	void Print();
	Vector operator+(Vector);
	Vector operator-(Vector);
	Vector operator--(int);//Giam dang hau to
	Vector operator++();//Tang dang tien to
	friend ostream& operator<<(ostream&, const Vector&);
};
int main() {
	Vector v1(1,2),v2(3,4),v3;
	v3 = v1 + v2;
	cout << v3;
	cout << v1;
	
	return 0;
}
Vector::Vector() {
	x = 0;
	y = 0;
}
Vector::Vector(int a, int b) {
	x = a;
	y = b;
}
void Vector::Print() {
	cout << "(" << x << "," << y << ")";
}
Vector Vector::operator+(Vector param) {
	Vector temp;
	temp.x = x + param.x;
	temp.y = y + param.y;
	return temp;	
}
Vector Vector::operator-(Vector param) {
	Vector temp;
	temp.x = x - param.x;
	temp.y = y - param.y;
	return temp;		
}
Vector Vector::operator--(int) {
	Vector temp;
	temp.x = x--;
	temp.y = y--;
	return temp;
}
Vector Vector::operator++() {
	Vector temp;
	temp.x = ++x;
	temp.y = ++y;
	return temp;
}
ostream& operator<<(ostream& os, const Vector& vt) {
	os << "(" << vt.x << "," << vt.y << ")";
	return os;
}











