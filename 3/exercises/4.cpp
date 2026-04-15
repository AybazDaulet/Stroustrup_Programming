#include <iostream>
#include <vector>
int main(int argc, char *argv[]) {
  std::vector<double> distances;
  std::cout << "Write distances between cities\n";
  for (double distance; std::cin >> distance;) {
    distances.push_back(distance);
  }

  // compute the total distance
  double sum = 0;
  for (double distance : distances) {
    sum += distance;
  }
  std::cout << "The total distance is " << sum << '\n';

  // compute the smallest and greatest distance
  std::ranges::sort(distances);
  std::cout << "The smallest distance between two neighboring cities is "
            << distances[0]
            << "\nThe greatest distance between two neighboring cities is "
            << distances[distances.size() - 1];

  // compute the mean distance
  double mean = sum / distances.size();
  std::cout << "\nThe mean distance between two neighboring cities is " << mean
            << '\n';

  return 0;
}
