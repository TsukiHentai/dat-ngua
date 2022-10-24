#include<iostream>
#include<fstream>
bool KT_NT(int N);
//-----------------------//
using namespace std;
int main() {
	int A;
	cout << "Nhap vao mot so: ";
	cin >> A;
	
	ofstream ntFile;
	ntFile.open("nguyen_to.txt");
	for(int i=2;i<A;i++) 
		if (KT_NT(i))
			ntFile << i << endl;
	ntFile.close();	
	return 0;
}
//-----------------------//
bool KT_NT(int N) {
	int Dem=0;
	for(int i=1;i<=N;i++) {
		if (N%i==0) 
			Dem++;
	}
	if (Dem>2)
		return false;
	else
		return true;
}
//-----------------------//




