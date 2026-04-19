#include <iostream>
int main(int argc, char *argv[]) {
  int square = 1;
  int current_square_grain = 1;
  int grain_total = 1;
  bool is_thousand = false, is_million = false, is_billion = false;
  for (; square <= 64; square++) {
    if (grain_total >= 1000 && !is_thousand) {
      std::cout << square
                << " squares are required to give the inventor 1000 grains of "
                   "rice!\n";
      is_thousand = true;
    }
    if (grain_total >= 1000000 && !is_million) {
      std::cout << square
                << " squares are required to give the inventor 1,000,000 "
                   "grains of rice!\n";
      is_million = true;
    }
    if (grain_total >= 1000000000 && !is_billion) {
      std::cout << square
                << " squares are required to give the inventor 1,000,000,000 "
                   "grains of rice!\n";
      is_billion = true;
    }
    current_square_grain *= 2;
    grain_total += current_square_grain;
  }
  return 0;
}
