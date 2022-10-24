//---------------------------------//
class Gparent {
public:
	int gData;
};
//---------------------------------//
class Mother : virtual public Gparent {
public:
	int mData;
};
//---------------------------------//
class Father : virtual public Gparent {
public:
	int fData;
};
//---------------------------------//
class Child : public Mother, public Father {
public:
	int cData;
	void cFunc() {
		gData = 10;
	}
};
//---------------------------------//
int main() {
	Child child;	
}
