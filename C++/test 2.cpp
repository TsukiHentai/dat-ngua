#include<iostream>
using namespace std;
template class tmax
{
	template a[255];
	int n;
	public:
		tmax(int n)
		{
			n=this->n;
		}
		int vitri();	
};
int tmax::vitri()
{
	int max=0;
	for(int i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max=i;
		}
	}
	return max;
}
int main()
{
	tmax a;
	a.vitri(6);
	return 0;
}
