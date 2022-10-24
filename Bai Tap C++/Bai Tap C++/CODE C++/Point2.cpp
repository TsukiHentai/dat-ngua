#include<iostream>
using namespace std;
class Point {
	int x;
	int y;
public:
	void Move(int, int); // Khai bao nguyen mau
	void Print();
	bool isZero();
	Point *far_away(Point &p);
};
int main(){
	Point p1, p2;
	p1.Move(4,5);
	p2.Move(5,6);
	
	cout << "Dia chi p1: " << &p1 << endl;
	cout << "Dia chi p2: " << &p2 << endl;
	cout << p1.far_away(p2);
	
	return 0;
}
void Point::Move(int x1, int y1) {
	x = x1;
	y = y1;
}
void Point::Print() {
	cout << "(" << x << "," << y << ")";
}
bool Point::isZero() {
	return (x==0 & y==0);
}
Point *Point::far_away(Point &p) {
	unsigned long x1 = x*x;
	unsigned long y1 = y*y;
	unsigned long x2 = p.x*p.x;
	unsigned long y2 = p.y*p.y;
	cout << x1 << "," << y1 << endl;
	cout << x2 << "," << y2 << endl;
	if ((x1+y1)>(x2+y2)) 
		return this;
	else 
		return &p;
}
