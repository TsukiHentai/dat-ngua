#include <iostream>

using namespace std;

class Phanso // khai bao lop phan so
{
	private:
		int ts, ms; // data members
	public:
		Phanso(int ts1=0, int ms1=1); // ham khoi tao, constructor, initialization
		~Phanso(); // ham huy, destructor
		friend ostream & operator << (ostream & os, Phanso & r); // ham toan tu xuat
		friend istream & operator >> (istream & is, Phanso & r); // ham toan tu nhap
		Phanso cong(Phanso & r); // ham cong hai phan so, tra ve phan so tong
		Phanso tru(Phanso & r); // ham tru hai phan so, tra ve phan so hieu
		Phanso nhan(Phanso & r); // ham nhan hai phan so, tra ve phan so tich
}; // ket thuc khai bao

// cai dat cac phuong thuc - method cua lop Phanso
Phanso::Phanso(int ts1, int ms1) // ham khoi tao
{
	ts = ts1;
	ms = ms1;
}

Phanso::~Phanso()
{
	// giai phong tai nguyen - free resources
}

ostream & operator << (ostream & os, Phanso & r)
{
	os << r.ts << "/" << r.ms;
	return os;
}

istream & operator >> (istream & is, Phanso & r)
{
	cout << "Nhap tu so:";
	is >> r.ts;
	cout << "Nhap mau so:";
	is >> r.ms;
	return is;
}

Phanso Phanso::cong(Phanso & r)
{
	int ts1 = (ts*r.ms+ms*r.ts);
	int ms1 = ms * r.ms;
	return Phanso(ts1, ms1);
}

int main()
{
	Phanso p1, p2;
	cin >> p1;
	cout << "P1=" << p1 << endl;
	cin >> p2;
	cout << "P2=" << p2 << endl;
	Phanso tong = p1.cong(p2);
	cout << "P1+P2=" << tong << endl;
	return 0;
}

