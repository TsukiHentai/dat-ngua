#include<iostream>
using namespace std;
class Point {
	int x,y;
public:
	Point() { //Cau tu khoi tao mac dinh
		x = 0;
		y = 0;
	}
	Point(int px, int py) {//Cau tu khoi tao co tham so
		x = px;
		y = py;
	}
	Point (const Point& p) {//Cau tu copy
		cout << "Cau tu copy" << endl;
		x = p.x;
		y = p.y;
	}
	void Move(int,int);
	void Print();
	bool isZero();
};
int main() {
	Point p(20,30);	// Goi cau tu khoi tao co tham so
	Point p2(p);	// Goi cau tu khoi tao copy
	p2.Print();
	
	Point p1 = p;	// Goi cau tu khoi tao copy
	p1.Print(); 
	 
	return 0;
}
void Point::Move(int x1,int y1) {
	x = x1;
	y = y1;
} 
void Point::Print() {
	cout << "(" << x << "," << y << ")";
}
bool Point::isZero() {
	return (x==0 && y==0);
}
