// using the fill character
#include <iostream>     // std::cout
using namespace std;

int main () {
  char prev;

  cout.width (10);
  cout << 40 << '\n';

  prev = cout.fill ('x');
  
  cout << prev << '\n';
  
  cout.width (10);
  cout << 40 << '\n';

  cout.fill();
  cout.width (10);
  cout << 50 << '\n';

  return 0;
}
