#include <iostream>
using namespace std;

class Dathuc
{
	float *hs;
	int n;
    public:
		Dathuc();
		Dathuc(float a[], int n);
		Dathuc(const Dathuc &f);
		~Dathuc()
		{
			if(hs)
				delete [] hs;
		}
		friend ostream & operator << (ostream &, Dathuc &);
		friend istream & operator >> (istream &, Dathuc &);
		float operator[](int i)const // index operator - toan tu chi so
		{
			if(i>=0&&i<=n)
				return hs[i];
			return 0.0f;
		}
		Dathuc & operator=(const Dathuc & f);
		bool operator==(const Dathuc &f);
		Dathuc operator + (const Dathuc &);
		Dathuc operator - (const Dathuc &);
		Dathuc operator * (const Dathuc &);
		Dathuc operator * (float);
		float operator()(float x)const
		{
			return evalue(x);
		}
		float evalue(float x)const;
};

Dathuc::Dathuc(const Dathuc & f)
{
	n = f.n;
	hs = new float[n+1];
	int i;
	for(i=0;i<=n;++i)
		hs[i] = f[i];
}
Dathuc Dathuc::operator * (const Dathuc &f)
{
	int i, j;
	int n1;
	float * hs1;
	float tam;
	n1 = n + f.n;
	
	hs1 = new float[n1+1];
	for(i=0;i<=n1;++i)
	{
		tam = 0.0f;
		for(j=0;j<=i&&j<=n;++j)
			tam += hs[j] * f[i-j];
		hs1[i] = tam;
	}
	
	return Dathuc(hs1, n1);
}

Dathuc Dathuc::operator * (float d)
{
	int i;
	int n1;
	float * hs1;
	n1 = n;
	hs1 = new float[n1];
	for(i=0;i<=n1;++i)
		hs1[i] = (Dathuc(*this))[i] * d;
	return Dathuc(hs1, n1);
}

bool Dathuc::operator==(const Dathuc &f)
{
	int i;
	if(n==f.n)
	{
		for(i=0;i<=n;++i)
			if(hs[i]-f[i]==0.0f)
				return false;
		return true;
	}
	return false;
}

Dathuc Dathuc::operator + (const Dathuc &f)
{
	int i;
	int n1;
	float * hs1;
	if(n>f.n)
		n1 = n;
	else
		n1 = f.n;
	hs1 = new float[n1+1];
	for(i=0;i<=n1;++i)
		hs1[i] = (*this)[i] + f[i];
	return Dathuc(hs1, n1);
}

Dathuc Dathuc::operator - (const Dathuc &f)
{
	int i;
	int n1;
	float * hs1;
	Dathuc tam = (*this)*(-1.0f);
	Dathuc t = (tam + f);
	n1 = t.n+1;
	while(t[n1]==0.0f&&n1>=0)
		n1--;
	hs1 = new float[n1+1];
	for(i=0;i<=n1;++i)
		hs1[i] = t[i]*(-1);
	return Dathuc(hs1, n1);
}

ostream & operator << (ostream & os, Dathuc & f)
{
	int i;
	for(i=f.n;i>0;--i)
	{
		if(0.0f!=f[i])
		{
			os << f[i] << "*x^" << i;
			if(f[i-1]>0)
				os << " + ";
			else
				os << " ";
		}
	}
	os << f[0];
	return os;
}
istream & operator >> (istream & is, Dathuc & f)
{
	int i;
	cout << "Nhap bac da thuc:";
	is >> f.n;
	if(f.hs)
		delete [] f.hs;
	f.hs = new float[f.n+1];
	for(i=f.n;i>=0;--i)
	{
		cout << "Nhap he so bac " << i <<":";
		is >> f.hs[i];
	}
	return is;
}

Dathuc::Dathuc()
{
	n = -1;
	hs = NULL;
}

Dathuc::Dathuc(float a[], int n1)
{
	n = n1;
	hs = new float[n+1];
	int i;
	for(i=0;i<=n;++i)
		hs[i] = a[i];
}

Dathuc & Dathuc::operator=(const Dathuc &f)
{
	int i;
	if(!(*this==f))
	{
		if(hs)
			delete [] hs;
		n = f.n;
		hs = new float[n+1];
		for(i=0;i<=n;++i)
			hs[i] = f[i];
	}
	return *this;
}

float Dathuc::evalue(float x)const
{
	float tam = hs[n];
	int i;
	for(i=n;i>0;--i)
		tam = tam*x + hs[i-1];
	return tam;
}

int main()
{
	float a[] = {1.0f, -1.2f};
	int i;
	Dathuc f1;
	Dathuc f2;
	cin >> f1;
	cin >> f2;
	cout << f1 << endl;
	cout << f2 << endl;
	
	Dathuc f3 = (f1 + f2);
	Dathuc f4 = (f1 * f2 * f3);
	cout << f1 << endl;
	cout << f4 << endl;
	cout << f3 << endl;
	cout << f2 << endl;
	cout << f1(1.2f) << endl;
	f3 = (f4 - f2);
	cout << f3 << endl;
	system("pause");
	return 0;
}

