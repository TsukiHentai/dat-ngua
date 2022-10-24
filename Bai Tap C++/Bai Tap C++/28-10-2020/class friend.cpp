#include<iostream>
using namespace std;
//--------------------------//
class B {
friend class A;  // A la ban cua B (A truy cap vao private cua B)
private: 
	int b; 
public: 
	void showA(A& x) { 
	// Since B is friend of A, it can access private members of A 
	cout << "A::a=" << x.a; 
	} 
};
//--------------------------//
class A {
friend class B;  // B la ban cua A (B truy cap vao private cua A)
private: 
	int a; 
public:	
	A() { a = 0; }
	void showB(B& x) { 
		cout << "B::b=" << x.b; 
	} 	
};
//--------------------------//
int main() {
	return 0;
}
