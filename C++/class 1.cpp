#include <iostream>
#include <string.h>
using namespace std;

class Student {
public:
	char ID[20];
	char name[100];
	int age;
	float mark;
	char address[100];

	Student() {
		cout << "Call non para constructor" << endl;
		this->name[0] = '\0';
		this->address[0] = '\0';
		this->ID[0] = '\0';
		this->age = 0;
		this->mark = 0;
	}

	Student(char* name) {
		cout << "Call 1 para constructor" << endl;
		strcpy(this->name, name);
		this->address[0] = '\0';
		this->ID[0] = '\0';
		this->age = 0;
		this->mark = 0;
	}

	Student(char* name, int age) {
		cout << "Call 2 params constructor" << endl;
		strcpy(this->name,name);
		this->address[0] = '\0';
		this->ID[0] = '\0';
		this->age = age;
		this->mark = 0;
	}

	Student(char* name, int age, char* id, char* address, float mark) {
		cout << "Call 5 params constructor" << endl;
		strcpy(this->name,name);
		strcpy(this->ID,id);
		strcpy(this->address,address);
		this->age = age;
		this->mark = mark;
	}

	void showInfo() {
		cout << "============== Student Info ===========" << endl;
		cout << "Name: " << name << endl;
		cout << "Address: " << address << endl;
		cout << "Id: " << ID << endl;
		cout << "Age: " << age << endl;
		cout << "Mark: " << mark << endl;
		cout << "=======================================" << endl;
	}

	~Student() {
		cout << "Call destructor" << endl;
	}
};

int main() {
	char* name = new char[100];
	strcpy(name,"Tran Van Hung");
	char* id = new char[20];
	strcpy(id,"B21DCCN123");
	char* addr = new char[100];
	strcpy(addr,"Hanoi");

	Student s; // goi ham tao 0 tham so
	Student s1(name); // goi ham tao 1 tham so
	Student s2(name, 20); // goi ham tao 2 tham so
	Student s3(name, 21, id, addr, 9.5);// goi ham tao 5 tham so

	s.showInfo();
	s1.showInfo();
	s2.showInfo();
	s3.showInfo();

	return 0;
}
