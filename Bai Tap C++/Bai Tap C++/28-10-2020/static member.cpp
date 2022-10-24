// static members in classes
#include <iostream>
using namespace std;
class CDummy {
public:
	int n = 0;
	CDummy () { n++; };
	~CDummy () { n--; };
};

int main () {
	CDummy a;
	CDummy b[5];
	CDummy * c = new CDummy;
	cout << a.n << endl;
	delete c;
	//cout << CDummy::n << endl;
	return 0;
}
