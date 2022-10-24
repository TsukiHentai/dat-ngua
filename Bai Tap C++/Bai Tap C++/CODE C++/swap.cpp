#include <iostream>
using namespace std;
// Khai bao nguyen mau ham
void swap1(int x, int y);
void swap2(int &x, int &y);
void swap3(int *x, int *y);
//------------------------------------------------// Truyen theo tham tri
void swap1(int x, int y){
	int temp = x;
	x = y;
	y = temp;
	cout << "Doi cho trong than ham Swap 1" << endl;
	cout << x << "," << y << endl;
}
//------------------------------------------------// Truyen theo tham chieu
void swap2(int &x, int &y){
	cout << "Gia tri ban dau" << endl;
	cout << x << "," << y << endl;
	int temp = x;
	x = y;
	y = temp;
	cout << "Sau khi doi cho" << endl;
	cout << x << "," << y << endl;
	cout << &x << "," << &y << endl;
	cout << "---------------------------" << endl;
}
//------------------------------------------------// Truyen theo dia chi (con tro)
void swap3(int *x, int *y){
	int temp = *x;
	*x = *y;
	*y = temp;
	cout << "Swap 3" << endl;
	cout << x << ", " << y << endl;
	cout << &x << ", " << &y << endl;
	cout << *x << ", " << *y << endl;
	cout << "------------------------------" << endl;
}
//------------------------------------------------// Hàm main
int main()
{
	int a, b;
	cout << "Nhap vao hai so a, b" << endl;
	cout << "a="; cin >> a;
	cout << "b="; cin >> b;
	//swap1(a, b);
	//swap2(a, b);
	swap3(&a, &b);
	cout << "Doi cho hai so a, b" << endl;
	cout << "a=" << a << endl << "b=" << b;
	return 0;
}
