#include <iostream>
#include <conio.h>

using namespace std;

int a[255];
int n;

//-----------------------------------------------------------------//
void inputArray() {
	cout << "Nhap vao so phan tu cua mang:";
	cin >> n;
	for (int i=0; i<n; i++) {
		cout << "A[" << i << "]=";
		cin >> a[i];
	}
}
//-----------------------------------------------------------------//
void inputArray1() {
	n = 10;

	a[0] = 5;
	a[1] = 8;
	a[2] = 2;
	a[3] = 10;
	a[4] = 5;
	a[5] = 12;
	a[6] = 8;
	a[7] = 1;
	a[8] = 15;
	a[9] = 4;
}
//----------------------------------------------------------------//
void printArray() {
	for (int i=0; i < n; i++)
		cout << a[i] << " ";
}
//----------------------------------------------------------------//
int LinearSearch(int x) {	
int	i=0;
while ((i<n) && (a[i]!=x )) 
	i++;
if(i==n)
	return -1;	// tim het mang nhung không có x
else
	return i;	// a[i] la phan tu có khoá x
}
//----------------------------------------------------------------//
int LinearSearch1(int x)
{	int	i=0;			 // mang gom N phan tu tu a[0]..a[n-1]
	 a[n] = x;			// thêm phan tu thu N+1 
	while (a[i]!=x)	i++; 
	if (i==n)
		 return -1; 	// tim het mang nhung không có x 
	else 
		return i; 		// tim thay x tai vi tri i 
} 
//----------------------------------------------------------------//

int main() {
	int t;
	int x, i;
	inputArray();
	
	cout << "//-------------------------------------//" << endl;
	cout << "Mang vua nhap vao la: " << endl;
	printArray();
	cout << endl;
	
	cout << "//-------------------------------------//" << endl;
	cout << "MENU - MOI BAN CHON KIEU TIM KIEM" << endl;
	cout << "1 - Tim kiem tuan tu (Linear Search)" << endl;
	cout << "2 - Tim kiem tuan tu (Linh canh)" << endl;
	cout << "3 - Tim kiem nhi phan Binary Search" << endl;
	cout << "Ban chon 1, 2, hay 3?" << endl;

	cin >> t;

	switch (t) {
		case 1: {
			cout << "Nhap vao phan tu can tim: "; cin >> x;
			i = LinearSearch(x);
			if (i == -1) 
				cout << "Khong tim thay phan tu " << x;
			else
				cout <<"Tim thay phan tu " << x << " tai vi tri " << i;
			break;
		}
		case 2: {
			cout << "Nhap vao phan tu can tim: "; cin >> x;
			i = LinearSearch1(x);
			if (i == -1) 
				cout << "Khong tim thay phan tu " << x;
			else
				cout <<"Tim thay phan tu " << x << " tai vi tri " << i;
			break;
		}
		case 3: {
			cout << "Tim kiem Nhi phan";
			break;
		}
		default: {
			cout << "Lua chon cua ban khong dung";
			break;
		}
	}
	getch();
	return 0;
}

