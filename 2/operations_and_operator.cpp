#include <iostream>
using namespace std;
int main() {
  cout << "Please enter a floating-point value:";
  int n = 0;
  cin >> n;
  cout << "n==" << n << "\nn+1==" << n + 1 << "\nn-2==" << n - 2
       << "\nn*3==" << n * 3 << "\nn/4==" << n / 4 << "\nn%5==" << n % 5
       << "\nn++==" << n++ << "\nn--==" << n-- << "\nn==" << n
       << "\nn!=" << n + 5 << "\nn>" << n - 5 << "\nn>=" << n << "\nn<" << n + 5
       << "\nn<=" << n + 3 << endl;
}
