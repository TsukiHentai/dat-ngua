#include <iostream>
#include <time.h>
#include <string>
#include <iomanip>
using namespace std;

template <class Item>
void bubble_sort(Item a[], size_t size);
template <class Item> void swap(Item& a, Item& b);
template <class Item> void display_array(Item randNum, size_t size);
//------------------------------------------------------------//
template <class Item>
void bubble_sort(Item a[], size_t size) {
	size_t idx, pass;
	for (pass=1; pass<=size; ++pass) {
		for (idx=0; idx<=size-2; ++idx) {
			if (a[idx] > a[idx+1])
				swap(a[idx], a[idx+1]);
		}
	}	
}
//------------------------------------------------------------//
template <class Item>
void swap(Item& a, Item& b) {
        Item temp;
        temp = a;
        a = b;
        b = temp;
}
//------------------------------------------------------------//
template <class Item>
void display_array(Item randNum, size_t size) {
	 for ( int j = 1; j < size; j++ ) {
	  cout  << setw(16) << randNum[ j ]; 
   }
}
//------------------------------------------------------------//
int main() {
	int *randNum;
//	int a,b;
	int size;
	//swap<int>(a, b);  // NOT SURE IF WORKS YET, UNTESTED
	srand((unsigned)time(NULL));
	cout << "How many integers?" << endl;
	cin >> size;
	size = size + 1;
	randNum = new int [size];
	 for (int i = 1; i < size; i++) 	 {
		 randNum[i] = 1+ rand() % 10;
	 }
	display_array(randNum, size);
	cout << "\n \n sorted..." << endl;
	bubble_sort<int>(a[], size); //ERROR
	//display_array(randNum, size);
	system("pause");
	return 0;
}
