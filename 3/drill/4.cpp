#include <iostream>
#include <string>
using namespace std;
int main(int argc, char *argv[]) {
  while (true) {
    cout << "enter two integers: ";
    double a, b;
    cin >> a >> b;
    if (a == b) {
      cout << "the numbers are equal\n";
    } else {
      cout << "the smaller value is: " << (a < b ? a : b) << '\n';
      cout << "the larger value is: " << (b < a ? a : b) << '\n';
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
