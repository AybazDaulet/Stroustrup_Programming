#include <iostream>
#include <string>
int main(int argc, char *argv[]) {
  std::string input;
  std::cout << "enter a spelled-out number: ";
  std::cin >> input;
  std::cout << "the corresponding digit is ";
  if (input == "zero") {
    std::cout << 0;
  } else if (input == "one") {
    std::cout << 1;
  } else if (input == "two") {
    std::cout << 2;
  } else if (input == "three") {
    std::cout << 3;
  } else if (input == "four") {
    std::cout << 4;
  } else {
    std::cout << "not a number I know";
  }
  std::cout << '\n';
  return 0;
}
