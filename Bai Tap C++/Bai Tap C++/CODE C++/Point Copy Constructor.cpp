#include<iostream>
using namespace std;
class Point {
	int x, y;
public:
	Point() {//Cau tu khoi tao mac dinh
		cout << "Cau tu khoi tao";
		x = 0;
		y = 0;
	}
	Point (int px,int py) {//Cau tu khoi tao co tham so
		cout << "Cau tu co tham so";
		x = px;
		y = py;
	}
	/*
	Point(const Point& p) {//Cau tu copy
		cout << "Cau tu copy";
		x = p.x;
		y = p.y;
	}
	*/
	void Move(int,int);
	void Print();
	bool isZero();
};
int main() {
	Point p,p1(1,-3);
	
	Point p2(p1); //Goi cau tu copy
	p2.Print();
	 
	Point p3=p2; //Goi cau tu copy
	p3.Print();
	
	return 0;
}
//-----------------------------------//
void Point::Print() {
	cout << "(" << x << "," << y << ")";
}
//-----------------------------------//
bool Point::isZero() {
	return (x==0 && y==0);
}
//-----------------------------------//
