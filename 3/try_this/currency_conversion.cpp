#include <iostream>
int main(int argc, char *argv[]) {
  char currency;
  std::cout
      << "Enter the currency - y for yen, k for kroner, and p for pounds: ";
  std::cin >> currency;
  std::cout << "\nHow much do you have? ";
  double total;
  std::cin >> total;
  double dollars;
  if (currency == 'y') {
    dollars = total / 157.76;
  } else if (currency == 'k') {
    dollars = total / 6.43;
  } else if (currency == 'p') {
    dollars = total * 1.34;
  } else {
    std::cout << "\nI don't know such a currency.";
  }
  std::cout << "\nYour currency can be converted to $" << dollars << '\n';
  return 0;
}
