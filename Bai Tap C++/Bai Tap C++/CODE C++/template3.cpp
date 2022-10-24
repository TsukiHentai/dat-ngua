#include <iostream>
#include <stack> // for stack
using namespace std;
int main()
{
	int n;
	char digits[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	cout << "Nhap n=";
	cin >> n;
	int base;
	cout << "Nhap co so muon chuyen sang:";
	cin >> base;
	stack<char> stk;
	while(n)
	{
		stk.push(digits[n%base]);
		n /= base;
	}
	while(!stk.empty())
	{
		cout << stk.top();
		stk.pop();
	}
	return 0;
}

