#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n = 10;
	float * a = new float[n];
	vector<float> vf(a, a+n);
	stable_sort(a, a+n);
	return 0;
}

