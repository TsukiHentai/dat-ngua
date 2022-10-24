#include <iostream>

using namespace std;

class Donthuc // khai bao lop phan so
{
	private:
		float a, b; // data members
	public:
		Donthuc(float a1=0, float b1=0); // ham khoi tao, constructor, initialization
		~Donthuc(); // ham huy, destructor
		friend ostream & operator << (ostream & os, Donthuc & r); // ham toan tu xuat
		friend istream & operator >> (istream & is, Donthuc & r); // ham toan tu nhap
		Donthuc operator+(const Donthuc & r); // ham cong hai phan so, tra ve phan so tong
		float operator()(float x)const // toan tu goi ham, functor, vi tu (predicator)
		{
			return a*x + b;
		}
		//scholar.vimaru.edu.vn/tuannh/
}; // ket thuc khai bao

// cai dat cac phuong thuc - method cua lop Donthuc
Donthuc::Donthuc(float a1, float b1) // ham khoi tao
{
	a = a1;
	b = b1;
} 

Donthuc::~Donthuc()
{
}

ostream & operator << (ostream & os, Donthuc & r)
{
	os << r.a << "*x" << "+" << r.b;
	return os;
}

istream & operator >> (istream & is, Donthuc & r)
{
	cout << "Nhap a:";
	is >> r.a;
	cout << "Nhap b:";
	is >> r.b;
	return is;
}

Donthuc Donthuc::operator+(const Donthuc & r)
{
	int a1 = a + r.a;
	int b1 = b + r.b;
	return Donthuc(a1, b1);
}

int main()
{
	Donthuc dt1, dt2; // goi ham cau tu mac dinh
	
	cin >> dt1;
	
	cin >> dt2;
	auto tong = dt1 + dt2;
	cout << "Tong = " << tong << endl;
	float x;
	cout << "Nhap x=";
	cin >> x;
	cout << dt1(x) << endl;
	cout << dt2(x) << endl;
	return 0;
}

