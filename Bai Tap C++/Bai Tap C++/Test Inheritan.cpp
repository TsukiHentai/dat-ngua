#include<iostream>
using namespace std;
class A {
protected:
	int a;
public:
	void showA() {
		cout << a;
	}
};
class B:private A {
	int b;
public:
	void showB() {
		cout << a;
		cout << b;
	}
};
int main() {
	A obj_a; B obj_b;
	obj_b.showB();
	return 0;
}
