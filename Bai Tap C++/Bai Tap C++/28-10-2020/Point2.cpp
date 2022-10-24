#include<iostream>
using namespace std;
class Point {
	int x,y;
public:
	Point(int x1, int y1) {
		x = x1;
		y = y1;
	}
	void Print () {
		cout << x << "," << y << endl;
	}
	~Point() {
		cout << "Goi ham huy";
	}
};
int main() {
	Point p1(3,4);
	p1.Print();
	Point p2(5,6);
	p2.Print();  
	return 0;
}
