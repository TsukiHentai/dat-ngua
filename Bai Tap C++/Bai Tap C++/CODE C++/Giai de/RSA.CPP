/*
  Name: Mat ma khoa cong khai RSA
  Copyright: Free Minh hoa Bai giang
  Author: Nguyen Xuan Huy
  Date: 04/03/09 15:26
  Description: RSA.CPP
*/
#include <cstdlib>
#include <string>
#include <fstream>
#include <iostream>
#include <Math.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;

// P R O T O T Y P E S
int main();
void Sang(char *, int); // Sang Eratosthene
int Max(int, int);
int Min(int, int);
bool IsPrime(int);
int NextPrime(int);
int GenKey(int , int);
int gcd(int, int);
void ShowKey();
void Euclid(int, int, int &, int &);
int Inv(int, int);
int Exp(int, int, int );
void TestNum(int, int);
void TestStr(int, int);
int NumDigit(int, int);
int Expand(char *);
int GetKey(string, int, int);


const char bl = ' ';
const int mn = 60000;
int p, q, e, d, n, phi; //(d,n): khoa mat, (e,n): khoa cong khai
int SoByte;
const int Maxpq = 17; //373;

int Max(int a, int b) { return (a > b) ? a : b; }
int Min(int a, int b) { return (a > b) ? b : a; }
// z = a^x % n
int Exp(int a, int x, int n)
{
    int z = 1, one = 1;
    a %= n;
    while (x > 0)
    {
      if (x & one == one) z = (z*a) % n;
      x >>= 1;
      a = (a*a) % n;
    }
   return z;
}
// ax % n = 1, (a,n) = 1
int Inv(int a, int n)
{
    int x, y;
    Euclid(a,n,x,y);
    return (x < 0) ? (x + n) : x;
}
// Thuat toan Euclid mo rong
// Cho a,b. Tim x, y thoa: ax + by = (a,b)
void Euclid(int a, int b, int &x, int &y)
{
     x = 0; y = 1;
     int u = 1, v = 0, q = a / b, r = a % b, t;
     while (r != 0)
     {
        a = b; b = r;
        t = u; u = x; x = t - q*x;
        t = v; v = y; y = t - q*y;
        q = a / b; r = a % b;
     }
}
// Hien thi khoa
void ShowKey()
{ cout << endl << " p = " << p << "   q = " << q
       << "   e = " << e << "   d = " << d
       << "   n = " << n << endl;
  cout << "Private Key = (" << d << "," << n
   << ")   Public Key = (" << e << "," << n  << ") " << endl;
  cout << "So byte = " << SoByte << endl;
}
// Uoc chung lon nhat cua a, b
int gcd(int a, int b)
{
 a = abs(a); b = abs(b);
 int r;
 while (b > 0)
 { r = a%b; a = b; b = r; }
 return a;
}
// Sinh khoa mat (d,n) va khoa cong khai (e,n)
// Can chon sp va sq > 300
int GenKey(int sp, int sq)
{
  srand(10000);
  if (sp < Maxpq) sp = Maxpq + rand() % Maxpq;
  if (sq < Maxpq) sq = Maxpq + rand() % Maxpq;
  p = NextPrime(sp); q = NextPrime(sq);
  while  (p == q)
  {
    p = NextPrime(p + rand() % Maxpq);
  }
  n = p*q;
  SoByte = NumDigit(256,n) - 1;
  phi = (p-1)*(q-1);
  // d: max(p,q+1)..n-1, (phi,d) = 1
  int m = Max(p,q)+1;
  int v = n-1-m;
  do
  {
      d = m + rand() % v;
      if (gcd(phi,d)==1)
      {
        e = Inv(d,phi);
        if (e != d) break;
      }
  }
  while (true);
  // gcd(phi,d) == 1 && (e = Inv(d,phi)) != d
  return 1;
}

