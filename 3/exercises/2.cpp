#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
  string input;
  cin >> input;
  for (char input_char : input) {
    int intInputChar = input_char - '0';
    cout << input_char << '\t' << intInputChar << '\n';
  }
  return 0;
}
