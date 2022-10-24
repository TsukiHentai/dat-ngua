#include<iostream>
using namespace std;
class Vector {
	int x,y;
public:
	Vector() {
		x = 0;
		y = 0;
	}
	Vector(int x1, int y1) {
		x = x1;
		y = y1;
	}
	void Print();
	Vector operator+(Vector);
	Vector operator/(Vector);
	void operator=(Vector);
	void operator()();
	void operator++(); 			//++a
	Vector operator--(int); 	//a++
	friend istream& operator>>(istream& is,Vector &param);
	friend ostream& operator<<(ostream& os,Vector &param);
};
//-----------------------------//
void Vector::Print() {
	cout << x << "," << y;
}
//-----------------------------//
Vector Vector::operator + (Vector param) {
	Vector temp;
	temp.x = x + param.x;
	temp.y = y + param.y;
	return temp;
} 
//-----------------------------//

Vector Vector::operator / (Vector param) {
	Vector temp;
	temp.x = x / param.x;
	temp.y = y / param.y;
	return temp;
} 
//-----------------------------//
void Vector::operator = (Vector param) {
	x = param.x;
	y = param.y;
	cout << "Phep gan" << endl;
}
//-----------------------------//
void Vector::operator()() {
	cout << "(" << x << "$" << y << ")" << endl;
}
//-----------------------------//
void Vector::operator++() { //++a
	++x; ++y;	
}
//-----------------------------//
Vector Vector::operator--(int) { //a--
	Vector temp = *this; // Giu gia tri cu
	x = x - 1;
	y = y - 1;	
	return temp; // Tra ve gia tri cu
}
//-----------------------------//
istream& operator>>(istream& is,Vector &param) {
	is >> param.x >> param.y;
	return is;
}
//-----------------------------//
ostream& operator<<(ostream& os,Vector &param) {
	os << param.x << "," << param.y;
	return os;
}
//-----------------------------//
int main() {
	/*
	Vector v1(3,4), v2(5,6), v3;
	v3 = v1 + v2;  	//v3.operator+(v2);
	//v3 = v1 / v2; //v3 = v1.operator/(v2); 
	v3.Print();
	Vector v4;
	v4.operator=(v1); //v4 = v1; 
	v4.Print();
	v2(); //v2.operator()();
	v2--;
	v2();
	*/
	Vector v5;
	cin >> v5;
	cout << v5;	
	
	return 0;
}

