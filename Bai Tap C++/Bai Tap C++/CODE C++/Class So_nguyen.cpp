#include<iostream>
using namespace std;
//----------------------------//
class So_nguyen {
	int size;
	int* data;
public:
	So_nguyen();
	So_nguyen(int);
	So_nguyen(int,int*);
	~So_nguyen();
	void Print();
	float Avg();
};
//----------------------------//
int main() {
	int arr[] = {5, 9, -6, 10, 2};
	So_nguyen SN(5,arr);
	cout << "Mang in ra la: " << endl;
	SN.Print();
	cout << "Trung binh cong cua day: " << SN.Avg();
	return 0;
}
//----------------------------//
So_nguyen::So_nguyen() {
	size = 0;
	data = NULL;	
}
//----------------------------//
So_nguyen::So_nguyen(int s) {
	size = s;
	data = new int[size];
}
//----------------------------//
So_nguyen::So_nguyen(int s, int *d) {
	size = s;
	data = new int[size];
	for(int i = 0; i < size; i++) {
		data[i] = d[i];
	}
}
//----------------------------//
So_nguyen::~So_nguyen() {
	size = -1;
	delete []data;
	//cout << "Huy tu";
}
//----------------------------//
void So_nguyen::Print() {
	for(int i = 0; i < size; i++)
		cout << data[i] << "  ";	
}
//----------------------------//
float So_nguyen::Avg() {
	int Tong = 0;
	for(int i = 0; i < size; i++)
		Tong = Tong + data[i];
	return (Tong/size);
}
//----------------------------//
