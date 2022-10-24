#include <iostream>

using namespace std;
class Polynomial
{
	float * a; // coefficients
	int deg; // degree
	public:
		Polynomial(float a1[]=nullptr, int n=-1)
		{
			if(n>=0)
			{
				a = new float[n+1];
				deg = n;
				for(int i=0;i<=n;i++)
					a[i] = a1[i];
			}
		}
		~Polynomial()
		{
			delete [] a;
		}
		friend ostream & operator << (ostream &, const Polynomial & r);
		friend istream & operator >> (istream &, Polynomial & r);	
		float operator()(float x)const;
		Polynomial operator=(const Polynomial & r);
		Polynomial operator+(const Polynomial & r);
};

Polynomial Polynomial::operator=(const Polynomial & r)
{
	if(a!=nullptr)
		delete [] a;
	deg = r.deg;
	a = new float[deg+1];
	for(int i=0;i<=deg;i++)
		a[i] = r.a[i];
	return * this;
}

Polynomial Polynomial::operator+(const Polynomial & r)
{
	int nDeg = (deg>r.deg)?(deg):(r.deg);
	float * na = new float[nDeg+1];
	int i;
	if(deg>r.deg)
	{
		for(i=deg;i>r.deg;i--)
			na[i] = a[i];
		for(i=r.deg;i>=0;i--)
			na[i] = a[i] + r.a[i];
	}else
	{
		for(i=r.deg;i>deg;i--)
			na[i] = r.a[i];
		for(i=deg;i>=0;i--)
			na[i] = a[i] + r.a[i];
	}
	return Polynomial(na, nDeg);
}
ostream & operator << (ostream &os, const Polynomial & r)
{
	os << r.a[r.deg] << "*x^" << r.deg;
	for(int i=r.deg-1;i>0;i--)
	{
		if(0.0f!=r.a[i])
			if(r.a[i]>0)
				os << "+" << r.a[i] << "*x^" << i;
			else
				os << r.a[i] << "*x^" << i;
	}
	if(r.a[0]>0)
		os << "+" << r.a[0];
	else
		os << r.a[0];
	return os;
}

istream & operator >> (istream &is, Polynomial & r)
{
	cout << "Nhap bac cua da thuc:";
	is >> r.deg;
	if(r.a!=nullptr)
		delete [] r.a;
	r.a = new float[r.deg+1];
	for(int i=0;i<=r.deg;i++)
	{
		cout << "Nhap a[" << i <<"]=";
		is >> r.a[i];
	}
	return is;
}

float Polynomial::operator()(float x)const
{
	float tam = a[deg];
	for(int i=deg-1;i>=0;i--)
		tam = tam*x + a[i];
	return tam;
}

int main()
{
	Polynomial fx;
	
	
	cin >> fx;
	cout << fx << endl;
	Polynomial gx;
	cin >> gx;
	/*
	cout << gx << endl;
	hx = fx + gx;
	cout << hx;
	*/
	return 0;
}

