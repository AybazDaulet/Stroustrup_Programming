#include <iostream>
int main(int argc, char *argv[]) {
  std::cout << "Enter an integer value: ";
  int val;
  std::cin >> val;
  std::cout << "The value " << val
            << (val % 2 == 0 ? " is even.\n" : " is odd.\n");
  return 0;
}
