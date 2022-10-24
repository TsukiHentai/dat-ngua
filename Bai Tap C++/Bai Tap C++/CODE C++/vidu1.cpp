#include <iostream> // input output stream declarations
#include <cmath> // for sqrt() function

using namespace std; // standard namespace

bool kiemtrant(int m); // khai bao ham kiem tra m co phai la so nguyen to

int main()
{
	int n;
	//cout << "Moi ngai nhap n="; // console output, dau << la dau day luong
	//cin >> n; // console input object
	n = 1000000;
	int count = 0;
	for(int i=1;i<=n;i++)
		if(kiemtrant(i))
			count++;
			//cout << i << ", ";
	cout << count;
	return 0;
}

bool kiemtrant(int m)
{
	if(m==2)
		return true;
	if(m<2 || m%2==0)
		return false;
	int k = int(sqrt(m)) + 1;
	for(int i=3;i<=k;i+=2)
		if(m%i==0)
			return false;
	return true;
}

