#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
int main(int argc, char *argv[]) {
  double smallest, largest;
  int counter = 0;
  while (true) {
    counter++;
    cout << "enter a double: ";
    double x;
    cin >> x;
    if (counter == 1) {
      smallest = x;
      largest = x;
    }
    cout << x << '\n';
    if (x < smallest) {
      smallest = x;
      cout << "is the smallest so far\n";
    } else if (x > largest) {
      largest = x;
      cout << "is the largest so far\n";
    }
    cout << "enter '|' if you want to exit or anything else to continue: ";
    string terminator;
    cin >> terminator;
    if (terminator == "|") {
      break;
    }
  }
  return 0;
}
