#include <string>
using namespace std;
//-------------------------------------------------------//
class Teacher {
	string name;
	int age,numOfStudents;
public: 
	Teacher (const string& new_name):name (new_name) { 
	}
};
//-------------------------------------------------------//
class Principal: public Teacher {
	int numOfTeachers;
public:	
	Principal (const string&, int);
};
Principal::Principal (const string & new_name, int numOT):Teacher (new_name) {
	numOfTeachers = numOT;
}
//-------------------------------------------------------//
int main () {
	Principal p1("Ali Baba", 20);	 
	return 0;
}

