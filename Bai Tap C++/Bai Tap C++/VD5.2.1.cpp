#include<iostream>
using namespace std;
class Teacher { // Lop co so (Lop cha)
	string name;
	int age, numOfStudent;
public:
	void setName(const string &new_name) {
		name = new_name;
	}
};

class Principal : public Teacher {
	string school_name;
	int numOfTeacher;
public:
	void setSchool(const string &s_name) {
		school_name = s_name;
	}
}; 
int main() {
	return 0;
}
