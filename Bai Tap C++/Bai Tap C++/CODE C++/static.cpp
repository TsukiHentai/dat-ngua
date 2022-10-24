#include <iostream>
using namespace std;
class A {
	char c;
	static int number;	 //  Number of created objects (static data)
public:
	static void setNum() { // Static function to initialize number
  		number=0;
	}	
	
	A() { //Constructor
		number++; 
		cout<< "\n"<< "Constructor " << number;
	} 
  	~A() { //Destructor
  		number--; 
		cout<< "\n"<< "Destructor "<< number;
	} 
};

int A::number;     // Allocating memory for number

// ----- Main function ----- //
int main(){
cout << "\n Entering 1. BLOCK............";
 	A::setNum();	// The static function is called
 	A a,b,c;
  	{
    	cout << "\n Entering 2. BLOCK............";
    	A d,e;
    	cout <<"\n Exiting 2. BLOCK............";
  	}
  	cout<<"\n Exiting 1. BLOCK............";
  	return 0;
}

