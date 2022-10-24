#include <iostream>
#include <string>
using namespace std;
//----------------------------------------------------//
class Teacher { // Base class
	string name;
	int numOfStudents;
public:
	Teacher (const string &, int); // Constructor of base
	void print() const; 
};
//----------------------------------------------------//
void Teacher :: print () const {       // Non-virtual function
	cout << "Name: " << name << endl;
	cout << " Num of Students:" << numOfStudents << endl;
}
//----------------------------------------------------//
class Principal : public Teacher { // Derived class
	string schoolName;
public:
	Principal (const string &, const string &, int);
	void print() const;
};
//----------------------------------------------------//
void Principal :: print() const {     // Non-virtual function
	Teacher :: print();
	cout << " Name of School:"<< schoolName << endl;
}
//----------------------------------------------------//
int main() {
	Teacher t1("Teacher 1",50);
	Principal p1("Principal 1",40,"School");
	Teacher *ptr;
	char c;
	cout << "Teacher or Principal "; cin >> c;
	if (c=='t') 
		ptr = &t1;
	else 
		ptr = &p1;
	ptr->print(); // which print ??
	
	return 0;
}

