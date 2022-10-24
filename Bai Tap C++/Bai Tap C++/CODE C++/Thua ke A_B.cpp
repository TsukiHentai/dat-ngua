#include<iostream>
using namespace std;
class A { // A la lop co so
	int a = 10;
public:
	void showA() {
		cout << a;
	}
};
class B: public A { // B la lop dan xuat tu A
	int b = 20;
public:
	void showB();
};
int main() {
	A a;
	B b;

	b.showB();
	return 0;
}
void B::showB() {
	B::showA();
	cout << b; 
}

