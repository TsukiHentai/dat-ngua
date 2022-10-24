// Chuong trinh ghi file mang N so nguyen
#include <iostream>
#include <fstream>
using namespace std;
int a[255];
int n;
//----------------------------------------------------//
void inputArray() {
	cout << "Nhap vao so phan tu cua mang:";
	cin >> n;
	for (int i=0; i<n; i++) {
		cout << "A[" << i << "]=";
		cin >> a[i];
	}
}
//----------------------------------------------------//
void randomArray() {
	cout << "Nhap vao so phan tu cua mang:";
	cin >> n;
	for (int i=0; i<n; i++) {
		a[i]=rand()%100-10;
	}
}
//----------------------------------------------------//
void printArray() {
	for (int i=0; i<n; i++)
		cout << a[i] << " ";        
}
//----------------------------------------------------//
void saveFile() {
ofstream myfile;
myfile.open ("du_lieu.txt");

for (int i=0;i<n;i++)
	myfile << a[i] << "  ";
	
myfile.close();
cout << "\nDa ghi ra file";
}
//----------------------------------------------------//
int main() {
	randomArray();
	cout << "Mang ban vua nhap vao la: " << endl;
	printArray();
	//saveFile();
	return 0;
}

