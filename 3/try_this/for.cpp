#include <iostream>
int main(int argc, char *argv[]) {
  for (int i = 0; i <= 74; i++) {
    std::cout << char('0' + i) << ' ' << int(char('0' + i)) << '\n';
  }
  return 0;
}
