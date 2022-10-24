#include<iostream>
#include<math.h>
using namespace std;
class cv
{	
	int spt;
	float *a;
	public:
		cv()
		{
		}
		cv(int spt)
		{
			this->spt=spt;
			a=new float[spt];
		}
		void nhap()
		{
			cout<<"Nhap so phan tu:";
			cin>>spt;
			a=new float[spt];
			for(int i=0;i<spt;i++)
			{
				cin>>a[i];
			}
		}
		void in();
		cv(const cv &n)
		{
			this->spt=n.spt;
			a=new float[spt];
			for(int i=0;i<spt;i++)
			{
				this->a[i]=n.a[i];
			}
		}
		~cv(){}
		float& operator[](int index)
		{
			return a[index];
		}
		friend void gangiatri(cv &g,int j,float val);
		friend void chieudai(cv g);
};
void chieudai(cv g)
{	
	float s=0;
	for(int i=0;i<g.spt;i++)
		{
			s+=pow(g.a[i],2);
		}
	cout<<sqrt(s);
}
void gangiatri(cv &g,int j,float val)
{
	g.a[j]=val;
}
void cv::in()
{			
	for(int i=0;i<spt;i++)
			{
				cout<<" "<<a[i];
			}
}
int main()
{
	cv s;
	s.nhap();
	//s.in();
	chieudai(s);
}
