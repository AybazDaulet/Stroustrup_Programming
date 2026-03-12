#include <iostream>
#include <string>
using namespace std;
int main(int argc, char *argv[]) {
  while (true) {
    cout << "enter two integers: ";
    int a, b;
    cin >> a >> b;
    cout << a << '\n' << b << '\n';
    cout << "enter '|' if you want to exit or anything else to continue: ";
    string terminator;
    cin >> terminator;
    if (terminator == "|") {
      break;
    }
  }
  return 0;
}
