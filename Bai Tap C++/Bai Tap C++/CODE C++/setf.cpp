// modifying flags with setf/unsetf
#include <iostream> // std::cout, std::ios
using namespace std;

int main () {
  cout.setf (ios::hex, ios::basefield);  // set hex as the basefield
  cout.setf (ios::showbase);             // activate showbase
  cout << 100 << '\n';
  cout.unsetf (ios::showbase);           // deactivate showbase
  cout << 100 << '\n';
  return 0;
}
