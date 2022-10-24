#include<iostream>
using namespace std;
template <class mytype>
mytype getmax(mytype a,mytype b)
{
	return(a>b?a:b);
}
int main()
{
	int a,b,c;
	a=7;b=-9;
	c=getmax(a,b);
	cout<<c;
	cout<<endl;
	float x,y,z;
	x=-8.7;y=9.3;
	z=getmax(x,y);
	cout<<z;
	return 0;
}
