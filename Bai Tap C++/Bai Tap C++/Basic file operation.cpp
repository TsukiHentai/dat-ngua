#include<iostream>
#include<fstream>
using namespace std;
int main() {
	ofstream myFile;
	myFile.open("abc.xls");
	myFile << "0123456789" << endl;
	myFile << "Ghi file";
	cout << "\nDone!";
	return 0;
}
