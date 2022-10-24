#include<iostream>
using namespace std;
class CRectangle {
private:
	int x;
	int y;
public:
	void set_Value(int a, int b);
	int area();
} rect;
int main() {
	CRectangle r;
	r.x = 10;
	return 0;
}
