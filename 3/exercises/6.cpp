#include <iostream>
int main(int argc, char *argv[]) {
  std::cout << "Enter three arguments: two double values and a character to "
               "represent an operation (e.g. 3.59 8.26 *): ";
  double d1, d2;
  char o;
  std::cin >> d1 >> d2 >> o;
  std::cout << "\nThe "
            << (o == '+'   ? "sum "
                : o == '-' ? "difference "
                : o == '*' ? "product "
                           : "quotient ")
            << "of " << d1 << " and " << d2 << " is "
            << (o == '+'   ? d1 + d2
                : o == '-' ? d1 - d2
                : o == '*' ? d1 * d2
                           : d1 / d2)
            << '\n';
  return 0;
}
