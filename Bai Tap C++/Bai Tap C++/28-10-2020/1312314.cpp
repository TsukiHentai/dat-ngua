// static members in classes
#include <iostream>
using namespace std;
class B1 {
	int id;
public:
	int getID() {
		return id;
	}
	static int num;
};
int B1::num = 0;
int main() {
	return 0;
}
