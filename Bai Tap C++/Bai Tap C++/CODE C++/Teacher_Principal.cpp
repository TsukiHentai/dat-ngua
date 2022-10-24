#include<iostream>
using namespace std;
class Teacher { // Lop co so
	protected:
		string name;
		int age, numOfStudents;
	public:
		void setName(const string& new_name) {
			name = new_name;
		}
};
class Principal: public Teacher { // Lop thua ke
	string school_name;
	int numOfTeachers;
public:
	void setSchool(const string& s_name) {
		school_name = s_name;
	}
};
int main() {
	Teacher t1;
	Principal p1;
	p1.setName("Principal 1");
	t1.setName("Teacher 1");
	p1.setSchool("Elementary School");
return 0;
}

