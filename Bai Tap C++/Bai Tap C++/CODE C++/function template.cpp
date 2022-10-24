// function template
#include <iostream>

using namespace std;

template <class T>
class mypair {
    T a, b;
 public:
    mypair (T first, T second) {
		a=first; 
		b=second;
	}
    T getmax(); // Tim max
    T add();  // Cong
    T subb(); // Tru 
    T mul(); // Nhan
	T div(); // Chia
	void swap (T &x, T &y);
};
//-------------------------------------------//
template <class T>
T mypair<T>::getmax ()
{
  T retval;
  retval = a>b? a : b;
  return retval;
}
//-------------------------------------------//
template <class T>
T mypair<T>::add ()
{
  return (a+b);
}
//-------------------------------------------//
template <class T>
T mypair<T>::subb ()
{
  return (a-b);
}
//-------------------------------------------//
template <class T>
T mypair<T>::mul ()
{
  return (a*b);
}
//-------------------------------------------//
template <class T>
T mypair<T>::div ()
{
  return (a/b);
}
//-------------------------------------------//
template <class T>
void swap (T &x, T &y) {
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
  	cout << obj1.mul();
  	swap<int>(myobject.a,myobject.b);
return 0;
}
