#include <cstddef>
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

  // pointers
  int var = 7;
  int *p1 = &var;
  std::cout << "p1 value is " << p1 << "\np1 points to " << *p1 << '\n';
  int *p2 = new int[7]{1, 2, 4, 8, 16, 32, 64};
  std::cout << "p2 value is" << p2 << "\np2 points to " << *p2
            << "\nThe complete array is ";
  print_array(std::cout, p2, 7);
  int *p3 = p2;
  p1 = p2;
  std::cout << "\nthe value of p1 " << p1 << "\nthe value of p2 " << p2
            << "\np1 points to " << *p1 << "\np2 points to " << *p2;
  delete[] p1;
  p1 = p2 = p3 = nullptr;

  p1 = new int[10]{1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
  p2 = new int[10];
  for (int i = 0; i < 10; i++) {
    p2[i] = p1[i];
  }
  std::cout << '\n';
  print_array(std::cout, p2, 10);

  std::vector<int> v1{1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
  std::vector<int> v2;
  for (int x : v1) {
    v2.push_back(x);
  }
  std::cout << '\n';
  print_vector(std::cout, v2);

  return 0;
}
