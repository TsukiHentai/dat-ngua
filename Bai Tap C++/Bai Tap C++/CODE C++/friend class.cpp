#include <iostream>
using namespace std;

//Khai bao lop A
class A { 
	int a; 
public: 
	A() { a = 0; } 	// Cau tu khoi tao lop A
	friend class B;	// Friend class
};

//Khai bao lop B
class B { 
	int b; 
public: 
	void showA(A& x) { 
	// Since B is friend of A, it can access private members of A 
	cout << "A::a=" << x.a;
	} 
};
int main() { 
	A a; 
	B b; 
	b.showA(a); 
	return 0; 
}

