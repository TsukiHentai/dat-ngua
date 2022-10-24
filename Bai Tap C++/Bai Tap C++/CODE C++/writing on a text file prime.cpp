// writing on a text file
#include <iostream>
#include <fstream>
#include <Math.h>
#include <iomanip>

using namespace std;
//-----------------------------------------------//
bool IsPrime(int);
//-----------------------------------------------//
int main () {
ofstream myfile ("Prime.txt");
if (myfile.is_open()) {
	for (int i = 0; i < 1000; i++) {
		if (IsPrime(i))
		myfile << i << "\n";
	}
cout << "Done!";
myfile.close();
}
else cout << "Unable to open file";
return 0;
}
//-----------------------------------------------//
bool IsPrime(int n) {
  if (n < 2) return false;
  if (n == 2) return true;
  if (n % 2 == 0) return false;
  int can = int(sqrt(n));
  int i;
  for (i = 3; i <= can; i += 2)
    if (n % i == 0) return false;
  return true;
}
//-----------------------------------------------//

