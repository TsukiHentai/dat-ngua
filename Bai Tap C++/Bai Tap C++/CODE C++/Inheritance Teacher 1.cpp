#include <iostream>
#include <string>
using namespace std;
//------------------------------------------------------------//
class Teacher {
protected:
	string name;
	int age,numOfStudents;
public:
	void setName(const string& new_name) {
		name = new_name;
	}
	void print() const;
};
void Teacher::print() const {
	cout << "Name: " << name << " Age: " << age << endl;
	cout << "Number of Students: " << numOfStudents << endl;
};
//------------------------------------------------------------//
class Principal: public Teacher {
private:
	string school_name;
	int numOfTeachers;
public:
	void setSchool(const string& s_name) {
		school_name = s_name;
	}
	void print() const;
	int getAge() const {
		return age;
	}
	const string& getName() {
		return name;
	}
};
int main() {
	Teacher t1;
	Principal p1;
	//t1.numOfStudents = 100; // sai
	t1.setName("Ali Bilir");
	p1.setSchool("Istanbul Lisesi");
	return 0;
}

