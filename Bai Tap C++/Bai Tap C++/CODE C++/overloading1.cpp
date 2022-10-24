#include <iostream>

using namespace std;
int hamcong(int a, int b)
{
	return (a+b);
}
float hamcong(float x, float y)
{
	return (x+y);
}
double hamcong(double x, double y)
{
	cout << "Hi" << endl;
	return (x+y);
}

int main()
{
	double x = 1;
	double y = 2;
	cout << hamcong(x, y);
	return 0;
}

