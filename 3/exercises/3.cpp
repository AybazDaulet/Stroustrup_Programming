#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char *argv[]) {

  // compute median temperatures
  vector<double> temps;
  for (double temp; cin >> temp;) {
    temps.push_back(temp);
  }
  // compute median tempreture
  ranges::sort(temps);
  cout << "Median temperature: "
       << (temps.size() % 2 != 0
               ? temps[temps.size() / 2]
               : (temps[temps.size() / 2] + temps[temps.size() / 2 - 1]) / 2)
       << '\n';
  return 0;
}
