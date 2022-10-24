// modify flags
#include <iostream> // std::cout, std::ios
using namespace std;

int main () 
{
  cout.flags (ios::right | ios::hex | ios::showbase);
  cout.width (10);
  cout << 100 << '\n';
  cout << "0123456789" << '\n';
  //cout << 1000 << '\n';
 // cout << 10000 << '\n';
  return 0;
}
