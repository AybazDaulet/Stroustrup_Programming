#include <iostream>
using namespace std;

int main() {
  double val1, val2;

  cout << "Enter two floating-point values: ";
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

/* Difference between the programs 4 and 5:
* 5:
Enter two floating-point values: 4.32
64.53
64.53 is the bigger value
68.85 is the sum of the values
-60.21 is the difference
278.77 is the product
0.0669456 is the ratio

5:
Enter two integer values: 4.32 64.53
4 is the bigger value
4 is the sum of the values
4 is the difference
0 is the product
Ratio undefined (division by zero)*/
