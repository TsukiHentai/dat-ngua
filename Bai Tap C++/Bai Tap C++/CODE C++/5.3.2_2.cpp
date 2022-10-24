class Base {
	int m1;
public: 
	int m2;
};
class Derived: private Base{ };
int main() {
	Derived d;
	d.m2 = 5; // Loi
	Base* bp = &d; // Chuyen kieu khong tuong minh, loi
	bp = static_cast<Derived*>(&d);
	bp->m2 = 5;	
	return 0;
}
