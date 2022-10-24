#include<iostream>
using namespace std;
int x;
int y;
void Move(int, int); // Khai bao nguyen mau
void Print();
bool isZero();
int main() {
	Move(3,-5);
	Print();
	Move(0,0);
	cout << endl;
	if(isZero()) 
		cout << "x, y dang o goc toa do";
	else
		cout << "x, y khong o goc toa do";
		
	return 0;
}
void Move(int x1, int y1) {
	x = x1;
	y = y1;
}
void Print() {
	cout << "(" << x << "," << y << ")";
}
bool isZero() {
	return (x==0 & y==0);
}

