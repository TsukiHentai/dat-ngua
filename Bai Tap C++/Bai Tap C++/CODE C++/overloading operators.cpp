// vectors: overloading operators example
#include <iostream>
using namespace std;
//----------------------------------------------------------//
class CVector {
public:
	int x,y;
	CVector () {};
	CVector (int,int);
	CVector operator + (CVector); 	// overloading operators +
	CVector operator - (CVector); 	// overloading operators -
	void operator ++ (int); 		// overloading operators ++
	void operator -- (int); 		// overloading operators --
};
//----------------------------------------------------------//
CVector::CVector (int a, int b) {
	x = a;	
	y = b;
}
//----------------------------------------------------------//
CVector CVector::operator + (CVector param) {
	CVector temp;
	temp.x = x + param.x;
	temp.y = y + param.y;
	return (temp);
}
//----------------------------------------------------------//
CVector CVector::operator - (CVector param) {
	CVector temp;
	temp.x = x - param.x;
	temp.y = y - param.y;
	return (temp);
}
//----------------------------------------------------------//
void CVector::operator -- (int i=1) {
	x = x - 1;
	y = y - 1;	
}
//----------------------------------------------------------//
void CVector::operator ++ (int i=1) {
	x = x + 1;
	y = y + 1;	
}
//----------------------------------------------------------//
int main () {
	CVector a (3,1);
	CVector b (1,2);
	CVector c;
	
	c = a - b;
	cout << c.x << "," << c.y << endl;
	
	c--;
	cout << c.x << "," << c.y;
	
	return 0;
}
