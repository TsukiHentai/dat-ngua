//basic file operations
#include<iostream>
#include<fstream>
using namespace std;
int main() {
	ofstream myFile;
	myFile.open("D:/Test.txt");
	
	myFile << "Chuong trinh ghi File C++" << endl;
	myFile << "0123456789";
	myFile.close();
	return 0;
}
