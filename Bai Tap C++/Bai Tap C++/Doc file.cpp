#include<iostream>
#include<fstream>
using namespace std;
int main() {
	string line;
	ifstream inFile;
	inFile.open("nguyen_to.txt");
	if(inFile.is_open()) {
		while(!inFile.eof()) {
			getline(inFile,line);
			cout << line << endl;	
		}
		inFile.close(); 		
	} else
		cout << "Khong mo duoc file";	
	return 0;
}
