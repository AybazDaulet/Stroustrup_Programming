#include <iostream>
#include <string>
int main(int argc, char *argv[]) {
  std::cout << "Enter an operation followed by two operands. For example:\n+ "
               "100 3.14\n* 4 5\n";
  std::string operation;
  double var1, var2;
  std::cin >> operation >> var1 >> var2;
  std::cout << "The result is ";
  if (operation == "+" || operation == "plus") {
    std::cout << (var1 + var2);
  } else if (operation == "-" || operation == "minus") {
    std::cout << (var1 - var2);
  } else if (operation == "*" || operation == "mul") {
    std::cout << (var1 * var2);
  } else if (operation == "/" || operation == "div") {
    std::cout << (var1 / var2);
  }
  std::cout << '\n';

  return 0;
}
