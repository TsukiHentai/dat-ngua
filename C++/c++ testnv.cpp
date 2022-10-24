
#include<iostream>
#include<string.h>
using namespace std;
class testnv
{
	private:
		int manv;
		string ten;
		float luong;
	public:
		testnv()
		{
			manv=0;
			ten="";
			luong=0;
		}
		testnv(int manv,string ten,float luong)
		{
			this->manv=manv;
			this->ten=ten;
			this->luong=luong;
		}
		~testnv()
		{
		}
		friend void nhap(testnv a);
		friend void in(testnv a);

};
void nhap(testnv a)
{

	a.manv=20;
	a.ten="haogn";
	a.luong=20391029310;
	//t2.testnv(30,"duc",2930129312390);
}
void in(testnv a)
{
	cout<<"Thong tin nv1: "<<a.manv<<a.ten<<a.luong;
}
int main()
{
	testnv b;
	nhap(b);
	in(b);
	return 0;
}

