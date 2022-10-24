class Base {
private:
	int k;
public:
	int i;
	void f() {
	}
};
//--------------------------------//
class Derived: private Base {
private:
	int m;
public:
	using Base::i;
	using Base::f; 
	void fb1() {
	}
};
//------------------------------------------//
int main() {
	Base b;
	Derived d;
	b.i = 5;
	b.f();
	
	d.f();
	d.i = 10;
	d.fb1(); 
	return 0;
}
