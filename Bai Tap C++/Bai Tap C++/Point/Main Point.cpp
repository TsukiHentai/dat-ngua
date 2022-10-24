#include<iostream>
#include <C:/Users/Quang Huy/Desktop/Point/Point.h>
using namespace std;
//-------------------------//
void Point::setValue(int x, int y) {
	this->x = x;
	this->y = y;
}
//-------------------------//
void Point::Move(int x1, int y1) {
	x = x1;
	y = y1;
}
//-------------------------//
bool Point::isZero() {
	return (x==0 && y==0);
}
//-------------------------//
void Point::Print() {
	cout << "x = " << x << ", y = " << y << endl;
}
//-------------------------//
int main() {
	Point a, b;
	a.setValue(1,3);
	a.Print(); 
	b.setValue(9,3);
	b.Print();
	return 0;
}
