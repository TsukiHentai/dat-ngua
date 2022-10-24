#include <iostream>
using namespace std;
int main ()
{
unsigned long n;
do {
cout << "Enter number (0 to end): ";
cin >> n;
cout << "You entered: " << n << "\n";
} while (n != 0);



for (int i=0; i<100;i+=5){
	cout << i << ",";
}
return 0;
}
