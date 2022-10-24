// class templates
#include <iostream>
using namespace std;
template <class T>
class mypair {
public:
    T a, b;
 public:
    mypair (T first, T second) {
		a = first; b = second;
	}
    T getmax(); 				// Tim max
    T add();  					// Cong
    T subb(); 					// Tru 
    T mul(); 					// Nhan
	T div(); 					// Chia
	void swap(T &x, T &y); 		// Doi cho
};
//-------------------------------------------//
template <class T>
T mypair<T>::getmax () {
	return (a>b)?a:b;
}
//-------------------------------------------//
template <class T>
T mypair<T>::add () {
	return (a+b);
}
//-------------------------------------------//
template <class T>
T mypair<T>::subb () {
	return (a-b);
}
//-------------------------------------------//
template <class T>
T mypair<T>::mul () {
	return (a*b);
}
//-------------------------------------------//
template <class T> 
T mypair<T>::div () {
	return (a/b);
}
//-------------------------------------------//
template <class T>
void mypair<T>::swap (T &x, T &y) {
	T temp = x;
	x = y;
	y = temp;  
}
//-------------------------------------------//
int main () {
	mypair <int> myobject (100, 75);
  	cout << myobject.getmax() << endl;

	mypair <float> obj (34.5, 68.7);
  	cout << obj.add() << endl;
  	
  	mypair <int> obj1 (20, 5);
  	cout << obj1.mul() << endl;  
	
	cout << obj1.a << obj1.b << endl;
	obj1.swap(obj1.a,obj1.b);
	cout << obj1.a << obj1.b;
	
	return 0;
}
