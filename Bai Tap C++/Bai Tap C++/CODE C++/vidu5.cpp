#include <iostream>
#include <algorithm>
using namespace std;

string mul1(const string & s, int n);
int compare_2str(string &s1, string & s2);

int main()
{
	string s;
	//cout << mul1("12", 2);
	while(cin >> s)
	{
		string ss  = s;
		sort(ss.begin(), ss.end());
		int n = s.length();
		bool flag = true;
		for(int i=1;i<=n;i++)
		{
			string temp = mul1(s, i);
			if(compare_2str(ss, temp)!=1)
			{
				flag = false;
				break;
			}
		}
		if(flag)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}

string mul1(const string & s, int n)
{
	int len=s.length();
	string temp(len,'\0');
	int carry;
	int remain = 0;
	for(int i=len-1;i>=0;i--)
	{
		carry = (s[i]-'0')*n;
		temp[i] = '0'+((carry+remain)%10);
		remain = (carry+remain)/10;
	}
	return temp;
}

int compare_2str(string &s1, string & s2)
{
	//string ss1 = s1;
	string ss2 = s2;
	
	//std::sort(ss1.begin(), ss1.end());
	std::sort(ss2.begin(), ss2.end());
	if(s1.compare(ss2)==0)
		return 1;
	return 0;
}
