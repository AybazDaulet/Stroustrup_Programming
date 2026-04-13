#include <iostream>
#include <vector>

std::vector<int> gv{1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

void f(std::vector<int> v) {
  std::vector<int> lv = gv;
  for (int i : lv) {
    std::cout << i << ' ';
  }
  std::cout << '\n';
  std::vector<int> lv2 = v;
  for (int i : lv2) {
    std::cout << i << ' ';
  }
  std::cout << '\n';
}
int main(int argc, char *argv[]) {
  f(gv);
  std::vector<int> vv{1,
                      2 * 1,
                      3 * 2 * 1,
                      4 * 3 * 2 * 1,
                      5 * 4 * 3 * 2 * 1,
                      6 * 5 * 4 * 3 * 2 * 1,
                      7 * 6 * 5 * 4 * 3 * 2 * 1,
                      8 * 7 * 6 * 5 * 4 * 3 * 2 * 1,
                      9 * 8 * 7 * 6 * 5 * 4 * 3 * 2 * 1,
                      10 * 9 * 8 * 7 * 6 * 5 * 4 * 3 * 2 * 1};
  f(vv);

  return 0;
}
