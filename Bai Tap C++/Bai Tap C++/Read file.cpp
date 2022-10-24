#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main() {
	ifstream myFile;
	string line;
	myFile.open("nguyen_to.txt");
	if (myFile.is_open()) {
		while(!myFile.eof()) {
			getline(myFile,line);
			cout << line << endl;
		}
		myFile.close(); 
	} else
	cout << "Khong mo duoc file de doc";		
return 0;
}
