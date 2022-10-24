#include<iostream>
using namespace std;
class CPolygon {
protected:
	int width, height;
public:
	void set_value(int a, int b) {
		width = a; height = b;
	}
};
class CRectangle: public CPolygon {
public:
	int area() {
		return width*height;
	}
};
class CTriangle: public CPolygon {
public:
	int area() {
		return (width*height)/2;
	}
};
int main() {
	CRectangle rect;
	rect.set_value(20,30);
	cout << rect.area();
	
	CTriangle trgl;
	trgl.set_value(30,40);
	cout << trgl.area(); 
	 
	return 0;
}
