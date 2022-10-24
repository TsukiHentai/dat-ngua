#include <iostream>
using namespace std;

union product {
    int weight;
    double price;
} apple;

struct mytypes_t {
char c;
int i;
float f;
} mytypes;

/*
union product {
    int weight;
    double price;
} apple;
*/
/*

union mix_t {
    long l;
    struct {
        short hi;
        short lo;
    } s;
    char c[4];
} mix;
*/
int main()
{
	/*
	cout << "Size of l: " << sizeof(mix.l) << " bytes" << endl;
	cout << "Size of hi: " << sizeof(mix.s.hi) << " bytes" << endl;
	cout << "Size of lo: " << sizeof(mix.s.lo) << " bytes" << endl;
	cout << "Size of c[0]: " << sizeof(mix.c[0]) << " bytes" << endl;
	cout << "Size of c[1]: " << sizeof(mix.c[1]) << " bytes" << endl;
	cout << "Size of c[2]: " << sizeof(mix.c[2]) << " bytes" << endl;
	cout << "Size of c[3]: " << sizeof(mix.c[3]) << " bytes" << endl;
	cout << "Size of s: " << sizeof(mix.s) << " bytes" << endl;
	cout << "Size of mix: " << sizeof(mix) << " bytes";
	*/
	
	/*
	cout << "Size of apple: " << sizeof(apple.weight) << " bytes" << endl;
	cout << "Size of apple: " << sizeof(apple.price) << " bytes" << endl;
	cout << "Size of apple: " << sizeof(apple) << " bytes" << endl;
	*/
	cout << "Size of char: " << sizeof(mytypes.c) << " bytes" << endl;
	cout << "Size of int: " << sizeof(mytypes.i) << " bytes" << endl;
	cout << "Size of float: " << sizeof(mytypes.f) << " bytes" << endl;
	
	cout << "Size of mytypes: " << sizeof(mytypes) << " bytes" << endl;
	
	
    return 0;
}
