#include <iostream>
int main(int argc, char *argv[]) {
  char currency;
  std::cout << "Enter the currency - y for yen, k for kroner, p for pounds, f "
               "for francs: ";
  std::cin >> currency;
  std::cout << "\nHow much do you have? ";
  double total;
  std::cin >> total;
  double dollars;
  switch (currency) {
  case ('y'):
    dollars = total / 157.76;
    break;
  case ('k'):
    dollars = total / 6.43;
    break;
  case ('p'):
    dollars = total * 1.34;
    break;
  case ('f'):
    dollars = total * 0.78;
    break;
  default:
    std::cout << "\nI don't know such a currency.";
    break;
  }
  std::cout << "\nYour currency can be converted to $" << dollars << '\n';
  return 0;
}
