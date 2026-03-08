#include <iostream>
using namespace std;

int main() {
  int val1, val2;

  cout << "Enter two integer values: ";
  cin >> val1 >> val2;

  if (val1 > val2)
    cout << val1 << " is the bigger value\n";
  else if (val2 > val1)
    cout << val2 << " is the bigger value\n";
  else
    cout << "Both values are equal\n";

  cout << (val1 + val2) << " is the sum of the values\n";
  cout << (val1 - val2) << " is the difference\n";
  cout << (val1 * val2) << " is the product\n";

  if (val2 != 0)
    cout << (double)val1 / val2 << " is the ratio\n";
  else
    cout << "Ratio undefined (division by zero)\n";
}
