#include <iostream>

using namespace std;
void tongS(float x, int n, float & tong);

int main()
{
	float x;
	int n;
	cout << "Nhap x=";
	cin >> x;
	cout << "Nhap n=";
	cin >> n;
	float tong;
	tongS(x, n, tong);
	cout << "Tong S=" << tong << endl;
	cout << "x=" << x;
	return 0;
}

void tongS(float x, int n, float & tong)
{
	tong = 1;
	float tich  = 1;
	for(int i=1;i<=n;i++)
	{
		tich *= x/i;
		tong += tich;
	}
	x = 1000.0f;
	cout << "x=" << x;
	return;
	//return tam;
}

