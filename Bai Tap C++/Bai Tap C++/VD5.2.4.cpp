#include<iostream>
using namespace std;
class A {
public:
	A() {
		cout << "Cau tu lop A";
	}
};
class B : public A {
public:
	B() {
		cout << "Cau tu lop B";
	}	
};
int main() {
	B objb;
	return 0;
}
