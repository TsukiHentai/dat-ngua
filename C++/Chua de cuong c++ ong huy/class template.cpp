#include<iostream>
using namespace std;
template <class a>
class songuyen
{
	a x;
	public:
		songuyen()
		{
			x=0;
		}
		songuyen(int x)
		{
			this->x=x;
		}
		void xuat()
		{
			cout<<x;
		}	
};

int main()
{
	songuyen <int>b(6);
	b.xuat();
}
