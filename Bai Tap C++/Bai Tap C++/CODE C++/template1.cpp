#include <iostream>

using namespace std;

template <typename T, typename D>
T hamcong(T a, D b)
{
	auto res = a+b;
	return res;
}

int main()
{
	cout << hamcong(1.0, 2.0);
	cout << hamcong(1, 3.0);
	cout << hamcong(1, 3);
	return 0;
}

