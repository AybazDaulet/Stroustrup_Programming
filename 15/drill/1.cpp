#include <iostream>
#include <ostream>

void print_array(std::ostream &os, int *a, int n) {
  for (int i = 0; i < n; i++) {
    os << a[i] << ' ';
  }
}

int main(int argc, char *argv[]) {
  int *a = new int[10];
  for (int i = 0; i < 10; i++) {
    std::cout << a[i] << '\n';
  }
  delete[] a;

  int *x = new int[7]{1, 2, 3, 4, 5, 6, 7};
  print_array(std::cout, x, 7);
  return 0;
}
