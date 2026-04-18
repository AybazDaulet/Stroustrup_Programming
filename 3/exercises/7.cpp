#include <iostream>
#include <string>
#include <vector>
int main(int argc, char *argv[]) {
  std::vector<std::string> sv{"zero", "one", "two",   "three", "four",
                              "five", "six", "seven", "eight", "nine"};
  std::cout << "Enter a digit (e.g. 1): ";
  int i;
  std::cin >> i;
  std::cout << sv[i];
  std::cout << "\nEnter a digit spelled (e.g. one): ";
  std::string s;
  std::cin >> s;
  for (int i = 0; i < sv.size(); i++) {
    if (s == sv[i])
      std::cout << i << '\n';
  }
  return 0;
}
