#include<iostream>
#include<math.h>
using namespace std;
int n;
//----------------------------------------------//
bool isPrime (int n);
bool isPrime1 (int n);
bool isPrime2 (int n);
//----------------------------------------------//
int main() {
	cout << "Nhap vao mot so: "; 
	cin >> n;
	for (int i=1;i<n;i++)
		if (isPrime2(i)==true)
			cout << i << " ";	
}
//----------------------------------------------//
bool isPrime (int n) {
	int i,dem;
	dem=0;
	for (i=2;i<n;i++)
		if (n%i==0)
			dem++;
	if (dem==0)
		return true;
	else
		return false;
}
//----------------------------------------------//
bool isPrime1 (int n) {
	int i,dem, can;
	dem=0;
	can = (int)sqrt(n);
	for (i=2;i<=can;i++)
		if (n%i==0)
			dem++;
	if (dem==0)
		return true;
	else
		return false;
}
//----------------------------------------------//
bool isPrime2 (int n) {
	int i,dem;
	dem=0;
	for (i=2;i<=n/2;i++)
		if (n%i==0)
			dem++;
	if (dem==0)
		return true;
	else
		return false;
}
//----------------------------------------------//
