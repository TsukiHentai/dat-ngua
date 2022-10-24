#include <iostream>

using namespace std;
int cong(int a, int b)
{
	return a+b;
}
float cong(float a, float b)
{
	return (a+b);
}
double cong(double a, double b)
{
	return (a+b);
}

int main()
{
	auto c = cong(1, 3);
	cout << c;
	return 0;
}

