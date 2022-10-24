#include <iostream>
using namespace std;

class Point { 
	int x,y;	  
 public:
//	Point();
	Point(int,int);
	bool move(int,int); 
	void Print(); 
};
//----------------------------------------------//
Point::Point() {
	x = 0; y = 0;	
}
//----------------------------------------------//
Point::Point(int x, int y=0) {
	this->x = x; 
	this->y = y;
}
//----------------------------------------------//
void Point::Print() {
	cout << x << ", " << y;
}
//----------------------------------------------//	
int main() {
	Point pa;
	pa.Print(); cout << " pa" << endl;
	
	Point p(10, 20);
	p.Print(); cout << " p" << endl;
	
	Point a[5] = {{10}, {20}, Point(30,40)}; 
	a[0].Print(); cout << " a[0]" << endl;
	a[1].Print(); cout << " a[1]" << endl;
	a[2].Print(); cout << " a[2]" << endl;
	a[3].Print(); cout << " a[3]" << endl;
	a[4].Print(); cout << " a[4]" << endl;

	return 0;	
}
