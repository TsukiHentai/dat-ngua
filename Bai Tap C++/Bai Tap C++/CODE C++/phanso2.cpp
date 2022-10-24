#include <iostream>
#include <algorithm>

using namespace std;

class Phanso // khai bao lop phan so
{
	private:
		int ts, ms; // data members
	public:
		Phanso(); // ham khoi tao, constructor, initialization
		Phanso(const Phanso & r); // copy constructor
		~Phanso(); // ham huy, destructor
		friend ostream & operator << (ostream & os, Phanso & r); // ham toan tu xuat
		friend istream & operator >> (istream & is, Phanso & r); // ham toan tu nhap
		bool operator < (const Phanso & r);
		Phanso cong(Phanso & r); // ham cong hai phan so, tra ve phan so tong
		Phanso tru(Phanso & r); // ham tru hai phan so, tra ve phan so hieu
		Phanso nhan(Phanso & r); // ham nhan hai phan so, tra ve phan so tich
}; // ket thuc khai bao
bool Phanso::operator < (const Phanso & r)
{
	int ts1 = ts*r.ms-ms*r.ts;
	int ms1 = ms*r.ms;
	if(ts1*ms1>0) // sap xep giam
		return true;
	return false;
}
// cai dat cac phuong thuc - method cua lop Phanso
Phanso::Phanso() // ham khoi tao
{
	ts = 0;
	ms = 1;
	//cout << "Goi ham cau tu mac dinh" << endl;
} 

Phanso::Phanso(const Phanso & r) // ham khoi tao
{
	ts = r.ts;
	ms = r.ms;
	//cout << "Goi ham cau tu copy" << endl;
}

Phanso::~Phanso()
{
	// giai phong tai nguyen - free resources
	//cout << "Goi ham huy tu" << endl;
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
/*
Phanso Phanso::cong(Phanso & r)
{
	int ts1 = (ts*r.ms+ms*r.ts);
	int ms1 = ms * r.ms;
	return Phanso(ts1, ms1);
}
*/
int main()
{
	/*
	{
		Phanso b; // ham cau tu va huy tu se duoc goi toi
	}
	
	Phanso p1, p2; // goi ham cau tu mac dinh
	Phanso p3(p1); // goi ham cau tu copy
	cin >> p1;
	cout << "P1=" << p1 << endl;
	cin >> p2;
	cout << "P2=" << p2 << endl;
	//Phanso tong = p1.cong(p2);
	//cout << "P1+P2=" << tong << endl;
	*/
	Phanso a[100];
	int n = 3;
	for(int i=0;i<n;i++)
		cin >> a[i];
	sort(a, a+n);
	for(int i=0;i<n;i++)
		cout << a[i] << endl;
	return 0;
}

