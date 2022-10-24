#include <iostream>
using namespace std;
//---------------------------------------//
class A {
protected:
	int a;
public:
	void aa () {
		cout << a;
	}	
};
//---------------------------------------//
class B : public A {
private:
	int b;
public:
	void bb () {
		cout << b;
		//cout << a;
	}	
};
//---------------------------------------//
int main() { 
	A objA;
	B objB;
	objB.aa();
	
		return 0;
}
