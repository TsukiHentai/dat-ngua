#include <iostream>
#include <vector> // for vector class
using namespace std;
//-------------------------------------------//
class Matrix {
	public:
		Matrix();
		Matrix(int n, int m);
		Matrix(const Matrix & rhs);
		~Matrix();
		friend ostream& operator<< (ostream& os, Matrix& rhs);
		friend istream& operator>> (istream& is, Matrix& rhs);
		bool operator== (const Matrix& rhs)const;
		bool operator!= (const Matrix& rhs)const;
		Matrix operator+ (Matrix& r);
		Matrix operator- (Matrix& r);
		int yenngua() const;
	private:
		vector<vector<int> > data;
		int n; // so hang
		int m; // so cot
};
//-------------------------------------------//
Matrix :: Matrix() {
	n = m = 0;	
}
//-------------------------------------------//
Matrix :: Matrix(int n1, int m1) {
	n = n1;
	m = m1;
	data = vector<vector<int> > (n, vector<int>(m, 0));
}
//-------------------------------------------//
Matrix :: Matrix(const Matrix & r) {
	n = r.n;
	m = r.m;
	data = vector<vector<int> > (n, vector<int>(m, 0));
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			data[i][j] = r.data[i][j];
}
//-------------------------------------------//
Matrix :: ~Matrix() {
	
}
//-------------------------------------------//
ostream& operator << (ostream& os, Matrix& r) {
	for(int i=0;i<r.n;i++) {
		for(int j=0;j<r.m;j++)
			os << r.data[i][j] << " ";
		os << endl;
	}
		
	return os;
}
//-------------------------------------------//
istream & operator >> (istream& is, Matrix& r) {
	cout << "Nhap so hang:";
	is >> r.n;
	cout << "Nhap so cot:";
	is >> r.m;
	
	r.data = vector<vector<int> > (r.n, vector<int>(r.m, 0));
	for(int i=0;i<r.n;i++)
		for(int j=0;j<r.m;j++) {
			cout << "Nhap phan tu a[" << i << "][" << j <<"]=";
			is >> r.data[i][j];
		}
	return is;
}
//-------------------------------------------//
bool Matrix::operator !=(const Matrix& r)const {
	if(n!=r.n||m!=r.m)
		return true;
	for(int i=0;i<r.n;i++)
		for(int j=0;j<r.m;j++)
			if(data[i][j]!=r.data[i][j])
				return true;
	return false;
}
//-------------------------------------------//
bool Matrix::operator ==(const Matrix & r)const {
	return !(*this!=r);
}
//-------------------------------------------//
Matrix Matrix :: operator+ (Matrix& r) {
	Matrix temp(n, m);
	for(int i=0;i<r.n;i++)
		for(int j=0;j<r.m;j++)
			temp.data[i][j] = data[i][j] + r.data[i][j];
	return temp;
}
//-------------------------------------------//
Matrix Matrix :: operator- (Matrix& r) {
	Matrix temp(n, m);
	for(int i=0;i<r.n;i++)
		for(int j=0;j<r.m;j++)
			temp.data[i][j] = data[i][j] - r.data[i][j];
	return temp;
}
//-------------------------------------------//
int Matrix::yenngua() const {	
}
//-------------------------------------------//
int main() {
	Matrix m1, m2;
	
	cin >> m1;
	cout << m1;

	cin >> m2;
	cout << m2;
	
	Matrix m3 = m1 + m2;
	cout << m3;
	
	return 0;
}

