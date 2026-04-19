#include <cstddef>
#include <iostream>
#include <string>
#include <vector>

int spell_to_digit(std::string sd) {
  std::vector<std::string> sv{"zero", "one", "two",   "three", "four",
                              "five", "six", "seven", "eight", "nine"};
  for (int i = 0; i < sv.size(); i++) {
    if (sd == sv[i])
      return i;
  }
  return -1;
}

int main(int argc, char *argv[]) {
  std::cout << "Enter three arguments: two double values and a character to "
               "represent an operation (e.g. 3 eight *): ";
  std::string d1, d2;
  double i1, i2;
  std::string o;
  std::cin >> d1 >> d2 >> o;
  if (d1.size() > 1) {
    i1 = spell_to_digit(d1);
  } else {
    i1 = d1[0] - '0';
  }
  if (d2.size() > 1) {
    i2 = spell_to_digit(d2);
  } else {
    i2 = d2[0] - '0';
  }
  std::cout << "\nThe "
            << (o == "+"   ? "sum "
                : o == "-" ? "difference "
                : o == "*" ? "product "
                           : "quotient ")
            << "of " << i1 << " and " << i2 << " is "
            << (o == "+"   ? i1 + i2
                : o == "-" ? i1 - i2
                : o == "*" ? i1 * i2
                           : i1 / i2)
            << '\n';
  return 0;
}
