#include<iostream>
#include<fstream>
#include <Math.h>
using namespace std;
bool KT_NT(int N);
//---------------------//
int main() {
	int N;
	cout << "Nhap vao so nguyen: "; 
	cin >> N;
	ofstream myFile ("nguyen_to.txt");
	for(int i=2;i<=N;i++)
		if (KT_NT(i))
			myFile << i << "  ";
	myFile.close();
	return 0;
}
//---------------------//
bool KT_NT(int N) {
if (N < 2) return false;
  if (N == 2) return true;
  if (N % 2 == 0) return false;
  int can = int(sqrt(N));
  int i;
  for (i = 3; i <= can; i += 2)
    if (N % i == 0) return false;
  return true;
}
//---------------------//
