#include <fstream> // for ifstream & ofstream
#include <iostream> // for ifstream & ofstream
using namespace std;

int main()
{
	char ten[55];
	int tuoi;
	bool gt;
	float chieucao;
	ifstream fin("data1.txt"); // mo file input
	fin.get(ten, 55, '\n');
	fin >> tuoi;
	fin >> gt;
	fin >> chieucao;
	fin.close(); // dong file
	
	ofstream fout("out1.txt"); // mo file output
	fout << "Ten:" << ten << endl;
	fout << "Tuoi:" << tuoi << endl;
	fout << "Gioi tinh:" << gt << endl;
	fout << "Chieu cao:";
	fout.precision(2); // chi tinh 2 so
	fout.width(5);
	fout << chieucao << endl;
	fout.close(); // dong file
	
	return 0;
}

