#include <iostream>
int main(int argc, char *argv[]) {
  int pennies, nickels, dimes, quarters, half_dollars, one_dollar_coins;
  std::cout << "How many pennies do you have?\n";
  std::cin >> pennies;
  std::cout << "How many nickels do you have?\n";
  std::cin >> nickels;
  std::cout << "How many dimes do you have?\n";
  std::cin >> dimes;
  std::cout << "How many quarters do you have?\n";
  std::cin >> quarters;
  std::cout << "How many half dollars do you have?\n";
  std::cin >> half_dollars;
  std::cout << "How many one dollar coins do you have?\n";
  std::cin >> one_dollar_coins;

  std::cout << "You have " << pennies << (pennies == 1 ? " penny" : " pennies");
  std::cout << "\nYou have " << nickels
            << (nickels == 1 ? " nickel" : " nickels");
  std::cout << "\nYou have " << dimes << (dimes == 1 ? " dime" : " dimes");
  std::cout << "\nYou have " << quarters
            << (quarters == 1 ? " quarter" : " quarters");
  std::cout << "\nYou have " << half_dollars
            << (half_dollars == 1 ? " half dollar" : " half dollars");
  std::cout << "\nYou have " << one_dollar_coins
            << (one_dollar_coins == 1 ? " one dollar coin"
                                      : " one dollar coins");

  double total = pennies + nickels * 5 + quarters * 25 + half_dollars * 50 +
                 one_dollar_coins * 100;
  std::cout << "\nThe value of all of your coins is $" << total / 100 << "\n";
  return 0;
}
