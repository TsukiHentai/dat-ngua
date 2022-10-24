// istream::putback example
#include <iostream>     // std::cin, std::cout
#include <string>       // std::string
using namespace std;
int main () {
  cout << "Please, enter a number or a word: ";
  char c = cin.get();
  if ( (c >= '0') && (c <= '9') ) {
    int n;
   // cin.putback (c);
    cin >> n;
    cout << "You entered a number: " << n << '\n';
  } else {
    string str;
    //cin.putback (c);
    getline (cin,str);
    cout << "You entered a word: " << str << '\n';
  }
  return 0;
}
