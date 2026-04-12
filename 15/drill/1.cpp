#include <iostream>
int main(int argc, char *argv[]) {
  int *a = new int[10];
  for (int i = 0; i < 10; i++) {
    std::cout << a[i] << '\n';
  }
  return 0;
}
