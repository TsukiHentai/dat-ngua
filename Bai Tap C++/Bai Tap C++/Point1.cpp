#include<iostream>
using namespace std;
class Point {
	int x,y;
public:
	Point() {  // Cau tu khoi tao mac dinh
		cout << "Cau tu khoi tao\n";
	};
	Point(int,int); //Cau tu khoi tao co tham so
	void Move(int,int);
	bool isZero();
	void Print();
};
Point::Point(int x, int y) {
	this->x = x;
	this->y = y;	
}
void Point::Print() {
	cout << "(" << x << "," << y << ")" << endl;
}
int main() {
	Point p;
	Point p1(2,6);
	p1.Print(); 
	return 0;
}
