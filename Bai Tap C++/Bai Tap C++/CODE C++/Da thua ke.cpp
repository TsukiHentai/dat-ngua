#include<iostream>
using namespace std;
class CPolygon { // Lop co so 1
protected:
	int width, height;
public:
	void set_value(int a, int b) {
		width = a; height = b;
	}
};
class COutput { // Lop co so 2
public:
	void print(int i) {
		cout << i << endl;
	}
};
class CRectangle: public CPolygon, public COutput {
public:
	int area() {
		return (width*height);
	}
};
int main() {
	CRectangle rect;
	rect.set_value(10,20);
	rect.print(rect.area());  
	
	return 0;
}






