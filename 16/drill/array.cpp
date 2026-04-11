#include <iostream>
void f(int *a, int n) {
  int la[10];
  int value = 1;
  for (int *p = &la[0]; p < &la[10]; ++p) {
    *p = value;
    value *= 2;
    std::cout << *p << ' ';
  }
  std::cout << '\n';

  int *p = new int[n];
  for (int i = 0; i < n; i++) {
    p[i] = a[i];
    std::cout << p[i] << ' ';
  }
  delete[] p;
}

int main(int argc, char *argv[]) {
  int ga[10];
  int value = 1;
  for (int *p = &ga[0]; p < &ga[10]; ++p) {
    *p = value;
    value *= 2;
  }

  int aa[7];
  value = 1;
  for (int *p = &aa[0]; p < &aa[7]; ++p) {
    *p = value;
    value *= 3;
  }
  int *pa = &aa[0];
  f(pa, 7);
  return 0;
}
