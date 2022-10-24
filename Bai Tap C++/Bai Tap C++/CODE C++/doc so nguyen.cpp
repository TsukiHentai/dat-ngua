// reading a text file
#include <iostream>
#include <fstream>
using namespace std;
int main () {
string line;
ifstream myfile ("du_lieu.txt");
if (myfile.is_open()) {
	while (!myfile.eof()) {
		getline (myfile,line);
		cout << line << endl;
	}
	myfile.close();
} 
else 
	cout << "Khong mo duoc file";
return 0;
}
