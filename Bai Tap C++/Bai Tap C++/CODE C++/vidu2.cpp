#include <iostream>
using namespace std;

int tonguoc(int m);

int main()
{
	int n;
	cout << "Nhap n=";
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		int tam = tonguoc(i);
		if(tam<=n&&tonguoc(tam)==i&&tam>i)
			cout << i << ", " << tam << endl; 
		/*
		for(int j=i+1;j<=n;j++)
			if(tam==j&&tonguoc(j)==i)
				cout << i << ", " << j << endl; 
		*/
	}	
	return 0;
}
int tonguoc(int m)
{
	int tam = 1;
	for(int i=2;i<=(m/2);i++)
		if(m%i==0)
			tam+=i;		
	return tam;
}
