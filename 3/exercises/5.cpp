#include <cctype>
#include <iostream>
int main(int argc, char *argv[]) {
  int high = 100;
  int low = 1;
  while (low < high) {
    int mid = (high - low) / 2 + low;
    std::cout << "Is you number less than " << mid << "? (Y/N) ";
    char c;
    std::cin >> c;
    if (toupper(c) == 'Y') {
      high = mid - 1;
    } else {
      low = mid;
    }
  }
  std::cout << "Your number is " << high << '\n';
  return 0;
}
