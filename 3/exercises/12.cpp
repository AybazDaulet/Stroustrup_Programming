#include <iostream>
#include <vector>
bool isprime(int i) {
  std::vector<int> primes{2,  3,  5,  7,  11, 13, 17, 19, 23, 29, 31, 37, 41,
                          43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
  for (int prime : primes) {
    if (i == prime) {
      return true;
    }
  }
  return false;
}

int main(int argc, char *argv[]) {
  std::vector<int> primes{};
  for (int i = 1; i <= 100; i++) {
    if (isprime(i)) {
      primes.push_back(i);
    }
  }
  for (int prime : primes) {
    std::cout << prime << '\n';
  }
  return 0;
}
