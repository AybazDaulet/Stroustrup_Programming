#include <iostream>
#include <ostream>
#include <vector>

void print_vector(std::ostream &os, const std::vector<int> &v) {
  for (int i : v) {
    os << i << ' ';
  }
}

void print_array(std::ostream &os, int *a, int n) {
  for (int i = 0; i < n; i++) {
    os << a[i] << ' ';
  }
}

int main(int argc, char *argv[]) {
  // array part
  int *a = new int[10]{};
  for (int i = 0; i < 10; i++) {
    std::cout << a[i] << ' ';
  }
  delete[] a;

  int *x = new int[10]{100, 101, 102, 103, 104, 105, 106, 107, 108, 109};
  print_array(std::cout, x, 10);
  std::cout << '\n';

  int *y = new int[11]{100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110};
  print_array(std::cout, y, 11);
  std::cout << '\n';

  int *z = new int[20]{100, 101, 102, 103, 104, 105, 106, 107, 108, 109,
                       110, 111, 112, 113, 114, 115, 116, 117, 118, 119};
  print_array(std::cout, z, 20);
  std::cout << '\n';

  delete[] x;
  delete[] y;
  delete[] z;

  // vector part
  std::vector<int> vx{100, 101, 102, 103, 104, 105, 106, 107, 108, 109};
  print_vector(std::cout, vx);
  std::cout << '\n';

  std::vector<int> vy{100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110};
  print_vector(std::cout, vy);
  std::cout << '\n';

  std::vector<int> vz{100, 101, 102, 103, 104, 105, 106, 107, 108, 109,
                      110, 111, 112, 113, 114, 115, 116, 117, 118, 119};
  print_vector(std::cout, vz);
  std::cout << '\n';
  return 0;
}
