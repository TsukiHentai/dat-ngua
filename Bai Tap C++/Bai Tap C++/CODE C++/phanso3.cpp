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
		Phanso(int ts1, int ms1):ts(ts1), ms(ms1){}; // copy constructor
		~Phanso(); // ham huy, destructor
		friend ostream & operator << (ostream & os, Phanso & r); // ham toan tu xuat
		friend istream & operator >> (istream & is, Phanso & r); // ham toan tu nhap
		bool operator < (const Phanso & r);
		Phanso operator+(const Phanso & r); // ham cong hai phan so, tra ve phan so tong
		Phanso operator+(int n); // ham cong phan so voi 1 so nguyen
		Phanso operator++(); // ham tang phan so len 1 don vi, cu phap truoc
		Phanso operator++(int); // ham tang phan so len 1 don vi, cu phap sau
		Phanso tru(Phanso & r); // ham tru hai phan so, tra ve phan so hieu
		Phanso nhan(Phanso & r); // ham nhan hai phan so, tra ve phan so tich
		static int count;
		static int UCLN(int a, int b);
}; // ket thuc khai bao
Phanso Phanso::operator+(int n)
{
	int ts1 = (ts+ms*n);
	int ms1 = ms;
	return Phanso(ts1, ms1);
}
Phanso Phanso::operator++()
{
	ts += (ts+ms);
	return Phanso(ts, ms);
}

Phanso Phanso::operator++(int)
{
	ts += (ts+ms);
	return Phanso(ts-ms, ms);
}

int Phanso::count = 0;
int Phanso::UCLN(int a, int b)
{
	for(auto i=a;i>=1;i--)
		if(a%i==0&&b%i==0)
			return i;
	return 1;
}
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
	count ++;
	ts = 0;
	ms = 1;
	//cout << "Goi ham cau tu mac dinh" << endl;
} 

Phanso::Phanso(const Phanso & r) // ham khoi tao
{
	count ++;
	ts = r.ts;
	ms = r.ms;
	//cout << "Goi ham cau tu copy" << endl;
}

Phanso::~Phanso()
{
	count --;
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

Phanso Phanso::operator+(const Phanso & r)
{
	int ts1 = (ts*r.ms+ms*r.ts);
	int ms1 = ms * r.ms;
	return Phanso(ts1, ms1);
}


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
	/*
	{
		Phanso ps1, ps2;
		cout << "So doi tuong cua lop phan so hien nay la: " << Phanso::count << endl;
	}
	cout << "So doi tuong cua lop phan so hien nay la: " << Phanso::count << endl;
	Phanso * a = new Phanso[100];
	cout << "So doi tuong cua lop phan so hien nay la: " << Phanso::count << endl;
	int n = 3;
	for(int i=0;i<n;i++)
		cin >> a[i];
	sort(a, a+n);
	for(int i=0;i<n;i++)
		cout << a[i] << endl;
	delete [] a;
	cout << "So doi tuong cua lop phan so hien nay la: " << Phanso::count << endl;
	*/
	//cout << "UCLN(10, 8)=" << Phanso::UCLN(10, 8);
	Phanso ps;
	Phanso ps2 = ps++;
	cout << ps << endl;
	cout << ps2;
	return 0;
}

