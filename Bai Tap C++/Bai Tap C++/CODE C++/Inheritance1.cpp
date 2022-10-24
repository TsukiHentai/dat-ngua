#include <iostream>
using namespace std;
class Base {
public:
	Base() {
		cout << "Base's constructor called" << endl;
	}
	~Base() {
		cout << "Base's destructor called" << endl;
	}
};
class Derived: public Base {
public:
	Derived() {
		cout << "Derived's constructor called" << endl;
	}
	~Derived() {
		cout << "Derived's destructor called" << endl;
	}
};
int main() {
	{
		Derived obj1;
		cout << "I am still alive" << endl;
	}
	cout << "Bye bye";
		
	return 0;
}

