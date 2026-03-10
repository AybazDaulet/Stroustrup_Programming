#include <iostream>
int main(int argc, char *argv[]) {
  int i = 0;
  while (i <= 25) {
    std::cout << char('a' + i) << ' ' << int(char('a' + i)) << '\n';
    i++;
  }
  return 0;
}
