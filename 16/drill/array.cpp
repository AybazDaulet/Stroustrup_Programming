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
  int fa[n];
  int i = 0;
  for (int *p = &fa[0]; p < &fa[n]; ++p) {
    *p = a[i];
    i++;
    std::cout << *p << ' ';
  }
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

  f(aa, 7);
  return 0;
}
