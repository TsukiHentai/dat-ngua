// modify flags
#include <iostream> //std::cout, std::ios
using namespace std;
int main () {
  cout.flags (ios::right | ios::hex 
  				         | ios::showbase);
  cout.width (10);
  cout.fill('$');
  cout << 100 << '\n';
  printf("%10.3f", 3.14159);
  return 0;
}

