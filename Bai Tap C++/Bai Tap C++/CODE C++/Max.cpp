#include <iostream>
using namespace std;

int x, y;
int Max(int x, int y);
void max(int x = 100, int y = 200){
  cout << x << " " << y;
	if (x >= y )
		cout << "So lon nhat la:" << x;
	else
		cout << "So lon nhat la:" << y;
		return;
}
int main() {
	cout << "Nhap va so x:";
	cin >> x;
	cout << "Nhap vao so y:";
	cin >> y;
    max (x,y);
	return 0;
}

int Max(int x, int y) {
	return (x>y?x:y);
}
