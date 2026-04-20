#include <climits>
#include <iostream>
int main(int argc, char *argv[]) {
  int square = 1;
  int current_square_grain = 1;
  int grain_total_int = 1;
  double grain_total_double = 1;
  bool is_thousand = false, is_million = false, is_billion = false,
       is_int_negative = false, is_double_negative = false;
  for (; square <= 64; square++) {
    if (grain_total_int >= 1000 && !is_thousand) {
      std::cout << square
                << " squares are required to give the inventor 1000 grains of "
                   "rice!\n";
      is_thousand = true;
    }
    if (grain_total_int >= 1000000 && !is_million) {
      std::cout << square
                << " squares are required to give the inventor 1,000,000 "
                   "grains of rice!\n";
      is_million = true;
    }
    if (grain_total_int >= 1000000000 && !is_billion) {
      std::cout << square
                << " squares are required to give the inventor 1,000,000,000 "
                   "grains of rice!\n";
      is_billion = true;
    }
    if (!is_double_negative && grain_total_double == -1) {
      std::cout << "The largest number of square for which you can calculate "
                   "the approximate number of grains is "
                << square - 1 << '\n';
      is_double_negative = true;
    }
    current_square_grain *= 2;
    if (!is_int_negative && grain_total_int > INT_MAX - current_square_grain) {
      std::cout << "The largest number of square for which you can calculate "
                   "the exact number of grains is "
                << square - 1 << '\n';
      is_int_negative = true;
    }
    grain_total_int += current_square_grain;
    grain_total_double += current_square_grain;
  }
  return 0;
}
