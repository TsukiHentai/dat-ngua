#include<iostream>
using namespace std;
template<class a,class b>
void swaps(a&x,b&y)
{
	a temp=x;
	x=y;
	y=temp;
}
int main()
{
	float a=0.1;
	float b=2;
	swaps(a,b);
	cout<<a<<" "<<b;
}
