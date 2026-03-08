#include <iostream>
int main(int argc, char *argv[]) {
  std::cout << "enter three integer values: ";
  int val1, val2, val3;
  std::cin >> val1 >> val2 >> val3;
  if (val1 < val2 && val1 < val3) {
    std::cout << val1;
    if (val2 < val3) {
      std::cout << val2 << val3;
    } else {
      std::cout << val3 << val2;
    }
  } else if (val2 < val1 && val2 < val3) {
    std::cout << val2;
    if (val1 < val3) {
      std::cout << val1 << val3;
    } else {
      std::cout << val3 << val1;
    }
  } else {
    std::cout << val3;
    if (val1 < val2) {
      std::cout << val1 << val2;
    } else {
      std::cout << val2 << val1;
    }
  };

  return 0;
}
