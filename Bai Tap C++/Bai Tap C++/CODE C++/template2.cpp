#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

template <class T>
class Mang {
	T * a;
	int n;
	int top_idx;
	public:
		Mang() {
			a = nullptr;
			n = 0;
			top_idx = -1;
		}
		Mang(T * a1, int n1) {
			n = n1;
			a = new T[n];
			for(int i=0;i<n;i++)
				a[i] = a1[i];
			top_idx = n-1;
		}
		Mang(int n1) {
			n = n1;
			a = new T[n];
			top_idx = 0;
		}
		~Mang() {
			if(a!=nullptr)
				delete [] a;
		}
		void insert(T item) {
			a[top_idx] = item;
			top_idx++;
		}
		void print()const {
			for(int i=0;i<top_idx-1;i++)
				cout << a[i] << ", ";
			cout << a[top_idx-1];
		}
		void remove() {
			top_idx --;
		}
};
//----------------------------------------------------//
class Hocsinh {
	public:
		Hocsinh() {			
		}
		Hocsinh(char * hoten1, int tuoi1, float dtb1) {
			strcpy(hoten, hoten1);
			tuoi = tuoi1;
			dtb = dtb1;
		}
		friend ostream & operator << (ostream & os, Hocsinh & r);
		friend istream & operator >> (istream & is, Hocsinh & r);
		bool operator < (const Hocsinh & r);
		friend void sapxep(Hocsinh a[], int n);
	private:
		char hoten[55];
		int tuoi;
		float dtb;
};

ostream & operator << (ostream & os, Hocsinh & r) {
	os << r.hoten << ", " << r.tuoi << ", " << r.dtb << endl;
	return os;
}

istream & operator >> (istream & is, Hocsinh & r) {
	cout << "Nhap ho va ten:";
	is >> r.hoten;
	cout << "Nhap tuoi:";
	is >> r.tuoi;
	cout << "Nhap diem trung binh:";
	is >> r.dtb;
	return is;
}
bool Hocsinh::operator < (const Hocsinh & r) {
	// so sanh theo diem trung binh
	if(dtb<r.dtb)
		return true;
	return false;
}
void sapxep(Hocsinh a[], int n) {
	sort(a, a+n); // goi tu thu vien algorithm
}
int main()
{
	Mang<int> mi(10);
	Mang<float> mf(5);
	mf.insert(1.0f);
	mf.insert(1.5f);
	mi.insert(4);
	mi.insert(14);
	mi.print();
	cout << endl;
	mf.print();
	
	Mang<Hocsinh> mh(5);
	Hocsinh hs1("Kim Tan", 23, 3.4f);
	mh.insert(hs1);
	Hocsinh hs2("Le Roi", 23, 3.4f);
	mh.insert(hs2);
	cout << endl;
	mh.print();
	
	//mh.remove();
	mh.
	cout << endl;
	mh.print();
	
	return 0;
}

