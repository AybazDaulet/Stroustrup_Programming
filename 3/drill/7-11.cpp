#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(int argc, char *argv[]) {
  double smallest, largest, sum = 0;
  int counter = 0;
  vector<double> values;
  while (true) {
    cout << "enter a double and a unit (e.g. 10 cm, 2.5 in, 5 ft, 3.33 m): ";
    double x;
    string unit;
    cin >> x >> unit;
    if (unit == "cm") {
    } else if (unit == "m") {
      x *= 100;
    } else if (unit == "in") {
      x *= 2.54;
    } else if (unit == "ft") {
      x = x * 12 * 2.54;
    } else {
      cout << "You have entered an illegal unit.\n";
      continue;
    }
    counter++;
    values.push_back(x / 100);
    if (counter == 1) {
      smallest = x;
      largest = x;
    }
    cout << x << '\n';
    if (x < smallest) {
      smallest = x;
      cout << x / 100 << "m is the smallest so far\n";
    } else if (x > largest) {
      largest = x;
      cout << x / 100 << "m is the largest so far\n";
    }
    sum += x;
    cout << "enter '|' if you want to exit or anything else to continue: ";
    string terminator;
    cin >> terminator;
    if (terminator == "|") {
      break;
    }
  }
  sort(values.begin(), values.end());
  cout << "The largest value is " << largest / 100 << "m\n"
       << "The smallest value is " << smallest / 100 << "m\n"
       << "The number of values is " << counter << '\n'
       << "The sum of values is " << sum / 100 << "m\n"
       << "The values entered are ";

  for (double value : values) {
    cout << value << "m\n";
  }
  return 0;
}
