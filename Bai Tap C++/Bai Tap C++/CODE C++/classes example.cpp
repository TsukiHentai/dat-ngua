// classes example
#include <iostream>
using namespace std;

class CRectangle {
	int x, y;
public:
	void set_values (int,int);
	int area () {
		return (x*y);
	}
};
void CRectangle::set_values (int a, int b) {
	x = a;
	y = b;
}
int main () {
	CRectangle rect;
	rect.set_values (3,4);
	cout << "area: " << rect.area();
	
	CRectangle recta[10];
	recta[1].set_values (5,6);
	cout << "area: " << recta[1].area();
	
	CRectangle* rectb;
	rectb = new CRectangle;
	rectb->set_values (7,8);
	cout << "area: " << rectb->area();
	
	return 0;
}
