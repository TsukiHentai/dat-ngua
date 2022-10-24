#include <iostream>
#include <fstream>
#include <cstring>
#include <algorithm>

using namespace std;
template <typename T>
class Mang
{
	public:
		Mang();
		Mang(T * data, int n);
		~Mang();
		void sort();
		int timkiem(const T & key) const;
		void ghifile(char * tenfile);
		void docfile(char * tenfile);
		int timmax()const;
		int timmin()const;
		void xuat()const;
		void nhap();
		bool ktRong()const;
	private:
		T * data;
		int n;
};

template <typename T>
Mang<T>::Mang()
{
	n = 0;
	data = nullptr;
}

template <typename T>
Mang<T>::Mang(T * data1, int n1)
{
	n = n1;
	data = new T[n];
	for(int i=0;i<n;i++)
		data[i] = data1[i];
}

template <typename T>
Mang<T>::~Mang()
{
	if(n>0)
		delete [] data;
	n = 0;
}

template <typename T>
void Mang<T>::xuat()const
{
	for(int i=0;i<n;i++)
		cout << data[i] << endl;
}

template <typename T>
void Mang<T>::sort()
{
	int i, j;
	T tam;
	for(i=1;i<n;i++)
	{
		j = i;
		while(j>0&&data[j-1]>data[j])
		{
			tam = data[j-1];
			data[j-1] = data[j];
			data[j] = tam;
			j --;
		}
	}
}
template <typename T>
int Mang<T>::timkiem(const T & key)const
{
	for(int i=0;i<n;i++)
		if(data[i]==key)
			return i;
	return -1;
}


template <typename T>
int Mang<T>::timmax()const
{
	int kq = 0;
	for(int i=1;i<n;i++)
		if(data[i]>data[kq])
			kq = i;
	return kq;
}
template <typename T>
int Mang<T>::timmin()const
{
	int kq = 0;
	for(int i=1;i<n;i++)
		if(data[i]<data[kq])
			kq = i;
	return kq;
}

template <typename T>
void Mang<T>::nhap()
{
	if(n>0)
	{
		delete [] data;
		n = 0;
	}
	cout << "Nhap n=";
	cin >> n;
	data = new T[n];
	for(int i=0;i<n;i++)
	{
		cout << "Nhap phan tu thu " << i << ":";
		cin >> data[i];
	}
}

template <typename T>
void Mang<T>::ghifile(char * tenfile)
{
	ofstream fout(tenfile);
	fout << n << endl;
	for(int i=0;i<n;i++)
		fout << data[i] << endl;
	fout.close();
}

class Hocsinh
{
	public:
		Hocsinh(char hoten1[]="", int tuoi1=0, float dtb1=0)
		{
			strcpy(hoten, hoten1);
			tuoi = tuoi1;
			dtb = dtb1;
		}
		friend ostream & operator << (ostream & os, Hocsinh & r);
		friend istream & operator >> (istream & is, Hocsinh & r);
		bool operator > (Hocsinh & r)
		{
			return dtb>r.dtb;
		}
		bool operator < (const Hocsinh & r);
		friend void sapxep(Hocsinh a[], int n);
	private:
		char hoten[55];
		int tuoi;
		float dtb;
};

ostream & operator << (ostream & os, Hocsinh & r)
{
	os << r.hoten << "," << r.tuoi << ", " << r.dtb << endl;
	return os;
}

istream & operator >> (istream & is, Hocsinh & r)
{
	cout << "Nhap ho va ten:";
	is >> r.hoten;
	cout << "Nhap tuoi:";
	is >> r.tuoi;
	cout << "Nhap diem trung binh:";
	is >> r.dtb;
	return is;
}
bool Hocsinh::operator < (const Hocsinh & r)
{
	// so sanh theo diem trung binh
	if(dtb<r.dtb)
		return true;
	return false;
}
void sapxep(Hocsinh a[], int n)
{
	sort(a, a+n); // goi tu thu vien algorithm
}

int main()
{
	int a1[] = {10, 2, 13, 24};
	string s1[] = {"Kim Tan", "Bi Rain", "Le Roi", "Tran Trang"};
	int n1 = 4;
	//Mang<int> mi(a1, n1);
	//Mang<string> ms(s1, n1);
	
	Mang<int> mi;
	Mang<string> ms;
	Mang<Hocsinh> mhs;
	mhs.nhap();
	mi.nhap();
	ms.nhap();
	mhs.ghifile("hocsinh.txt");
	mhs.sort();
	ms.sort();
	mi.sort();
	ms.xuat();
	mi.xuat();
	mhs.xuat();
	int kq = ms.timkiem(string("Teo"));
	if(kq>=0)
		cout << "Tim thay Teo o vi tri " << kq << endl;
	else
		cout << "Khong tim thay Teo" << endl;
	return 0;
}

