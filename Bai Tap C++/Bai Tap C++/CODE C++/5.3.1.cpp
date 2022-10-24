#include<iostream>
using namespace std;
//-----------------------------//
class Teacher {
protected:
	string name;
	int age,numOfStudents;
public:
	void setName(const string& new_name) {
		name = new_name;
	}
	void print() const; // Ham print() cua lop Teacher
};
void Teacher::print() const {
	cout << "Name: " << name << " Age: " << age << endl;
	cout << "Number of Students: " << numOfStudents << endl;
};
//-----------------------------//
class Principal: public Teacher {
	string school_name;
	int numOfTeachers;
public:
	void setSchool(const string& s_name) {
		school_name = s_name;
	}
	void print() const; // Ham print cua lop Principal
};
void Principal::print() const {
	cout << "Name: " << name << " Age: " << age << endl;
	cout << "Number of Students: " << numOfStudents << endl;
	cout << "Name of the school: " << school_name << endl;
};
int main() {
	Principal p1;
	p1.Teacher::print();
	cout << "----------------" << endl;
	p1.print();
	return 0;
}