// So nguyen to sat sau p
int NextPrime(int p)
{
  if (p < 2) return 2;
  if (p % 2 == 0) --p;
  do
  {
        p += 2;
  } while (!IsPrime(p));
  return p;
}

// n nguyen to ?
bool IsPrime(int n)
{
  if (n < 2) return false;
  if (n == 2) return true;
  if (n % 2 == 0) return false;
  int can = int(sqrt(n));
  int i;
  for (i = 3; i <= can; i += 2)
    if (n % i == 0) return false;
  return true;
}

// Sinh n so nguyen to dau tien, ghi file fn
// Sang Eratosthene
void Sang(char *fn, int n)
{
     int a[mn+1];
     n = Min(mn,n);
     int i,j,ni;
     int can = int(sqrt(n));
     memset(a,sizeof(a),0);
     for (i = 2; i <= can; ++i)
       if (a[i]==0)
       {
         ni = n / i;
         for (j = i; j <= ni; ++j) a[i*j] = 1;
       }
     ofstream f(fn);
     for (i = 2; i <= n; ++i)
       if (a[i] == 0) f << i << endl;
     f.close();
}

void TestNum(int sp, int sq)
{
  GenKey(sp,sq);
  ShowKey();
  int x,y,z;
  while (true)
  {

    cout << endl <<  "Give a number between 0.." << (n-1) << ": ";
    do { cin  >> x; } while (x < 0 || x >= n);
    y = Exp(x,e,n);
    cout << endl << "Encoding " << x << " ==> " << y << endl;
    z = Exp(y,d,n);
    cout << endl << "Now Decoding " << y << " ==> " << z << endl;
    if (x != z)
    {
          cout << endl << " Error ";
    }
    cin.get();
    if (x==0) return;
  }
}
void TestStr(int sp, int sq)
{
  GenKey(sp,sq);
  ShowKey();
  int mn = 100;
  char x[mn],y[mn];
  int a[mn];
  int i, len;

  while (true)
  {
    cout << endl <<  "Give a string for test: ";
    cin.get(x,30,'\n');
    len = strlen(x);
    cout << endl << "Given " << x << " with len = " << len << endl;
    cin.get();
    if (len == 0) return;
    for (i = 0; i < len; ++i)
       a[i] = Exp(int(x[i]), e,n);
    cout << endl << " Encoding..." << endl;
    for (i = 0; i < len; ++i)
      cout << a[i] << bl;

    for (i = 0; i < len; ++i)
       y[i] = char(Exp(a[i],d,n));
    y[i] = '\0';
    cout << endl << " Now Decoding... " << y;

  }
}
// So chu so cua x trong he b
int NumDigit(int b, int x)
{
   int d = 0, i;
   do { ++d; x /= b; } while (x > 0);
   return d;
}
// Them so nguyen to vao file fn
int Expand(char *fn)
{
  int x,d=0;
  ifstream f(fn);
  while (true)
  {
    f >> x;
    if (f.eof()) break;
    ++d; cout << x << bl;
  }
  f.close();

  cout << endl << "Total " << d << " number(s)" << endl;
  ofstream g(fn,ios::app);
  do
  {
    x = NextPrime(x);
    ++d;
    g << x << endl;
    cout << x << bl;
  } while (!kbhit());

  g.close();
  cout << endl << "The last prime number is " << x;
  cout << endl << "Total " << d << " prime number(s) in file " << fn;

}
int main() // int argc, char * argv[])
{
    //GenKey(70,99);
    //ShowKey();
    //Sang("primes.dat",10000);
    //Expand("primes.dat");
    //int i = 1200000000;
    //cout << i << bl << sizeof(int) << bl << sizeof(long) ;
   //n = 27-863; d = 1553; e = 133601;
   //cout << endl << gcd(d,phi) << bl << Inv(d,phi) << endl;
    TestStr(66,75);
    cout << endl;
    system("PAUSE");
    return EXIT_SUCCESS;

}
